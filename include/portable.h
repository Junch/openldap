/* include/portable.hin.  Generated from configure.in by autoheader.  */


/* begin of portable.h.pre */
/* This work is part of OpenLDAP Software <http://www.openldap.org/>.
 *
 * Copyright 1998-2012 The OpenLDAP Foundation
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted only as authorized by the OpenLDAP
 * Public License.
 *
 * A copy of this license is available in the file LICENSE in the
 * top-level directory of the distribution or, alternatively, at
 * <http://www.OpenLDAP.org/license.html>.
 */

#ifndef _LDAP_PORTABLE_H
#define _LDAP_PORTABLE_H

/* define this if needed to get reentrant functions */
#ifndef REENTRANT
/* #undef REENTRANT */
#endif
#ifndef _REENTRANT
/* #undef _REENTRANT */
#endif

/* define this if needed to get threadsafe functions */
#ifndef THREADSAFE
/* #undef THREADSAFE */
#endif
#ifndef _THREADSAFE
/* #undef _THREADSAFE */
#endif
#ifndef THREAD_SAFE
/* #undef THREAD_SAFE */
#endif
#ifndef _THREAD_SAFE
/* #undef _THREAD_SAFE */
#endif

#ifndef _SGI_MP_SOURCE
/* #undef _SGI_MP_SOURCE */
#endif

/* end of portable.h.pre */


/* define to use both <string.h> and <strings.h> */
/* #undef BOTH_STRINGS_H */

/* define if cross compiling */
/* #undef CROSS_COMPILING */

/* set to the number of arguments ctime_r() expects */
/* #undef CTIME_R_NARGS */

/* define if toupper() requires islower() */
#define C_UPPER_LOWER 1

/* define if sys_errlist is not declared in stdio.h or errno.h */
/* #undef DECL_SYS_ERRLIST */

/* define to enable rewriting in back-ldap and back-meta */
/* #undef ENABLE_REWRITE */

/* define to enable slapi library */
/* #undef ENABLE_SLAPI */

/* defined to be the EXE extension */
#define EXEEXT ".exe"

/* set to the number of arguments gethostbyaddr_r() expects */
/* #undef GETHOSTBYADDR_R_NARGS */

/* set to the number of arguments gethostbyname_r() expects */
/* #undef GETHOSTBYNAME_R_NARGS */

/* Define to 1 if `TIOCGWINSZ' requires <sys/ioctl.h>. */
/* #undef GWINSZ_IN_SYS_IOCTL */

/* define if you have AIX security lib */
/* #undef HAVE_AIX_SECURITY */

/* Define to 1 if you have the <arpa/inet.h> header file. */
/* #undef HAVE_ARPA_INET_H */

/* Define to 1 if you have the <arpa/nameser.h> header file. */
/* #undef HAVE_ARPA_NAMESER_H */

/* Define to 1 if you have the <assert.h> header file. */
#define HAVE_ASSERT_H 1

/* Define to 1 if you have the `bcopy' function. */
/* #undef HAVE_BCOPY */

/* define this if Berkeley DB is available */
#define HAVE_BERKELEY_DB 1

/* define if Berkeley DB has DB_THREAD support */
/* #undef HAVE_BERKELEY_DB_THREAD */

/* Define to 1 if you have the <bits/types.h> header file. */
/* #undef HAVE_BITS_TYPES_H */

/* Define to 1 if you have the `chroot' function. */
/* #undef HAVE_CHROOT */

/* Define to 1 if you have the `closesocket' function. */
#define HAVE_CLOSESOCKET 1

/* Define to 1 if you have the <conio.h> header file. */
#define HAVE_CONIO_H 1

/* define if crypt(3) is available */
/* #undef HAVE_CRYPT */

/* Define to 1 if you have the <crypt.h> header file. */
/* #undef HAVE_CRYPT_H */

/* Define to 1 if you have the <cthreads.h> header file. */
/* #undef HAVE_CTHREADS_H */

/* Define to 1 if you have the `ctime_r' function. */
/* #undef HAVE_CTIME_R */

/* define if you have Cyrus SASL */
#define HAVE_CYRUS_SASL 1

/* Define to 1 if you have the <db.h> header file. */
#define HAVE_DB_H 1

/* define if your system supports /dev/poll */
/* #undef HAVE_DEVPOLL */

/* Define to 1 if you have the <direct.h> header file. */
#define HAVE_DIRECT_H 1

/* Define to 1 if you have the <dirent.h> header file, and it defines `DIR'.
   */
