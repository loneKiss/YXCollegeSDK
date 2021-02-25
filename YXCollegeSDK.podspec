
Pod::Spec.new do |spec|

spec.name         = "YXCollegeSDK"
spec.version      = "1.0.5"
spec.summary      = "YXCollegeSDK for IOS"
spec.description  = "YXCollegeSDK.framework是一款致力于服务用户培训学习的sdk"
spec.homepage     = "https://github.com/loneKiss/YXCollegeSDK"
spec.license      = { :type => "MIT", :file => "LICENSE" }
spec.author       = { "loneKiss" => "775865767@qq.com" }
spec.platform     = :ios, "9.0"
spec.source       = { :git => "https://github.com/loneKiss/YXCollegeSDK.git", :tag => spec.version }
spec.resources       = ['YXCollegeSdkReadme.md']
spec.vendored_frameworks = "YXCollegeSDK/framework/YXCollegeSDK.framework"
spec.dependency "VHClassSDK"   #所依赖的第三方库，没有就不用写
spec.requires_arc    = true
spec.resource_bundles = {
    'YXCollegeSDK' => ['YXCollegeSDK/Assets/*.png'],
  }
spec.pod_target_xcconfig = {
    'FRAMEWORK_SEARCH_PATHS' => '$(inherited) $(PODS_ROOT)/**',
    'HEADER_SEARCH_PATHS' => '$(inherited) $(PODS_ROOT)/**',
    'VALID_ARCHS' => 'armv7 arm64 x86_64',
    'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64'
  }

end
