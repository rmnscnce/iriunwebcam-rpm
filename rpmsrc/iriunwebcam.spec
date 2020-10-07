%define debug_package %{nil}
Name: iriunwebcam
Summary: Use your phone as a webcam for your computer
Version: 2.2
Group: Applications
License: Restricted
Release: 2%{?dist}
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

%post
if [ -x "$(command -v firewall-cmd)" ] ; then
	echo -e "firewalld detected. Modifying firewall rules..."
	echo -e "Opening access for port 4698(UDP) for use by Iriun Webcam..."
	firewall-cmd --permanent --add-port=4698/udp
else
	echo -e "Opening access for port 4698(UDP) for use by Iriun Webcam..."
	iptables -A INPUT -p udp --dport 4698 -m conntrack --ctstate NEW,ESTABLISHED -j ACCEPT
fi

%postun
if [ -x "$(command -v firewall-cmd)" ] ; then
	echo -e "Removing firewalld rule..."
	firewall-cmd --permanent --remove-port=4698/udp
else
	echo -e "Removing iptables rule..."
	iptables -D INPUT -p udp --dport 4698 -m conntrack --ctstate NEW,ESTABLISHED -j ACCEPT
fi
	
%files
%attr(-, root, root) "/etc/modprobe.d/iriunwebcam-options.conf"
%attr(-, root, root) "/etc/modules-load.d/iriunwebcam.conf"
%attr(-, root, root) "/usr/local/bin/iriunwebcam"
%attr(-, root, root) "/usr/share/applications/iriunwebcam.desktop"
%attr(-, root, root) "/usr/share/pixmaps/iriunwebcam.png"