/* #undef HAVE_DIRENT_H */

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you don't have `vprintf' but do have `_doprnt.' */
/* #undef HAVE_DOPRNT */

/* define if system uses EBCDIC instead of ASCII */
/* #undef HAVE_EBCDIC */

/* Define to 1 if you have the `endgrent' function. */
/* #undef HAVE_ENDGRENT */

/* Define to 1 if you have the `endpwent' function. */
/* #undef HAVE_ENDPWENT */

/* define if your system supports epoll */
/* #undef HAVE_EPOLL */

/* Define to 1 if you have the <errno.h> header file. */
#define HAVE_ERRNO_H 1

/* Define to 1 if you have the `fcntl' function. */
/* #undef HAVE_FCNTL */

/* Define to 1 if you have the <fcntl.h> header file. */
#define HAVE_FCNTL_H 1

/* define if you actually have FreeBSD fetch(3) */
/* #undef HAVE_FETCH */

/* Define to 1 if you have the <filio.h> header file. */
/* #undef HAVE_FILIO_H */

/* Define to 1 if you have the `flock' function. */
/* #undef HAVE_FLOCK */

/* Define to 1 if you have the `fstat' function. */
/* #undef HAVE_FSTAT */

/* Define to 1 if you have the `gai_strerror' function. */
#define HAVE_GAI_STRERROR 1

/* Define to 1 if you have the `getaddrinfo' function. */
#define HAVE_GETADDRINFO 1

/* Define to 1 if you have the `getdtablesize' function. */
/* #undef HAVE_GETDTABLESIZE */

/* Define to 1 if you have the `geteuid' function. */
/* #undef HAVE_GETEUID */

/* Define to 1 if you have the `getgrgid' function. */
/* #undef HAVE_GETGRGID */

/* Define to 1 if you have the `gethostbyaddr_r' function. */
/* #undef HAVE_GETHOSTBYADDR_R */

/* Define to 1 if you have the `gethostbyname_r' function. */
/* #undef HAVE_GETHOSTBYNAME_R */

/* Define to 1 if you have the `gethostname' function. */
#define HAVE_GETHOSTNAME 1

/* Define to 1 if you have the `getnameinfo' function. */
#define HAVE_GETNAMEINFO 1

/* Define to 1 if you have the `getopt' function. */
/* #undef HAVE_GETOPT */

/* Define to 1 if you have the <getopt.h> header file. */
/* #undef HAVE_GETOPT_H */

/* Define to 1 if you have the `getpassphrase' function. */
/* #undef HAVE_GETPASSPHRASE */

/* Define to 1 if you have the `getpeereid' function. */
/* #undef HAVE_GETPEEREID */

/* Define to 1 if you have the `getpeerucred' function. */
/* #undef HAVE_GETPEERUCRED */

/* Define to 1 if you have the `getpwnam' function. */
/* #undef HAVE_GETPWNAM */

/* Define to 1 if you have the `getpwuid' function. */
/* #undef HAVE_GETPWUID */

/* Define to 1 if you have the `getspnam' function. */
/* #undef HAVE_GETSPNAM */

/* Define to 1 if you have the `gettimeofday' function. */
/* #undef HAVE_GETTIMEOFDAY */

/* Define to 1 if you have the <gmp.h> header file. */
/* #undef HAVE_GMP_H */

/* Define to 1 if you have the `gmtime_r' function. */
/* #undef HAVE_GMTIME_R */

/* define if you have GNUtls */
/* #undef HAVE_GNUTLS */

/* Define to 1 if you have the <gnutls/gnutls.h> header file. */
/* #undef HAVE_GNUTLS_GNUTLS_H */

/* if you have GNU Pth */
/* #undef HAVE_GNU_PTH */

/* Define to 1 if you have the <grp.h> header file. */
/* #undef HAVE_GRP_H */

/* Define to 1 if you have the `hstrerror' function. */
/* #undef HAVE_HSTRERROR */

/* define if you actually have ICU */
/* #undef HAVE_ICU */

/* define to you inet_aton(3) is available */
/* #undef HAVE_INET_ATON */

/* Define to 1 if you have the `inet_ntoa_b' function. */
/* #undef HAVE_INET_NTOA_B */

/* Define to 1 if you have the `inet_ntop' function. */
/* #undef HAVE_INET_NTOP */

/* Define to 1 if you have the `initgroups' function. */
/* #undef HAVE_INITGROUPS */

/* Define to 1 if you have the <inttypes.h> header file. */
/* #undef HAVE_INTTYPES_H */

/* Define to 1 if you have the `ioctl' function. */
/* #undef HAVE_IOCTL */

/* Define to 1 if you have the <io.h> header file. */
#define HAVE_IO_H 1

/* Define to 1 if you have the `gen' library (-lgen). */
/* #undef HAVE_LIBGEN */

