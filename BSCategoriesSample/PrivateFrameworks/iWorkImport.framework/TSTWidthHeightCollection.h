/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTWidthHeightCollection : NSObject {
    struct vector<std::__1::pair<TSUCellCoord, float>, std::__1::allocator<std::__1::pair<TSUCellCoord, float> > > { 
        struct pair<TSUCellCoord, float> {} *__begin_; 
        struct pair<TSUCellCoord, float> {} *__end_; 
        struct __compressed_pair<std::__1::pair<TSUCellCoord, float> *, std::__1::allocator<std::__1::pair<TSUCellCoord, float> > > { 
            struct pair<TSUCellCoord, float> {} *__first_; 
        } __end_cap_; 
    }  mFittingHeights;
    struct vector<TSUCellCoord, std::__1::allocator<TSUCellCoord> > { 
        struct TSUCellCoord {} *__begin_; 
        struct TSUCellCoord {} *__end_; 
        struct __compressed_pair<TSUCellCoord *, std::__1::allocator<TSUCellCoord> > { 
            struct TSUCellCoord {} *__first_; 
        } __end_cap_; 
    }  mResetHeights;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addFittingHeight:(float)arg1 forCellID:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg2;
- (void)addResetHeightForCellID:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (void)enumerateFittingHeightsUsingBlock:(id /* block */)arg1;
- (void)enumerateResetHeightsUsingBlock:(id /* block */)arg1;

@end