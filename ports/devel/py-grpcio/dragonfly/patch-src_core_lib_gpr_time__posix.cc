--- src/core/lib/gpr/time_posix.cc.orig	2019-04-25 20:54:03 UTC
+++ src/core/lib/gpr/time_posix.cc
@@ -43,7 +43,7 @@ static struct timespec timespec_from_gpr
   return rv;
 }
 
-#if _POSIX_TIMERS > 0 || defined(__OpenBSD__)
+#if _POSIX_TIMERS > 0 || defined(__OpenBSD__) || defined(__DragonFly__)
 static gpr_timespec gpr_from_timespec(struct timespec ts,
                                       gpr_clock_type clock_type) {
   /*
