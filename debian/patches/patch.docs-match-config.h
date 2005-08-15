--- a/init.h
+++ b/init.h
@@ -80,9 +80,9 @@
 #define ISPELL "ispell"
 #endif
 
-/* build complete documentation */
+/* Disable "build complete documentation" for Debian */
 
-#ifdef _MAKEDOC
+#if 0
 # ifndef USE_IMAP
 #  define USE_IMAP
 # endif
@@ -1970,7 +1970,7 @@
   ** .pp
   ** Example: set certificate_file=~/.mutt/certificates
   */
-# if defined _MAKEDOC || !defined(USE_GNUTLS)
+# ifndef USE_GNUTLS
   { "ssl_usesystemcerts", DT_BOOL, R_NONE, OPTSSLSYSTEMCERTS, 1 },
   /*
   ** .pp