/* Define to 1 if you have the `gmp' library (-lgmp). */
/* #undef HAVE_LIBGMP */

/* Define to 1 if you have the `inet' library (-linet). */
/* #undef HAVE_LIBINET */

/* define if you have libtool -ltdl */
/* #undef HAVE_LIBLTDL */

/* Define to 1 if you have the `net' library (-lnet). */
/* #undef HAVE_LIBNET */

/* Define to 1 if you have the `nsl' library (-lnsl). */
/* #undef HAVE_LIBNSL */

/* Define to 1 if you have the `nsl_s' library (-lnsl_s). */
/* #undef HAVE_LIBNSL_S */

/* Define to 1 if you have the `socket' library (-lsocket). */
/* #undef HAVE_LIBSOCKET */

/* Define to 1 if you have the <libutil.h> header file. */
/* #undef HAVE_LIBUTIL_H */

/* Define to 1 if you have the `V3' library (-lV3). */
/* #undef HAVE_LIBV3 */

/* Define to 1 if you have the <limits.h> header file. */
#define HAVE_LIMITS_H 1

/* if you have LinuxThreads */
/* #undef HAVE_LINUX_THREADS */

/* Define to 1 if you have the <locale.h> header file. */
#define HAVE_LOCALE_H 1

/* Define to 1 if you have the `localtime_r' function. */
/* #undef HAVE_LOCALTIME_R */

/* Define to 1 if you have the `lockf' function. */
/* #undef HAVE_LOCKF */

/* Define to 1 if the system has the type `long long'. */
#define HAVE_LONG_LONG 1

/* Define to 1 if you have the <ltdl.h> header file. */
/* #undef HAVE_LTDL_H */

/* define if you have Mach Cthreads */
/* #undef HAVE_MACH_CTHREADS */

/* Define to 1 if you have the <mach/cthreads.h> header file. */
/* #undef HAVE_MACH_CTHREADS_H */

/* Define to 1 if you have the <malloc.h> header file. */
#define HAVE_MALLOC_H 1

/* Define to 1 if you have the `memcpy' function. */
#define HAVE_MEMCPY 1

/* Define to 1 if you have the `memmove' function. */
#define HAVE_MEMMOVE 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the `memrchr' function. */
/* #undef HAVE_MEMRCHR */

/* Define to 1 if you have the `mkstemp' function. */
/* #undef HAVE_MKSTEMP */

/* Define to 1 if you have the `mktemp' function. */
#define HAVE_MKTEMP 1

/* define this if you have mkversion */
/* #undef HAVE_MKVERSION */

/* define if you have MozNSS */
/* #undef HAVE_MOZNSS */

/* Define to 1 if you have the <ndir.h> header file, and it defines `DIR'. */
/* #undef HAVE_NDIR_H */

/* Define to 1 if you have the <netinet/tcp.h> header file. */
/* #undef HAVE_NETINET_TCP_H */

/* define if strerror_r returns char* instead of int */
/* #undef HAVE_NONPOSIX_STRERROR_R */

/* Define to 1 if you have the <nssutil.h> header file. */
/* #undef HAVE_NSSUTIL_H */

/* if you have NT Event Log */
#define HAVE_NT_EVENT_LOG 1

/* if you have NT Service Manager */
#define HAVE_NT_SERVICE_MANAGER 1

/* if you have NT Threads */
#define HAVE_NT_THREADS 1

/* define if you have OpenSSL */
#define HAVE_OPENSSL 1

/* Define to 1 if you have the <openssl/bn.h> header file. */
#define HAVE_OPENSSL_BN_H 1

/* define if you have OpenSSL with CRL checking capability */
#define HAVE_OPENSSL_CRL 1

/* Define to 1 if you have the <openssl/crypto.h> header file. */
#define HAVE_OPENSSL_CRYPTO_H 1

/* Define to 1 if you have the <openssl/ssl.h> header file. */
#define HAVE_OPENSSL_SSL_H 1

/* Define to 1 if you have the `pipe' function. */
/* #undef HAVE_PIPE */

/* Define to 1 if you have the `poll' function. */
/* #undef HAVE_POLL */

/* Define to 1 if you have the <poll.h> header file. */
/* #undef HAVE_POLL_H */

/* Define to 1 if you have the <process.h> header file. */
#define HAVE_PROCESS_H 1

/* Define to 1 if you have the <psap.h> header file. */
/* #undef HAVE_PSAP_H */

/* define to pthreads API spec revision */
/* #undef HAVE_PTHREADS */

/* define if you have pthread_detach function */
/* #undef HAVE_PTHREAD_DETACH */

/* Define to 1 if you have the `pthread_getconcurrency' function. */
/* #undef HAVE_PTHREAD_GETCONCURRENCY */

