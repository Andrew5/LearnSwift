#
# Be sure to run `pod lib lint LearnSwiftRAC.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'LearnSwiftRAC'
  s.version          = '0.1.0'
  s.summary          = 'A short description of LearnSwiftRAC.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: Add long description of the pod here.
                       DESC

  s.homepage         = 'https://github.com/jabraknight/LearnSwiftRAC'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'jabraknight' => 'localhost3585@gmail.com' }
  s.source           = { :git => 'https://github.com/jabraknight/LearnSwiftRAC.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '10.0'

  s.source_files = 'LearnSwiftRAC/Classes/**/*'
  
  # s.resource_bundles = {
  #   'LearnSwiftRAC' => ['LearnSwiftRAC/Assets/*.png']
  # }

#   s.public_header_files = 'Pod/Classes/**/*.h'
#  s.ios.vendored_frameworks = 'HWMMREngine'
#  s.vendored_frameworks = 'HWMMREngine.framework', 'HWMUISDK.framework'
#  s.libraries = 'iconv.2', 'c++.1', 'resolv.9','z.1','z','sqlite3.0','c++'
#  s.vendored_libraries = 'iconv.2', 'c++.1', 'resolv.9','z.1','z','sqlite3.0'
#  s.library = 'c++'
#  s.xcconfig = {
#      'CLANG_CXX_LANGUAGE_STANDARD' => 'c++11',
#      'CLANG_CXX_LIBRARY' => 'libc++',
#      'OTHER_LDFLAGS'=>'-ObjC'
#  }

  s.vendored_framework = '*.framework'
  s.dependency 'RxSwift','~> 6.5.0'
  s.dependency 'RxCocoa','~> 6.5.0'
  s.dependency 'SnapKit','~> 5.0.1'
end
