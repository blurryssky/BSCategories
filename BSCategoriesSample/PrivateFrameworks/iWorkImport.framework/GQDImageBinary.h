/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDImageBinary : NSObject {
    struct __CFURL { } * mAbsoluteUrl;
    struct __CFString { } * mPath;
    int  mResourceType;
    struct CGSize { 
        float width; 
        float height; 
    }  mSize;
}

- (struct __CFURL { }*)createAbsoluteUrlForState:(id)arg1;
- (void)dealloc;
- (int)readDataAttributesFromReader:(struct _xmlTextReader { }*)arg1;
- (struct __CFString { }*)relativePath;
- (int)resourceType;
- (struct CGSize { float x1; float x2; })size;

@end