/* Define to 1 if you have the <pthread.h> header file. */
/* #undef HAVE_PTHREAD_H */

/* Define to 1 if you have the `pthread_kill' function. */
/* #undef HAVE_PTHREAD_KILL */

/* Define to 1 if you have the `pthread_kill_other_threads_np' function. */
/* #undef HAVE_PTHREAD_KILL_OTHER_THREADS_NP */

/* define if you have pthread_rwlock_destroy function */
/* #undef HAVE_PTHREAD_RWLOCK_DESTROY */

/* Define to 1 if you have the `pthread_setconcurrency' function. */
/* #undef HAVE_PTHREAD_SETCONCURRENCY */

/* Define to 1 if you have the `pthread_yield' function. */
/* #undef HAVE_PTHREAD_YIELD */

/* Define to 1 if you have the <pth.h> header file. */
/* #undef HAVE_PTH_H */

/* Define to 1 if the system has the type `ptrdiff_t'. */
#define HAVE_PTRDIFF_T 1

/* Define to 1 if you have the <pwd.h> header file. */
/* #undef HAVE_PWD_H */

/* Define to 1 if you have the `read' function. */
#define HAVE_READ 1

/* Define to 1 if you have the `recv' function. */
#define HAVE_RECV 1

/* Define to 1 if you have the `recvfrom' function. */
#define HAVE_RECVFROM 1

/* Define to 1 if you have the <regex.h> header file. */
#define HAVE_REGEX_H 1

/* Define to 1 if you have the <resolv.h> header file. */
/* #undef HAVE_RESOLV_H */

/* define if you have res_query() */
/* #undef HAVE_RES_QUERY */

/* define if OpenSSL needs RSAref */
/* #undef HAVE_RSAREF */

/* Define to 1 if you have the <sasl.h> header file. */
/* #undef HAVE_SASL_H */

/* Define to 1 if you have the <sasl/sasl.h> header file. */
#define HAVE_SASL_SASL_H 1

/* define if your SASL library has sasl_version() */
#define HAVE_SASL_VERSION 1

/* Define to 1 if you have the <sched.h> header file. */
/* #undef HAVE_SCHED_H */

/* Define to 1 if you have the `sched_yield' function. */
/* #undef HAVE_SCHED_YIELD */

/* Define to 1 if you have the `send' function. */
/* #undef HAVE_SEND */

/* Define to 1 if you have the `sendmsg' function. */
/* undef HAVE_SENDMSG */

/* Define to 1 if you have the `sendto' function. */
/* #undef HAVE_SENDTO */

/* Define to 1 if you have the `setegid' function. */
/* #undef HAVE_SETEGID */

/* Define to 1 if you have the `seteuid' function. */
/* #undef HAVE_SETEUID */

/* Define to 1 if you have the `setgid' function. */
/* #undef HAVE_SETGID */

/* define if setproctitle(3) is available */
/* #undef HAVE_SETPROCTITLE */

/* Define to 1 if you have the `setpwfile' function. */
/* #undef HAVE_SETPWFILE */

/* Define to 1 if you have the `setsid' function. */
/* #undef HAVE_SETSID */

/* Define to 1 if you have the `setuid' function. */
/* #undef HAVE_SETUID */

/* Define to 1 if you have the <sgtty.h> header file. */
/* #undef HAVE_SGTTY_H */

/* Define to 1 if you have the <shadow.h> header file. */
/* #undef HAVE_SHADOW_H */

/* Define to 1 if you have the `sigaction' function. */
/* #undef HAVE_SIGACTION */

/* Define to 1 if you have the `signal' function. */
#define HAVE_SIGNAL 1

/* Define to 1 if you have the `sigset' function. */
/* #undef HAVE_SIGSET */

/* define if you have -lslp */
/* #undef HAVE_SLP */

/* Define to 1 if you have the <slp.h> header file. */
/* #undef HAVE_SLP_H */

/* Define to 1 if you have the `snprintf' function. */
#define HAVE_SNPRINTF 1

/* if you have spawnlp() */
#define HAVE_SPAWNLP 1

/* Define to 1 if you have the <sqlext.h> header file. */
/* #undef HAVE_SQLEXT_H */

/* Define to 1 if you have the <sql.h> header file. */
/* #undef HAVE_SQL_H */

/* Define to 1 if you have the <stddef.h> header file. */
#define HAVE_STDDEF_H 1

/* Define to 1 if you have the <stdint.h> header file. */
/* #undef HAVE_STDINT_H */

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the `strdup' function. */
#define HAVE_STRDUP 1

/* Define to 1 if you have the `strerror' function. */
#define HAVE_STRERROR 1

