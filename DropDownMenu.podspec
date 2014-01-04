Pod::Spec.new do |s|
  s.name         = "DropDownMenu"
  s.version      = "0.0.1"
  s.summary      = "DropDownMenu is a block based UIButton subclass that uses UIActionSheet to present a drop down menu. "

  s.homepage     = "https://github.com/kevinrandrup/DropDownMenu"
  s.license      = { :type => "MIT", :file => 'LICENSE' }
  s.author       = { "Kevin Randrup" => "kevinrandrup@gmail.com" }
  s.social_media_url = "https://twitter.com/kevinrandrup"
  s.platform     = :ios, '5.0'
  s.source       = { :git => "https://github.com/kevinrandrup/DropDownMenu.git", :commit => "b13e266289a2ebffdc74b70254b56839bfb62a47" }

  s.source_files  = 'Classes/DropDownMenu.{h,m}'
  s.frameworks   = "UIKit"
  s.requires_arc = true


end