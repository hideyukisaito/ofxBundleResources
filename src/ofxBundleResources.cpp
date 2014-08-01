#include "ofxBundleResources.h"
#include "Poco/Format.h"


ofxBundleResources::ofxBundleResources() {}
ofxBundleResources::~ofxBundleResources() {}

void ofxBundleResources::setup(const string optionalPath)
{
    CFURLRef  bundleURL_ = CFBundleCopyResourcesDirectoryURL(CFBundleGetMainBundle());
    char buf_[4096];
    
    if (CFURLGetFileSystemRepresentation(bundleURL_, TRUE, (UInt8 *)buf_, 4096))
    {
        string path_ = buf_;
        ofSetDataPathRoot(Poco::format("%s/%s", path_, optionalPath));        
        path_.clear();
    }
    CFRelease(bundleURL_);
}