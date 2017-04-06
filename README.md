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

##License

MIT License
