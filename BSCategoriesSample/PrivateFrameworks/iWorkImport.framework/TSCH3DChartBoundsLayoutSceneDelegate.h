/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartBoundsLayoutSceneDelegate : NSObject <TSCH3DChartAllSceneObjectDelegate, TSCH3DSceneDelegate, TSCH3DSceneObjectDelegator> {
    /* Warning: unhandled struct encoding: '{ActiveLabelsTypeBounds=i{ObjcSharedPtr<NSMutableIndexSet>=@}{map<int, TSCH3D::CachedLabelBoundsArray, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, TSCH3D::CachedLabelBoundsArray> > >={__tree<std::__1::__value_type<int, TSCH3D::CachedLabelBoundsArray>, std::__1::__map_value_compare<int, std::__1::__value_type<int, TSCH3D::CachedLabelBoundsArray>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, TSCH3D::CachedLabelBoundsArray> > >=^{__tree_node<std::__1::__value_type<int, TSCH3D::CachedLabelBoundsArray>, void *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, TSCH3D::CachedLabelBoundsArray>, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, TSCH3D::CachedLabelBoundsArray>, std::__1::less<int>, true> >=L}}}}' */ struct ActiveLabelsTypeBounds { int x1; struct ObjcSharedPtr<NSMutableIndexSet> { id x_2_1_1; struct map<int, TSCH3D::CachedLabelBoundsArray, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, TSCH3D::CachedLabelBoundsArray> > > { struct __tree<std::__1::__value_type<int, TSCH3D::CachedLabelBoundsArray>, std::__1::__map_value_compare<int, std::__1::__value_type<int, TSCH3D::CachedLabelBoundsArray>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, TSCH3D::CachedLabelBoundsArray> > > { struct __tree_node<std::__1::__value_type<int, TSCH3D::CachedLabelBoundsArray>, void *> {} *x_1_3_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, TSCH3D::CachedLabelBoundsArray>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, TSCH3D::CachedLabelBoundsArray>, std::__1::less<int>, true> > { unsigned long x_3_4_1; } x_1_3_3; } x_2_2_1; } x_2_1_2; } x2; } * mActiveBounds;
    TSUMutablePointerSet * mDebugCachedSceneObjects;
    BOOL  mLabelsDidOverride;
    BOOL  mLabelsHaveCache;
    TSCH3DGetBoundsPipeline * mPipeline;
    struct map<TSCH3D::SceneObjectSharedPointer, TSCH3D::ActiveLabelsTypeBounds, std::__1::less<TSCH3D::SceneObjectSharedPointer>, std::__1::allocator<std::__1::pair<const TSCH3D::SceneObjectSharedPointer, TSCH3D::ActiveLabelsTypeBounds> > > { 
        struct __tree<std::__1::__value_type<TSCH3D::SceneObjectSharedPointer, TSCH3D::ActiveLabelsTypeBounds>, std::__1::__map_value_compare<TSCH3D::SceneObjectSharedPointer, std::__1::__value_type<TSCH3D::SceneObjectSharedPointer, TSCH3D::ActiveLabelsTypeBounds>, std::__1::less<TSCH3D::SceneObjectSharedPointer>, true>, std::__1::allocator<std::__1::__value_type<TSCH3D::SceneObjectSharedPointer, TSCH3D::ActiveLabelsTypeBounds> > > { 
            struct __tree_node<std::__1::__value_type<TSCH3D::SceneObjectSharedPointer, TSCH3D::ActiveLabelsTypeBounds>, void *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<TSCH3D::SceneObjectSharedPointer, TSCH3D::ActiveLabelsTypeBounds>, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __first_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::__map_value_compare<TSCH3D::SceneObjectSharedPointer, std::__1::__value_type<TSCH3D::SceneObjectSharedPointer, TSCH3D::ActiveLabelsTypeBounds>, std::__1::less<TSCH3D::SceneObjectSharedPointer>, true> > { 
                unsigned long __first_; 
            } __pair3_; 
        } __tree_; 
    }  mSceneObjectLabelsBounds;
    TSCH3DLabelsRendererTransforms * mTransforms;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)sceneDelegate;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didEndProcessingSceneObject:(id)arg1;
