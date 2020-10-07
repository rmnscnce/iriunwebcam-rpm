%define debug_package %{nil}
Name: iriunwebcam
Summary: Use your phone as a webcam for your computer
Version: 2.2
Group: Applications
License: Restricted
Release: 1%{dist}
Source0: iriunwebcam-%{version}.tar.gz
Requires: v4l2loopback, qt5-qtbase, jack-audio-connection-kit

%description
iriunwebcam

%prep
%setup -n iriunwebcam

%build

%install
mkdir -p $RPM_BUILD_ROOT/
cp -r . $RPM_BUILD_ROOT/

%clean
rm -fr $RPM_BUILD_ROOT

%files
%attr(-, root, root) "/etc/modprobe.d/iriunwebcam-options.conf"
%attr(-, root, root) "/etc/modules-load.d/iriunwebcam.conf"
%attr(-, root, root) "/usr/local/bin/iriunwebcam"
%attr(-, root, root) "/usr/share/applications/iriunwebcam.desktop"
%attr(-, root, root) "/usr/share/pixmaps/iriunwebcam.png"
