//
//  DIYScanViewController.h
//  jsh-app-meeting-ios
//
//  Created by 巨商汇 on 2020/3/14.
//  Copyright © 2020 巨商汇. All rights reserved.
//

#import <JSHFMBase/BaseVC.h>
#import <LBXScanViewStyle.h>
#import <LBXScanNative.h>
#import <ZXingWrapper.h>
#import <LBXZBarWrapper.h>
#import <LBXScanView.h>

typedef NS_ENUM(NSInteger, SCANLIBRARYTYPE) {
    SLT_Native,
    SLT_ZXing,
    SLT_ZBar
};

// @[@"QRCode",@"BarCode93",@"BarCode128",@"BarCodeITF",@"EAN13"];
typedef NS_ENUM(NSInteger, SCANCODETYPE) {
    SCT_QRCode, //QR二维码
    SCT_BarCode93,
    SCT_BarCode128,//支付条形码(支付宝、微信支付条形码)
    SCT_BarCodeITF,//燃气回执联 条形码?
    SCT_BarEAN13 //一般用做商品码
};


@interface DIYScanViewController : BaseVC<UIImagePickerControllerDelegate,UINavigationControllerDelegate>

#pragma mark ---- 需要初始化参数 ------
//当前选择的扫码库
@property (nonatomic, assign) SCANLIBRARYTYPE libraryType;

//

/**
 当前选择的识别码制
 - ZXing暂不支持类型选择
 */
@property (nonatomic, assign) SCANCODETYPE scanCodeType;



/**
 @brief 是否需要扫码图像
 */
@property (nonatomic, assign) BOOL isNeedScanImage;



/**
 @brief  启动区域识别功能，ZBar暂不支持
 */
@property(nonatomic,assign) BOOL isOpenInterestRect;


/**
 相机启动提示,如 相机启动中...
 */
@property (nonatomic, copy) NSString *cameraInvokeMsg;

/**
 *  界面效果参数
 */
#ifdef LBXScan_Define_UI
@property (nonatomic, strong) LBXScanViewStyle *style;
#endif



#pragma mark -----  扫码使用的库对象 -------

#ifdef LBXScan_Define_Native
/**
 @brief  扫码功能封装对象
 */
@property (nonatomic,strong) LBXScanNative* scanObj;

#endif


#ifdef LBXScan_Define_ZXing
/**
 ZXing扫码对象
 */
@property (nonatomic, strong) ZXingWrapper *zxingObj;
#endif



#ifdef LBXScan_Define_ZBar
/**
 ZBar扫码对象
 */
@property (nonatomic, strong) LBXZBarWrapper *zbarObj;

#endif




#pragma mark - 扫码界面效果及提示等
/**
 @brief  扫码区域视图,二维码一般都是框
 */

#ifdef LBXScan_Define_UI
@property (nonatomic,strong) LBXScanView* qRScanView;
#endif



/**
 @brief  扫码存储的当前图片
 */
@property(nonatomic,strong) UIImage* scanImage;


/**
 @brief  闪关灯开启状态记录
 */
@property(nonatomic,assign)BOOL isOpenFlash;


//闪光灯
@property (nonatomic, strong) UIButton *btnFlash;

/** 扫一扫是否同时支持群二维码+好友二维码 */
@property(nonatomic , assign) BOOL isSupportAllCode;

//打开相册
- (void)openLocalPhoto:(BOOL)allowsEditing;

//开关闪光灯
- (void)openOrCloseFlash;

//启动扫描
- (void)reStartDevice;

//关闭扫描
- (void)stopScan;



@end
