%global debug_package %{nil}

Name:     v4l2loopback
Version:  0.12.5
Release:  iriun.3%{?dist}
Summary:  Tools to create Video4Linux loopback recording devices
Group:    System Environment/Kernel
License:  GPLv2
URL:      https://github.com/umlaeute/v4l2loopback
Source0:  https://github.com/umlaeute/v4l2loopback/archive/v4l2loopback-%{version}.tar.gz

BuildArch: noarch

BuildRequires:  make
BuildRequires:  help2man

Requires:       bash
Requires:       v4l-utils
Requires:       gstreamer1
Requires:       which
Requires:       %{name}-kmod = %{version}

%description
This module and associated tools can create "virtual video devices" accessible
through the Video4Linux API.
Normal (v4l2) applications will read these devices as if they were ordinary
video devices, but the video will not be read from e.g. a capture card but
instead generated by another application.

%package dkms
Summary:  Kernel module to create Video4Linux loopback devices (DKMS)
Requires: dkms >= 2.2
Provides: %{name}-kmod = %{version}

%description dkms
This package contains the module source and DKMS configuration to build the
v4l2loopback kernel module.

%post dkms
mv %{_usrsrc}/%{name} %{_usrsrc}/%{name}-%{version}
%{_prefix}/lib/dkms/common.postinst %{name} %{version}

%preun dkms
if [ $1 -ne 1 ]; then
    dkms remove -m %{name} -v %{version} --all --rpm_safe_upgrade || :
fi

%prep
%setup -n v4l2loopback

%build
# v4l2loopback is a shell script

%install
%{__rm} -rf $RPM_BUILD_ROOT
mkdir -p "${RPM_BUILD_ROOT}%{_usrsrc}"
cp -r ../%{name} "${RPM_BUILD_ROOT}%{_usrsrc}/"

make install-utils install-man DESTDIR="$RPM_BUILD_ROOT" PREFIX=%{_prefix} BINDIR=%{_bindir} MANDIR=%{_mandir}

%files
%doc AUTHORS NEWS README.md
%{_bindir}/%{name}*
%{_mandir}/man1/*.1*

%files dkms
%{_usrsrc}/%{name}

%changelog
* Tue May 12 2020 Erwan Le Pennec <lepennec@gmail.com> - 0.12.5-1
- Update to 0.12.5

* Thu Jun 23 2016 Daniel Miranda <danielkza2@gmail.com> - 0.9.1-2
- Remove unneeded build dependencies 
- Fix DKMS trigger on package update

* Wed Jun 22 2016 Daniel Miranda <danielkza2@gmail.com> - 0.9.1-1
- Initial release 

