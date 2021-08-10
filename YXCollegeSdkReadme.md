# YXCollegeSDK
一、营销学院组件
YXCollegeSDK.framework为营销学院组件
pod 'YXCollegeSDK' 
YXCollegeSDK依赖于CC视频云课堂 iOS端组件化SDK : HDVideoClass_Remote,所以不需要下载HDVideoClass_Remote,直接pod 'YXCollegeSDK' 即可

二、CC视频云课堂 iOS端组件化SDK
pod 'HDVideoClass_Remote'   #CC视频sdk
HDVideoClass_Remote为直播所需的CC视频SDK，引入工程后，按如下配置：
1、在TARGETS - General - Embedded Binaries下添加
CoreTelephony.framework 、SystemConfiguration.framework 、VideoToolbox.framework
libresolv.tbd 、libicucore.tbd 、libstdc++.6.tbd 、libz.tbd 。（Xcode 11+无Embedded Binaries，请在Frameworks，Libraries，and Embedded Content下，将VhallLiveBaseApi、WebRTC改为Embed&Sign）
2、添加项目依赖权限
    (1)Privacy - Camera Usage Description
    用于扫描二维码，及拍摄的时候访问相机、图像采集
    (2)Privacy - Microphone Usage Description
    用户拍摄的时候访问麦克风收录声音，及播放的时候访问麦克风
    (3)Privacy - Media Library Usage Description
    用于访问音频、视频媒体资源
3、Xcode相关配置
    在TARGETS
    (1)Build Settings -> Build Options -> Enable Bitcode -> NO
    (2)Build Settings -> Always Enbed Swift Standar Libraries -> YES
    (3)Build Settings   ->   Other Linker Flags 添加-ObjC
    //如果没有该选项则添加 “Background Modes”
    (4)Capabilities -> Background Modes -> Audio，AirPlay，And Picture in Picture
    (5)设置引入的 SDK 配置为 "Embed & Sign"
    General -> Frameworks，Libraries，and Embedded Content -> Embed -> "Embed & Sign"
4、CC视频SDK官方文档 https://doc.bokecc.com/class/developer/ios/documents/doc.html

三、cocoapods依赖库
#CC视频云课堂pod
pod 'Masonry'
pod 'SDWebImage','~> 5.11.1'
pod 'MJExtension'
pod 'YYImage'
pod 'YYWebImage'
pod 'MBProgressHUD'
pod 'ZLPhotoBrowser-objc', '~> 1.0.1'
pod 'YBImageBrowser','~> 3.0.9'
pod 'JTCalendar', '~> 2.0'
pod 'MJRefresh'
pod 'pop'
#CC视频云课堂pod

四、组件的使用
1、#import <YXCollegeSDK/JSHMcService.h>
2、调用接口获取到expid与studyTerminalCode后,需要跳转的地方参考如下代码
3、如果要切换不同的环境，修改projectVersion这个参数的传入值，0：代表生产环境； 1代表pre环境；-1代表测试环境；

if (!TARGET_IPHONE_SIMULATOR) { ///仅支持真机调试
    NSString *expid = @"获取到的expid";
    NSString *studyTerminalCode = @"获取到的studyTerminalCode";
    NSDictionary *params = @{@"expid":expid,@"studyTerminalCode":studyTerminalCode};
    UIViewController *mcVC = [JSHMcService startWithParams:params h5Path:nil projectVersion:0];
    mcVC.modalPresentationStyle = UIModalPresentationFullScreen;
    [self.navigationController pushViewController:mcVC animated:YES];
}

