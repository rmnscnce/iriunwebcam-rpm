# Iriun Webcam for Enterprise Linux

<a href="https://copr.fedorainfracloud.org/coprs/rmnscnce/iriun-webcam_el/package/iriunwebcam/"><img src="https://copr.fedorainfracloud.org/coprs/rmnscnce/iriun-webcam_el/package/iriunwebcam/status_image/last_build.png" /></a>

Use your phone's camera as a wireless webcam in your PC Install Webcam for Linux, download Iriun Webcam app to your mobile phone and start using the phone with your favourite video applications.

Program depends on:
~~~
libQt5Core.so.5()(64bit)
libQt5Core.so.5(Qt_5)(64bit)
libQt5Core.so.5(Qt_5.9)(64bit)
libQt5Gui.so.5()(64bit)
libQt5Gui.so.5(Qt_5)(64bit)
libQt5Network.so.5()(64bit)
libQt5Network.so.5(Qt_5)(64bit)
libQt5Widgets.so.5()(64bit)
libQt5Widgets.so.5(Qt_5)(64bit)
libasound.so.2()(64bit)
libasound.so.2(ALSA_0.9)(64bit)
libasound.so.2(ALSA_0.9.0rc4)(64bit)
libc.so.6()(64bit)
libc.so.6(GLIBC_2.14)(64bit)
libc.so.6(GLIBC_2.15)(64bit)
libc.so.6(GLIBC_2.17)(64bit)
libc.so.6(GLIBC_2.2.5)(64bit)
libc.so.6(GLIBC_2.3)(64bit)
libc.so.6(GLIBC_2.3.4)(64bit)
libc.so.6(GLIBC_2.4)(64bit)
libc.so.6(GLIBC_2.7)(64bit)
libgcc_s.so.1()(64bit)
libgcc_s.so.1(GCC_3.0)(64bit)
libjack.so.0()(64bit)
libm.so.6()(64bit)
libm.so.6(GLIBC_2.2.5)(64bit)
libpthread.so.0()(64bit)
libpthread.so.0(GLIBC_2.2.5)(64bit)
libpthread.so.0(GLIBC_2.3.2)(64bit)
libstdc++.so.6()(64bit)
libstdc++.so.6(CXXABI_1.3)(64bit)
libstdc++.so.6(CXXABI_1.3.9)(64bit)
libstdc++.so.6(GLIBCXX_3.4)(64bit)
libstdc++.so.6(GLIBCXX_3.4.11)(64bit)
libstdc++.so.6(GLIBCXX_3.4.15)(64bit)
libstdc++.so.6(GLIBCXX_3.4.20)(64bit)
libstdc++.so.6(GLIBCXX_3.4.21)(64bit)
libstdc++.so.6(GLIBCXX_3.4.22)(64bit)
rpmlib(CompressedFileNames) <= 3.0.4-1
rpmlib(FileDigests) <= 4.6.0-1
rpmlib(PayloadFilesHavePrefix) <= 4.0-1
rpmlib(PayloadIsXz) <= 5.2-1
rtld(GNU_HASH)
v4l2loopback
~~~

## Installation instructions

For EPEL 7:
~
# dnf config-manager --add-repo https://copr.fedorainfracloud.org/coprs/rmnscnce/iriun-webcam_el/repo/epel-7/rmnscnce-iriun-webcam_el-epel-7.repo
# dnf install iriunwebcam
~

For EPEL 8:
~
# dnf config-manager --add-repo https://copr.fedorainfracloud.org/coprs/rmnscnce/iriun-webcam_el/repo/epel-8/rmnscnce-iriun-webcam_el-epel-8.repo
# dnf install iriunwebcam
~