/* Define to 1 if you have the `strerror_r' function. */
/* #undef HAVE_STRERROR_R */

/* Define to 1 if you have the `strftime' function. */
#define HAVE_STRFTIME 1

/* Define to 1 if you have the <strings.h> header file. */
/* #undef HAVE_STRINGS_H */

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the `strpbrk' function. */
#define HAVE_STRPBRK 1

/* Define to 1 if you have the `strrchr' function. */
#define HAVE_STRRCHR 1

/* Define to 1 if you have the `strsep' function. */
/* #undef HAVE_STRSEP */

/* Define to 1 if you have the `strspn' function. */
#define HAVE_STRSPN 1

/* Define to 1 if you have the `strstr' function. */
#define HAVE_STRSTR 1

/* Define to 1 if you have the `strtol' function. */
#define HAVE_STRTOL 1

/* Define to 1 if you have the `strtoll' function. */
/* #undef HAVE_STRTOLL */

/* Define to 1 if you have the `strtoq' function. */
#define HAVE_STRTOQ 1

/* Define to 1 if you have the `strtoul' function. */
/* #undef HAVE_STRTOUL */

/* Define to 1 if you have the `strtoull' function. */
/* #undef HAVE_STRTOULL */

/* Define to 1 if you have the `strtouq' function. */
/* #undef HAVE_STRTOUQ */

/* Define to 1 if `msg_accrightslen' is member of `struct msghdr'. */
/* #undef HAVE_STRUCT_MSGHDR_MSG_ACCRIGHTSLEN */

/* Define to 1 if `msg_control' is member of `struct msghdr'. */
/* #undef HAVE_STRUCT_MSGHDR_MSG_CONTROL */

/* Define to 1 if `pw_gecos' is member of `struct passwd'. */
/* #undef HAVE_STRUCT_PASSWD_PW_GECOS */

/* Define to 1 if `pw_passwd' is member of `struct passwd'. */
/* #undef HAVE_STRUCT_PASSWD_PW_PASSWD */

/* Define to 1 if `st_blksize' is member of `struct stat'. */
/* #undef HAVE_STRUCT_STAT_ST_BLKSIZE */

/* Define to 1 if `st_fstype' is member of `struct stat'. */
/* #undef HAVE_STRUCT_STAT_ST_FSTYPE */

/* define to 1 if st_fstype is char * */
/* #undef HAVE_STRUCT_STAT_ST_FSTYPE_CHAR */

/* define to 1 if st_fstype is int */
/* #undef HAVE_STRUCT_STAT_ST_FSTYPE_INT */

/* Define to 1 if `st_vfstype' is member of `struct stat'. */
/* #undef HAVE_STRUCT_STAT_ST_VFSTYPE */

/* Define to 1 if you have the <synch.h> header file. */
/* #undef HAVE_SYNCH_H */

/* Define to 1 if you have the `sysconf' function. */
/* #undef HAVE_SYSCONF */

/* Define to 1 if you have the <sysexits.h> header file. */
/* #undef HAVE_SYSEXITS_H */

/* Define to 1 if you have the <syslog.h> header file. */
/* #undef HAVE_SYSLOG_H */

/* Define to 1 if you have the <sys/devpoll.h> header file. */
/* #undef HAVE_SYS_DEVPOLL_H */

/* Define to 1 if you have the <sys/dir.h> header file, and it defines `DIR'.
   */
/* #undef HAVE_SYS_DIR_H */

/* Define to 1 if you have the <sys/epoll.h> header file. */
#define HAVE_SYS_EPOLL_H 1

/* define if you actually have sys_errlist in your libs */
#define HAVE_SYS_ERRLIST 1

/* Define to 1 if you have the <sys/errno.h> header file. */
/* #undef HAVE_SYS_ERRNO_H */

/* Define to 1 if you have the <sys/file.h> header file. */
/* #undef HAVE_SYS_FILE_H */

/* Define to 1 if you have the <sys/filio.h> header file. */
/* #undef HAVE_SYS_FILIO_H */

/* Define to 1 if you have the <sys/fstyp.h> header file. */
/* #undef HAVE_SYS_FSTYP_H */

/* Define to 1 if you have the <sys/ioctl.h> header file. */
/* #undef HAVE_SYS_IOCTL_H */

/* Define to 1 if you have the <sys/ndir.h> header file, and it defines `DIR'.
   */
/* #undef HAVE_SYS_NDIR_H */

/* Define to 1 if you have the <sys/param.h> header file. */
/* #undef HAVE_SYS_PARAM_H */

/* Define to 1 if you have the <sys/poll.h> header file. */
/* #undef HAVE_SYS_POLL_H */