- (void)didGenerateShaderEffects:(id)arg1 sceneObject:(id)arg2 pipeline:(id)arg3;
- (void)didGenerateShaderEffectsForSeriesAtIndex:(const struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; }*)arg1 effects:(id)arg2 sceneObject:(id)arg3 pipeline:(id)arg4;
- (void)didProcessElements:(id)arg1 sceneObject:(id)arg2 pipeline:(id)arg3;
- (void)didRunForScene:(id)arg1 pipeline:(id)arg2;
- (void)didSubmitSceneObject:(id)arg1 pipeline:(id)arg2;
- (void)didTransformElement:(const struct RenderElementInfo { id x1; id x2; /* Warning: Unrecognized filer type: 't' using 'void*' */ void*x3; void x4; void*x5; BOOL x6; void*x7; void*x8; int x9; in void*x10; void*x11; void*x12; union { int x_13_1_1; int x_13_1_2; int x_13_1_3; } x13; union { int x_14_1_1; int x_14_1_2; int x_14_1_3; } x14; }*)arg1 sceneObject:(id)arg2;
- (id)init;
- (id)interestedClasses;
- (void)invalidateLabelsBoundsForSceneObjectClass:(Class)arg1 boundsIndex:(int)arg2;
- (void)labelsResourcesSessionWillBeginForSceneObject:(id)arg1 pipeline:(id)arg2;
- (void)labelsResourcesSessionWillEndForSceneObject:(id)arg1 pipeline:(id)arg2;
- (id)makeDelegateWithScene:(id)arg1;
- (id)makeDelegateWithSceneObject:(id)arg1 scene:(id)arg2;
- (void)p_addAllActiveLabelsBounds;
- (void)p_extendProjectedBoundsForCachedLabelBounds:(const /* Warning: unhandled struct encoding: '{CachedLabelBounds={tvec3<float>=(?=fff)(?=fff)(?=fff)}{box<glm::detail::tvec2<float> >={tvec2<float>=(?=fff)(?=fff)}{tvec2<float>=(?=fff)(?=fff)}}{tvec2<float>=(?=fff)(?=fff)}{ObjcSharedPtr<NSString>=@}}' */ struct CachedLabelBounds { struct tvec3<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_1_1_2; union { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_1_1_3; } x1; struct box<glm::detail::tvec2<float> > { struct tvec2<float> { union { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_1_2_1; union { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_1_2_2; } x_2_1_1; struct tvec2<float> { union { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_2_2_1; union { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_2_2_2; } x_2_1_2; } x2; struct tvec2<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_3_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_3_1_2; } x3; struct ObjcSharedPtr<NSString> { id x_4_1_1; } x4; }*)arg1 offset:(const struct tvec3<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; }*)arg2;
- (BOOL)renderPassDelayDisallowedForSceneObject:(id)arg1 pipeline:(id)arg2;
- (struct ElementRenderPass { int x1; })renderPassForElement:(const struct RenderElementInfo { id x1; id x2; /* Warning: Unrecognized filer type: 't' using 'void*' */ void*x3; void x4; void*x5; BOOL x6; void*x7; void*x8; int x9; in void*x10; void*x11; void*x12; union { int x_13_1_1; int x_13_1_2; int x_13_1_3; } x13; union { int x_14_1_1; int x_14_1_2; int x_14_1_3; } x14; }*)arg1 sceneObject:(id)arg2;
- (struct ElementRenderPass { int x1; })renderPassForSceneObject:(id)arg1;
- (void)setOffset:(const struct tvec3<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; }*)arg1 labelType:(int)arg2 boundsIndex:(int)arg3 forSceneObject:(id)arg4;
- (void)updateExternalLabelAttribute:(struct ExternalLabelAttribute { }*)arg1 sceneObject:(id)arg2 labelRenderInfo:(const struct ChartLabelsContainingLabelRenderInfo { id x1; /* Warning: Unrecognized filer type: 't' using 'void*' */ void*x2; void x3; void*x4; BOOL x5; void*x6; void*x7; int x8; in void*x9; void*x10; void*x11; union { int x_12_1_1; int x_12_1_2; int x_12_1_3; } x12; union { int x_13_1_1; int x_13_1_2; int x_13_1_3; } x13; }*)arg3;
- (BOOL)willBeginProcessingSceneObject:(id)arg1;
- (BOOL)willProcessElement:(const struct RenderElementInfo { id x1; id x2; /* Warning: Unrecognized filer type: 't' using 'void*' */ void*x3; void x4; void*x5; BOOL x6; void*x7; void*x8; int x9; in void*x10; void*x11; void*x12; union { int x_13_1_1; int x_13_1_2; int x_13_1_3; } x13; union { int x_14_1_1; int x_14_1_2; int x_14_1_3; } x14; }*)arg1 sceneObject:(id)arg2;
- (BOOL)willProcessElements:(id)arg1 sceneObject:(id)arg2 pipeline:(id)arg3;
- (BOOL)willProcessSeries:(id)arg1 sceneObject:(id)arg2 pipeline:(id)arg3;
- (BOOL)willRenderElement:(const struct RenderElementInfo { id x1; id x2; /* Warning: Unrecognized filer type: 't' using 'void*' */ void*x3; void x4; void*x5; BOOL x6; void*x7; void*x8; int x9; in void*x10; void*x11; void*x12; union { int x_13_1_1; int x_13_1_2; int x_13_1_3; } x13; union { int x_14_1_1; int x_14_1_2; int x_14_1_3; } x14; }*)arg1 sceneObject:(id)arg2;
- (void)willRunForScene:(id)arg1 pipeline:(id)arg2;
- (BOOL)willSubmitElement:(const struct RenderElementInfo { id x1; id x2; /* Warning: Unrecognized filer type: 't' using 'void*' */ void*x3; void x4; void*x5; BOOL x6; void*x7; void*x8; int x9; in void*x10; void*x11; void*x12; union { int x_13_1_1; int x_13_1_2; int x_13_1_3; } x13; union { int x_14_1_1; int x_14_1_2; int x_14_1_3; } x14; }*)arg1 sceneObject:(id)arg2;
- (BOOL)willSubmitLabelForSceneObject:(id)arg1 labelRenderInfo:(const struct ChartLabelsContainingLabelRenderInfo { id x1; /* Warning: Unrecognized filer type: 't' using 'void*' */ void*x2; void x3; void*x4; BOOL x5; void*x6; void*x7; int x8; in void*x9; void*x10; void*x11; union { int x_12_1_1; int x_12_1_2; int x_12_1_3; } x12; union { int x_13_1_1; int x_13_1_2; int x_13_1_3; } x13; }*)arg2;
- (BOOL)willSubmitLabelType:(int)arg1 boundsIndex:(int)arg2 alignment:(unsigned int)arg3 elementIndex:(unsigned int)arg4 forSceneObject:(id)arg5;
- (BOOL)willSubmitSceneObject:(id)arg1 pipeline:(id)arg2;
- (BOOL)willUpdateElementEffectsStatesForElement:(const struct RenderElementInfo { id x1; id x2; /* Warning: Unrecognized filer type: 't' using 'void*' */ void*x3; void x4; void*x5; BOOL x6; void*x7; void*x8; int x9; in void*x10; void*x11; void*x12; union { int x_13_1_1; int x_13_1_2; int x_13_1_3; } x13; union { int x_14_1_1; int x_14_1_2; int x_14_1_3; } x14; }*)arg1 sceneObject:(id)arg2;

@end