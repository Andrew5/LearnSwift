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

  s.homepage         = 'https://github.com/Andrew5/LearnSwiftRAC'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'Andrew5' => 'localhost3585@gmail.com' }
  s.source           = { :git => 'https://github.com/Andrew5/LearnSwiftRAC.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '10.0'

  s.source_files = 'LearnSwiftRAC/Classes/**/*'
  
  # s.resource_bundles = {
  #   'LearnSwiftRAC' => ['LearnSwiftRAC/Assets/*.png']
  # }

  # s.public_header_files = 'Pod/Classes/**/*.h'
  # s.frameworks = 'UIKit', 'MapKit'
  # s.dependency 'AFNetworking', '~> 2.3'
  s.xcconfig = {
#      'CLANG_CXX_LANGUAGE_STANDARD' => 'c++11',
#      'CLANG_CXX_LIBRARY' => 'libc++',
      'OTHER_LDFLAGS'=>'-ObjC',
#      'ENABLE_BITCODE' => 'NO'
  }

  s.vendored_framework = '*.framework'
  s.dependency 'RxSwift','~> 6.5.0'
  s.dependency 'RxCocoa','~> 6.5.0'
  s.dependency 'SnapKit','~> 5.0.1'
end
