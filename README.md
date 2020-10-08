<img src="https://lh3.googleusercontent.com/W8IRyfkwEqHpcTy2N-f2nBRDHCXETcBxT9I-Gw1GAqhrfyB7tYj9F98X82e3Dfywcg=s180-rw" width="150" title="WSL Avatar" align="right" /><h1><a href="https://iriun.gitlab.io">Iriun Webcam for Linux</a></h1>
<br>
<br>
<br>

**This is an unofficial port repository of Iriun Webcam for Linux. Packages provided here is targeted for use on Enterprise Linux distros (RHEL, CentOS, Oracle Linux). They are never guaranteed to be fully working**

### [Fedora Copr page](https://copr.fedorainfracloud.org/coprs/rmnscnce/iriun-webcam_el/)

---

##### Status for `iriunwebcam`:
<a href="https://copr.fedorainfracloud.org/coprs/rmnscnce/iriun-webcam_el/package/iriunwebcam/"><img src="https://copr.fedorainfracloud.org/coprs/rmnscnce/iriun-webcam_el/package/v4l2loopback/status_image/last_build.png"></a>
##### Status for `v4l-utils`:
<a href="https://copr.fedorainfracloud.org/coprs/rmnscnce/iriun-webcam_el/package/v4l-utils/"><img src="https://copr.fedorainfracloud.org/coprs/rmnscnce/iriun-webcam_el/package/v4l-utils/status_image/last_build.png"></a>
##### Status for `v4l2loopback`:
<a href="https://copr.fedorainfracloud.org/coprs/rmnscnce/iriun-webcam_el/package/v4l2loopback/"><img src="https://copr.fedorainfracloud.org/coprs/rmnscnce/iriun-webcam_el/package/v4l2loopback/status_image/last_build.png"></a>

## Description
Use your phone's camera as a wireless webcam in your PC Install Webcam for Linux, download Iriun Webcam app to your mobile phone and start using the phone with your favourite video applications.

## Installation instructions
~~~
dnf copr enable rmnscnce/iriun-webcam_el
sudo dnf install iriunwebcam
~~~

## Copr repo package availability
Package | CentOS Stream | EPEL 6 | EPEL 7 | EPEL 8
--------|---------------|--------|--------|--------
`iriunwebcam` | aarch64, x86\_64 | i386, x86\_64 | aarch64, x86\_64 | aarch64, x86\_64
`v4l-utils` | aarch64, x86\_64 | N/A | N/A | aarch64, x86\_64
`v4l2loopback` | aarch64, x86\_64 | i386, x86\_64 | aarch64, x86\_64 | aarch64, x86\_64
##### ※ Package `v4l-utils` is officially available on the CentOS 7 and EPEL 6 repo
