--- lib/PkgConfig.pm.orig	2020-07-19 12:17:28 UTC
+++ lib/PkgConfig.pm
@@ -222,7 +222,7 @@ if($ENV{PKG_CONFIG_NO_OS_CUSTOMIZATION})
     }
 
 
-} elsif($^O eq 'freebsd') {
+} elsif($^O eq 'freebsd' or $^O eq 'dragonfly') {
 
     # TODO: FreeBSD 10-12's version of pkg-config does not
     # support PKG_CONFIG_DEBUG_SPEW so I can't verify
