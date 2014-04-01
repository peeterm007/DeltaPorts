$FreeBSD: head/java/openjdk7/files/patch-src-solaris-classes-sun-net-PortConfig.java 344496 2014-02-15 23:31:42Z glewis $

--- jdk/src/solaris/classes/sun/net/PortConfig.java	Sat Jan 18 12:20:24 2014 -0800
+++ jdk/src/solaris/classes/sun/net/PortConfig.java	Sat Feb 15 14:31:26 2014 -0800
@@ -52,7 +52,7 @@
                     } else if (os.startsWith("SunOS")) {
                         defaultLower = 32768;
                         defaultUpper = 65535;
-                    } else if (os.contains("OS X")) {
+                    } else if (os.contains("OS X") || os.startswith("DragonFly") || os.endsWith("BSD")) {
                         defaultLower = 49152;
                         defaultUpper = 65535;
                     } else {
