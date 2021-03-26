# YXCollegeSDK
一、营销学院组件
YXCollegeSDK.framework为营销学院组件
pod 'YXCollegeSDK' 
YXCollegeSDK依赖于VHClassSDK,所以不需要下载VHClassSDK,直接pod 'YXCollegeSDK' 即可

二、微吼SDK
pod 'VHClassSDK'  #微吼sdk
VHClassSDK为直播所需的微吼SDK，引入工程后，按如下配置：
1、将工程中任意文件.m改为.mm；
2、在TARGETS - General - Embedded Binaries下添加
VhallLiveBaseApi、WebRTC。（Xcode 11+无Embedded Binaries，请在Frameworks，Libraries，and Embedded Content下，将VhallLiveBaseApi、WebRTC改为Embed&Sign）
3、在TARGETS - Build Setting - Enable Bitcode 将值改为NO
4、添加系统依赖库libicucore.tbd
5、注意使用互动功能时，需要添加摄像头和麦克风的权限配置

（微吼SDK官方文档 https://www.vhall.com/class/doc/1605.html）

三、cocoapods依赖库
pod 'AFNetworking', '~> 3.2.1'
pod 'SDAutoLayout'
pod 'SDWebImage'
pod 'MBProgressHUD'
pod 'IQKeyboardManager'
pod 'JSONModel'
pod 'MJExtension'
pod 'MJRefresh'
pod  'Masonry'

四、组件的使用
1、#import <YXCollegeSDK/JSHMcService.h>
2、调用接口获取到expid与studyTerminalCode后,需要跳转的地方参考如下代码
3、如果要切换不同的环境，修改projectVersion这个参数的传入值，0：代表生产环境； 1代表pre环境；-1代表测试环境；

if (!TARGET_IPHONE_SIMULATOR) { ///仅支持真机调试
    [JSHMcService setupWithAppKey:@"微吼AppKey" appSecretKey:@"微吼SecretKey"];
    NSString *expid = @"获取到的expid";
    NSString *studyTerminalCode = @"获取到的studyTerminalCode";
    NSDictionary *params = @{@"expid":expid,@"studyTerminalCode":studyTerminalCode};
    UIViewController *mcVC = [JSHMcService startWithParams:params h5Path:nil projectVersion:0];
    mcVC.modalPresentationStyle = UIModalPresentationFullScreen;
    [self.navigationController pushViewController:mcVC animated:YES];
}