/* Define to 1 if you have the <sys/privgrp.h> header file. */
/* #undef HAVE_SYS_PRIVGRP_H */

/* Define to 1 if you have the <sys/resource.h> header file. */
/* #undef HAVE_SYS_RESOURCE_H */

/* Define to 1 if you have the <sys/select.h> header file. */
/* #undef HAVE_SYS_SELECT_H */

/* Define to 1 if you have the <sys/socket.h> header file. */
/* #undef HAVE_SYS_SOCKET_H */

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/syslog.h> header file. */
/* #undef HAVE_SYS_SYSLOG_H */

/* Define to 1 if you have the <sys/time.h> header file. */
/* #undef HAVE_SYS_TIME_H */

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <sys/ucred.h> header file. */
/* #undef HAVE_SYS_UCRED_H */

/* Define to 1 if you have the <sys/uio.h> header file. */
/* #undef HAVE_SYS_UIO_H */

/* Define to 1 if you have the <sys/un.h> header file. */
/* #undef HAVE_SYS_UN_H */

/* Define to 1 if you have the <sys/uuid.h> header file. */
/* #undef HAVE_SYS_UUID_H */

/* Define to 1 if you have the <sys/vmount.h> header file. */
/* #undef HAVE_SYS_VMOUNT_H */

/* Define to 1 if you have <sys/wait.h> that is POSIX.1 compatible. */
/* #undef HAVE_SYS_WAIT_H */

/* define if you have -lwrap */
/* #undef HAVE_TCPD */

/* Define to 1 if you have the <tcpd.h> header file. */
/* #undef HAVE_TCPD_H */

/* Define to 1 if you have the <termios.h> header file. */
/* #undef HAVE_TERMIOS_H */

/* if you have Solaris LWP (thr) package */
/* #undef HAVE_THR */

/* Define to 1 if you have the <thread.h> header file. */
/* #undef HAVE_THREAD_H */

/* Define to 1 if you have the `thr_getconcurrency' function. */
/* #undef HAVE_THR_GETCONCURRENCY */

/* Define to 1 if you have the `thr_setconcurrency' function. */
/* #undef HAVE_THR_SETCONCURRENCY */

/* Define to 1 if you have the `thr_yield' function. */
/* #undef HAVE_THR_YIELD */

/* define if you have TLS */
#define HAVE_TLS 1

/* Define to 1 if you have the <unicode/utypes.h> header file. */
/* #undef HAVE_UNICODE_UTYPES_H */

/* Define to 1 if you have the <unistd.h> header file. */
/* #undef HAVE_UNISTD_H */

/* Define to 1 if you have the <utime.h> header file. */
/* #undef HAVE_UTIME_H */

/* define if you have uuid_generate() */
/* #undef HAVE_UUID_GENERATE */

/* define if you have uuid_to_str() */
/* #undef HAVE_UUID_TO_STR */

/* Define to 1 if you have the <uuid/uuid.h> header file. */
/* #undef HAVE_UUID_UUID_H */

/* Define to 1 if you have the `vprintf' function. */
#define HAVE_VPRINTF 1

/* Define to 1 if you have the `vsnprintf' function. */
#define HAVE_VSNPRINTF 1

/* Define to 1 if you have the `wait4' function. */
/* #undef HAVE_WAIT4 */

/* Define to 1 if you have the `waitpid' function. */
/* #undef HAVE_WAITPID */

/* define if you have winsock */
#define HAVE_WINSOCK 1

/* define if you have winsock2 */
#define HAVE_WINSOCK2 1

/* Define to 1 if you have the <winsock2.h> header file. */
#define HAVE_WINSOCK2_H 1

/* Define to 1 if you have the <winsock.h> header file. */
#define HAVE_WINSOCK_H 1

/* Define to 1 if you have the `write' function. */
#define HAVE_WRITE 1

/* define if select implicitly yields */
#define HAVE_YIELDING_SELECT 1

/* Define to 1 if you have the `_vsnprintf' function. */
#define HAVE__VSNPRINTF 1

/* define this to add debugging code */
/* #undef LDAP_DEBUG */

/* define if LDAP libs are dynamic */
/* #undef LDAP_LIBS_DYNAMIC */

/* define to support PF_INET6 */
/* #undef LDAP_PF_INET6 */

/* define to support PF_LOCAL */
/* #undef LDAP_PF_LOCAL */

/* define this for LDAP process title support */
/* #undef LDAP_PROCTITLE */

/* define this to add SLAPI code */
/* #undef LDAP_SLAPI */

/* define this to add syslog code */
/* #undef LDAP_SYSLOG */

/* Version */
#define LDAP_VENDOR_VERSION 20431

