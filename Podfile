source 'https://github.com/CocoaPods/Specs.git'
platform :ios, '8.0'
inhibit_all_warnings!

xcodeproj 'Wirpl'

pod 'JSQMessagesViewController'

target :WirplTests do
  pod 'OCMock', '~> 2.0.1'
end

post_install do |installer|
  installer.project.targets.each do |target|
    puts "#{target.name}"
  end
end
