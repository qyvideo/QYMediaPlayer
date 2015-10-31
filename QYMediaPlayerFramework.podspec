Pod::Spec.new do |spec|
  spec.name         = 'QYMediaPlayerFramework'
  spec.version      = '8.3.1'
  spec.license      = {
:type => 'Proprietary',
:text => <<-LICENSE
      Copyright 2015 QYVideo Ltd. All rights reserved.
      LICENSE
  }
  spec.homepage     = 'http://www.qyvideo.net/'
  spec.authors      = { 'zengfanping' => 'zengfanping@qyvideo.cn' }
  spec.summary      = 'QYMediaPlayer is a player core same as MPMoviePlayerController.'
  spec.description  = <<-DESC
    QYMediaPlayer is a player core same as MPMoviePlayerController.
  DESC
  spec.platform     = :ios, '7.0'
  spec.requires_arc = true
  spec.ios.library = 'z', 'iconv', 'stdc++.6'
  spec.source = { :git => 'https://github.com/qyvideo/QYMediaPlayer.git', :tag => '8.3.1'}
  spec.preserve_paths      = 'QYMediaPlayer.framework'
  spec.public_header_files = 'QYMediaPlayer.framework/Headers'
  spec.vendored_frameworks = 'QYMediaPlayer.framework'
end
