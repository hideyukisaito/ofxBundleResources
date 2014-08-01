#pragma once

#include "ofMain.h"

/**
 * Before using this addon, you must add a following line to Xcode's "Build Phases > Run Script".
 * This script copies all assets in the "data" directory into "YourApp.app/Contents/Resources/".
 *
 * cp -r bin/data/ "$TARGET_BUILD_DIR/$PRODUCT_NAME.app/Contents/Resources/"
 *
 *
 * You can pass the other dir name when you call setup(). The default value is empty string.
 *
 */

class ofxBundleResources
{
public:
    ofxBundleResources();
    ~ofxBundleResources();
    
    static void setup(const string optionalPath = "");
};