/* Major */
#define LDAP_VENDOR_VERSION_MAJOR 2

/* Minor */
#define LDAP_VENDOR_VERSION_MINOR 4

/* Patch */
#define LDAP_VENDOR_VERSION_PATCH 31

/* define if memcmp is not 8-bit clean or is otherwise broken */
/* #undef NEED_MEMCMP_REPLACEMENT */

/* define if you have (or want) no threads */
/* #undef NO_THREADS */

/* define to use the original debug style */
/* #undef OLD_DEBUG */

/* Package */
#define OPENLDAP_PACKAGE "OpenLDAP"

/* Version */
#define OPENLDAP_VERSION "2.4.31"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT ""

/* Define to the full name of this package. */
#define PACKAGE_NAME ""

/* Define to the full name and version of this package. */
#define PACKAGE_STRING ""

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME ""

/* Define to the version of this package. */
#define PACKAGE_VERSION ""

/* define if sched_yield yields the entire process */
/* #undef REPLACE_BROKEN_YIELD */

/* Define as the return type of signal handlers (`int' or `void'). */
#define RETSIGTYPE void

/* Define to the type of arg 1 for `select'. */
/* #undef SELECT_TYPE_ARG1 */

/* Define to the type of args 2, 3 and 4 for `select'. */
/* #undef SELECT_TYPE_ARG234 */

/* Define to the type of arg 5 for `select'. */
/* #undef SELECT_TYPE_ARG5 */

/* The size of `int', as computed by sizeof. */
#define SIZEOF_INT 4

/* The size of `long', as computed by sizeof. */
#define SIZEOF_LONG 4

/* The size of `long long', as computed by sizeof. */
#define SIZEOF_LONG_LONG 8

/* The size of `short', as computed by sizeof. */
#define SIZEOF_SHORT 2

/* The size of `wchar_t', as computed by sizeof. */
#define SIZEOF_WCHAR_T 4

/* define to support per-object ACIs */
/* #undef SLAPD_ACI_ENABLED */

/* define to support BDB backend */
#define SLAPD_BDB 1

/* define to support cleartext passwords */
#define SLAPD_CLEARTEXT 1

/* define to support crypt(3) passwords */
/* #undef SLAPD_CRYPT */

/* define to support DNS SRV backend */
/* #undef SLAPD_DNSSRV */

/* define to support HDB backend */
/* #undef SLAPD_HDB */

/* define to support LDAP backend */
/* #undef SLAPD_LDAP */

/* define to support LAN Manager passwords */
/* #undef SLAPD_LMHASH */

/* define to support MDB backend */
/* #undef SLAPD_MDB */

/* define to support LDAP Metadirectory backend */
/* #undef SLAPD_META */

/* define to support modules */
/* #undef SLAPD_MODULES */

/* dynamically linked module */
#define SLAPD_MOD_DYNAMIC 2

/* statically linked module */
#define SLAPD_MOD_STATIC 1

/* define to support cn=Monitor backend */
#define SLAPD_MONITOR 1

/* define to support NDB backend */
/* #undef SLAPD_NDB */

/* define to support NULL backend */
/* #undef SLAPD_NULL */

/* define for In-Directory Access Logging overlay */
/* #undef SLAPD_OVER_ACCESSLOG */

/* define for Audit Logging overlay */
/* #undef SLAPD_OVER_AUDITLOG */

/* define for Collect overlay */
/* #undef SLAPD_OVER_COLLECT */

/* define for Attribute Constraint overlay */
/* #undef SLAPD_OVER_CONSTRAINT */

/* define for Dynamic Directory Services overlay */
/* #undef SLAPD_OVER_DDS */

/* define for Dynamic Directory Services overlay */
/* #undef SLAPD_OVER_DEREF */

/* define for Dynamic Group overlay */
/* #undef SLAPD_OVER_DYNGROUP */

/* define for Dynamic List overlay */
/* #undef SLAPD_OVER_DYNLIST */

/* define for Reverse Group Membership overlay */
/* #undef SLAPD_OVER_MEMBEROF */

/* define for Password Policy overlay */
/* #undef SLAPD_OVER_PPOLICY */

/* define for Proxy Cache overlay */
/* #undef SLAPD_OVER_PROXYCACHE */

/* define for Referential Integrity overlay */
/* #undef SLAPD_OVER_REFINT */

/* define for Referential Integrity overlay */
/* #undef SLAPD_OVER_RETCODE */

/* define for Rewrite/Remap overlay */
/* #undef SLAPD_OVER_RWM */

/* define for Sequential Modify overlay */
/* #undef SLAPD_OVER_SEQMOD */

/* define for ServerSideSort/VLV overlay */
/* #undef SLAPD_OVER_SSSVLV */

