##ofxBundleResources

Tiny addon to set data path root to YourApp.app/Contents/Resources/.

##Usage

In top of ofApp::setup(), simply add a following line.

```
ofxBundleResources::setup();
```

Note that you also have to add a following line to Build Phases > Run Script.

```
rsync -a bin/data/ "$TARGET_BUILD_DIR/$PRODUCT_NAME.app/Contents/Resources/" --exclude "/.DS_Store" --exclude "/.gitkeep"
```

You can use `if` statement for preprocessor macros to decide whether to copy or not.

```
if [[ ${GCC_PREPROCESSOR_DEFINITIONS} =~ "RELEASE=1" ]]; then
    rsync -a bin/data/ "$TARGET_BUILD_DIR/$PRODUCT_NAME.app/Contents/Resources/" --exclude "/exclude/" --exclude "/*DS_Store" --exclude "/.gitkeep"
fi
```

##License

MIT License
