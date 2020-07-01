--- src/translations.cpp.orig	2020-07-01 00:05:03 UTC
+++ src/translations.cpp
@@ -212,7 +212,8 @@ void set_language()
     auto env = getenv( "LANGUAGE" );
     locale_dir = std::string( PATH_INFO::base_path() + "lang/mo/" + ( env ? env : "none" ) +
                               "/LC_MESSAGES/cataclysm-dda.mo" );
-#elif (defined(__linux__) || defined(__FreeBSD__) || (defined(MACOSX) && !defined(TILES)))
+#elif (defined(__linux__) || defined(__FreeBSD__) || defined(__DragonFly__) \
+       || (defined(MACOSX) && !defined(TILES)))
     if( !PATH_INFO::base_path().empty() ) {
         locale_dir = PATH_INFO::base_path() + "share/locale";
     } else {
