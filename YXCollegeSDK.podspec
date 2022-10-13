
Pod::Spec.new do |spec|

spec.name         = "YXCollegeSDK"
spec.version      = "3.0.5"
spec.summary      = "YXCollegeSDK for IOS"
spec.description  = "YXCollegeSDK.framework是一款致力于服务用户培训学习的sdk"
spec.homepage     = "https://github.com/loneKiss/YXCollegeSDK"
spec.license      = { :type => "MIT", :file => "LICENSE" }
spec.author       = { "loneKiss" => "775865767@qq.com" }
spec.platform     = :ios, "9.0"
spec.source       = { :git => "https://github.com/loneKiss/YXCollegeSDK.git", :tag => spec.version }
spec.resources       = ['YXCollegeSdkReadme.md']

if ENV['USE_SOURCE']
    spec.vendored_frameworks = 'YXCollegeSDK/Frameworks/YXCollegeSDK.framework'
else
    spec.vendored_frameworks = 'YXCollegeSDK/Frameworks/*.framework'
end





spec.requires_arc    = true

spec.source_files = 'YXCollegeSDK/Headers/*.h'

# 图片，其他资源文件存放的路径，需要注意的是，xib，nib也属于资源文件
spec.resource_bundles = {
    'YXCollegeSDK' => ['YXCollegeSDK/Resources/*'],
  }
  
spec.pod_target_xcconfig = {
    'FRAMEWORK_SEARCH_PATHS' => '$(inherited) $(PODS_ROOT)/**',
    'HEADER_SEARCH_PATHS' => '$(inherited) $(PODS_ROOT)/**',
    'VALID_ARCHS' => 'armv7 arm64 x86_64',
    'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64'
  }

end
