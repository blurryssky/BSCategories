/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface AlarmView : UIView {
    id  _contentSizeFontAdjustObserver;
    NSArray * _currentConstraints;
    UILabel * _detailLabel;
    UISwitch * _enabledSwitch;
    NSString * _name;
    UIFont * _nameFont;
    UIFont * _repeatFont;
    NSString * _repeatText;
    BOOL  _shouldAddLayoutConstraints;
    int  _style;
    BOOL  _switchVisible;
    DigitalClockLabel * _timeLabel;
}

@property (nonatomic, retain) NSArray *currentConstraints;
@property (nonatomic, readonly) UILabel *detailLabel;
@property (nonatomic, readonly) UISwitch *enabledSwitch;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) UIFont *nameFont;
@property (nonatomic, retain) UIFont *repeatFont;
@property (nonatomic, copy) NSString *repeatText;
@property (nonatomic) BOOL shouldAddLayoutConstraints;
@property (nonatomic) int style;
@property (getter=isSwitchVisible, nonatomic) BOOL switchVisible;
@property (nonatomic, readonly) DigitalClockLabel *timeLabel;
@property (nonatomic, readonly) NSDictionary *viewsByIdentifier;

- (void).cxx_destruct;
- (void)_loadFontsWithTextStyles;
- (id)currentConstraints;
- (id)detailLabel;
- (id)enabledSwitch;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isSwitchVisible;
- (id)name;
- (id)nameFont;
- (id)repeatFont;
- (id)repeatText;
- (void)setCurrentConstraints:(id)arg1;
- (void)setName:(id)arg1;
- (void)setName:(id)arg1 andRepeatText:(id)arg2 textColor:(id)arg3;
- (void)setNameFont:(id)arg1;
- (void)setRepeatFont:(id)arg1;
- (void)setRepeatText:(id)arg1;
- (void)setShouldAddLayoutConstraints:(BOOL)arg1;
- (void)setStyle:(int)arg1;
- (void)setSwitchVisible:(BOOL)arg1;
- (BOOL)shouldAddLayoutConstraints;
- (int)style;
- (void)tearDownContentSizeChangeObserver;
- (id)timeLabel;
- (void)updateConstraints;
- (void)updatePreferredMaxLayoutWidthForDetailContainerLabels;
- (id)viewsByIdentifier;

@end