/* define for Syncrepl Provider overlay */
/* #undef SLAPD_OVER_SYNCPROV */

/* define for Translucent Proxy overlay */
/* #undef SLAPD_OVER_TRANSLUCENT */

/* define for Attribute Uniqueness overlay */
/* #undef SLAPD_OVER_UNIQUE */

/* define for Value Sorting overlay */
/* #undef SLAPD_OVER_VALSORT */

/* define to support PASSWD backend */
/* #undef SLAPD_PASSWD */

/* define to support PERL backend */
/* #undef SLAPD_PERL */

/* define to support relay backend */
/* #undef SLAPD_RELAY */

/* define to support reverse lookups */
/* #undef SLAPD_RLOOKUPS */

/* define to support SHELL backend */
/* #undef SLAPD_SHELL */

/* define to support SOCK backend */
/* #undef SLAPD_SOCK */

/* define to support SASL passwords */
/* #undef SLAPD_SPASSWD */

/* define to support SQL backend */
/* #undef SLAPD_SQL */

/* define to support run-time loadable ACL */
/* #undef SLAP_DYNACL */

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Define to 1 if you can safely include both <sys/time.h> and <time.h>. */
/* #undef TIME_WITH_SYS_TIME */

/* Define to 1 if your <sys/time.h> declares `struct tm'. */
/* #undef TM_IN_SYS_TIME */

/* set to urandom device */
/* #undef URANDOM_DEVICE */

/* define to use OpenSSL BIGNUM for MP */
/* #undef USE_MP_BIGNUM */

/* define to use GMP for MP */
/* #undef USE_MP_GMP */

/* define to use 'long' for MP */
/* #undef USE_MP_LONG */

/* define to use 'long long' for MP */
#define USE_MP_LONG_LONG 1

/* Define to 1 if your processor stores words with the most significant byte
   first (like Motorola and SPARC, unlike Intel and VAX). */
/* #undef WORDS_BIGENDIAN */

/* Define to the type of arg 3 for `accept'. */
#define ber_socklen_t int

/* Define to `char *' if <sys/types.h> does not define. */
#define caddr_t char *

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */

/* Define to `int' if <sys/types.h> doesn't define. */
#define gid_t int

/* Define to `int' if <sys/types.h> does not define. */
#define mode_t int

/* Define to `long' if <sys/types.h> does not define. */
/* #undef off_t */

/* Define to `int' if <sys/types.h> does not define. */
#define pid_t int

/* Define to `int' if <signal.h> does not define. */
/* #undef sig_atomic_t */

/* Define to `unsigned' if <sys/types.h> does not define. */
/* #undef size_t */

/* define to snprintf routine */
//#define snprintf _snprintf

/* Define like ber_socklen_t if <sys/socket.h> does not define. */
/* #undef socklen_t */

/* Define to `signed int' if <sys/types.h> does not define. */
#define ssize_t signed int

/* Define to `int' if <sys/types.h> doesn't define. */
#define uid_t int

/* define as empty if volatile is not supported */
/* #undef volatile */

/* define to snprintf routine */
//#define vsnprintf _vsnprintf


/* begin of portable.h.post */

#ifdef _WIN32
	/* don't suck in all of the win32 api */
#	define WIN32_LEAN_AND_MEAN 1
#define strcasecmp	stricmp
#define strncasecmp	strnicmp
#endif

#ifndef LDAP_NEEDS_PROTOTYPES
/* force LDAP_P to always include prototypes */
#define LDAP_NEEDS_PROTOTYPES 1
#endif

#ifndef LDAP_REL_ENG
#if (LDAP_VENDOR_VERSION == 000000) && !defined(LDAP_DEVEL)
#define LDAP_DEVEL
#endif
#if defined(LDAP_DEVEL) && !defined(LDAP_TEST)
#define LDAP_TEST
#endif
#endif

#ifdef HAVE_STDDEF_H
#	include <stddef.h>
#endif

#ifdef HAVE_EBCDIC 
/* ASCII/EBCDIC converting replacements for stdio funcs
 * vsnprintf and snprintf are used too, but they are already
 * checked by the configure script
 */
#define fputs ber_pvt_fputs
#define fgets ber_pvt_fgets
#define printf ber_pvt_printf
#define fprintf ber_pvt_fprintf
#define vfprintf ber_pvt_vfprintf
#define vsprintf ber_pvt_vsprintf
#endif

#include "ac/fdset.h"

#include "ldap_cdefs.h"
#include "ldap_features.h"

#include "ac/assert.h"
#include "ac/localize.h"

#endif /* _LDAP_PORTABLE_H */
/* end of portable.h.post */

