Pod::Spec.new do |s|
  s.name         = “CWDropDownMenu"
  s.version      = "0.0.1"
  s.summary      = “CWDropDownMenu is a block based UIButton subclass that uses UIActionSheet to present a drop down menu. "

  s.homepage     = "https://github.com/kevinrandrup/CWDropDownMenu"
  s.license      = { :type => "MIT", :file => 'LICENSE' }
  s.author       = { "Kevin Randrup" => "kevinrandrup@gmail.com" }
  s.social_media_url = "https://twitter.com/kevinrandrup"
  s.platform     = :ios, '5.0'
  s.source       = { :git => "https://github.com/kevinrandrup/CWDropDownMenu.git", :commit => "3713ae85ac0aab545d5d96729a8b37bb792890d4" }

  s.source_files  = 'Classes/CWDropDownMenu.{h,m}'
  s.frameworks   = "UIKit"
  s.requires_arc = true


end