Pod::Spec.new do |s|
  s.name = 'VendorsSet'
  s.version          = '1.0.0'
  s.summary          = 'A short description of VendorsSet.'
  s.description = <<~DESC
    第三方库集合
  DESC

  s.homepage         = 'http://aaa.com/ios_vendor/VendorsSet'
  s.license          = { type: 'MIT', file: 'LICENSE' }
  s.author           = { 'body' => 'ab@c.com' }
  s.source           = { git: 'http://github.com/ios_vendor/VendorsSet.git', tag: s.version.to_s }
  s.ios.deployment_target = '9.0'

  # 变成子模块了不能用了
  # s.module_map = 'LVPods/SDWebImageWebPCoder/SDWebImageWebPCoder/Module/SDWebImageWebPCoder.modulemap'

  s.subspec 'SDWebImage' do |sdsub|
    sdsub.pod_target_xcconfig = {
      'SUPPORTS_MACCATALYST' => 'YES',
      'DERIVE_MACCATALYST_PRODUCT_BUNDLE_IDENTIFIER' => 'NO'
    }

    sdsub.source_files = 'LVPods/SDWebImage/SDWebImage/Core/*.{h,m}', 'LVPods/SDWebImage/WebImage/SDWebImage.h', 'LVPods/SDWebImage/SDWebImage/Private/*.{h,m}'
    sdsub.private_header_files = 'LVPods/SDWebImage/SDWebImage/Private/*.h'
  end

  s.subspec 'SDWebImageWebPCoder' do |sdsub|
    sdsub.ios.deployment_target = '9.0'
    sdsub.osx.deployment_target = '10.11'
    sdsub.tvos.deployment_target = '9.0'
    sdsub.watchos.deployment_target = '2.0'
    sdsub.source_files = 'LVPods/SDWebImageWebPCoder/SDWebImageWebPCoder/Classes/**/*', 'LVPods/SDWebImageWebPCoder/SDWebImageWebPCoder/Module/SDWebImageWebPCoder.h'
    sdsub.xcconfig = {
      'GCC_PREPROCESSOR_DEFINITIONS' => '$(inherited) SD_WEBP=1',
      'USER_HEADER_SEARCH_PATHS' => '$(inherited) $(SRCROOT)/libwebp/src'
    }
    sdsub.watchos.xcconfig = {
      'GCC_PREPROCESSOR_DEFINITIONS' => '$(inherited) SD_WEBP=1 WEBP_USE_INTRINSICS=1',
      'USER_HEADER_SEARCH_PATHS' => '$(inherited) $(SRCROOT)/libwebp/src'
    }
    sdsub.dependency 'VendorsSet/SDWebImage'
    sdsub.dependency 'libwebp', '~> 1.0'
  end
end
