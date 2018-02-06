
Pod::Spec.new do |s|

  s.name         = "LYSafetyObject"
  s.version      = "1.0.0"
  s.summary      = "safety objects for foundation objects"

  s.description  = "An variable array、 dictionary and set Objects which can running safety at multi threads."

  s.homepage     = "https://github.com/install-b/LYSafetyObject"

  s.license      = "MIT"


  s.author       = { "ShangenZhang" => "645256685@qq.com" }


  s.platform     = :os
  s.platform     = :ios

  s.source       = { :git => "https://github.com/install-b/LYSafetyObject.git", :tag => s.version }


  s.source_files  = "Classes/**/*.{h,m}"
  #s.exclude_files = "Classes/Exclude"

  s.public_header_files = "Classes/**/*.h"


  s.framework  = "Foundation"

  s.requires_arc = true

end
