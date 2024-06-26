const static char* syscalls_32bit_g[] = {
	"restart_syscall", "",
	"exit", "i",
	"fork", "",
	"read", "ipi",
	"write", "ipi",
	"open", "pii",
	"close", "i",
	"waitpid", "ipi",
	"creat", "pi",
	"link", "pp",
	"unlink", "p",
	"execve", "ppp",
	"chdir", "p",
	"time", "p",
	"mknod", "pii",
	"chmod", "pi",
	"lchown", "pii",
	"break", "",
	"oldstat", "",
	"lseek", "iii",
	"getpid", "",
	"mount", "pppip",
	"umount", "pi",
	"setuid", "i",
	"getuid", "",
	"stime", "p",
	"ptrace", "iiii",
	"alarm", "i",
	"oldfstat", "",
	"pause", "",
	"utime", "pp",
	"stty", "",
	"gtty", "",
	"access", "pi",
	"nice", "i",
	"ftime", "",
	"sync", "",
	"kill", "ii",
	"rename", "pp",
	"mkdir", "pi",
	"rmdir", "p",
	"dup", "i",
	"pipe", "p",
	"times", "p",
	"prof", "",
	"brk", "i",
	"setgid", "i",
	"getgid", "",
	"signal", "ii",
	"geteuid", "",
	"getegid", "",
	"acct", "p",
	"umount2", "",
	"lock", "",
	"ioctl", "iii",
	"fcntl", "iii",
	"mpx", "",
	"setpgid", "ii",
	"ulimit", "",
	"oldolduname", "",
	"umask", "i",
	"chroot", "p",
	"ustat", "ip",
	"dup2", "ii",
	"getppid", "",
	"getpgrp", "",
	"setsid", "",
	"sigaction", "ipp",
	"sgetmask", "",
	"ssetmask", "i",
	"setreuid", "ii",
	"setregid", "ii",
	"sigsuspend", "iii",
	"sigpending", "p",
	"sethostname", "pi",
	"setrlimit", "ip",
	"getrlimit", "ip",
	"getrusage", "ip",
	"gettimeofday", "pp",
	"settimeofday", "pp",
	"getgroups", "ip",
	"setgroups", "ip",
	"select", "ipppp",
	"symlink", "pp",
	"oldlstat", "",
	"readlink", "ppi",
	"uselib", "p",
	"swapon", "pi",
	"reboot", "iiip",
	"readdir", "",
	"mmap", "piii",
	"munmap", "ii",
	"truncate", "pi",
	"ftruncate", "ii",
	"fchmod", "ii",
	"fchown", "iii",
	"getpriority", "ii",
	"setpriority", "iii",
	"profil", "",
	"statfs", "pp",
	"fstatfs", "ip",
	"ioperm", "iii",
	"socketcall", "ip",
	"syslog", "ipi",
	"setitimer", "ipp",
	"getitimer", "ip",
	"stat", "pp",
	"lstat", "pp",
	"fstat", "ip",
	"olduname", "p",
	"iopl", "",
	"vhangup", "",
	"idle", "",
	"vm86old", "",
	"wait4", "ipip",
	"swapoff", "p",
	"sysinfo", "p",
	"ipc", "iiiip",
	"fsync", "i",
	"sigreturn", "",
	"clone", "iippi",
	"setdomainname", "pi",
	"uname", "p",
	"modify_ldt", "",
	"adjtimex", "p",
	"mprotect", "iii",
	"sigprocmask", "ipp",
	"create_module", "",
	"init_module", "pip",
	"delete_module", "pi",
	"get_kernel_syms", "",
	"quotactl", "ipip",
	"getpgid", "i",
	"fchdir", "i",
	"bdflush", "",
	"sysfs", "iii",
	"personality", "i",
	"afs_syscall", "",
	"setfsuid", "i",
	"setfsgid", "i",
	"_llseek", "",
	"getdents", "ipi",
	"_newselect", "",
	"flock", "ii",
	"msync", "iii",
	"readv", "ipi",
	"writev", "ipi",
	"getsid", "i",
	"fdatasync", "i",
	"_sysctl", "",
	"mlock", "ii",
	"munlock", "ii",
	"mlockall", "i",
	"munlockall", "",
	"sched_setparam", "ip",
	"sched_getparam", "ip",
	"sched_setscheduler", "iip",
	"sched_getscheduler", "i",
	"sched_yield", "",
	"sched_get_priority_max", "i",
	"sched_get_priority_min", "i",
	"sched_rr_get_interval", "ip",
	"nanosleep", "pp",
	"mremap", "iiiii",
	"setresuid", "iii",
	"getresuid", "ppp",
	"vm86", "",
	"query_module", "",
	"poll", "pii",
	"nfsservctl", "",
	"setresgid", "iii",
	"getresgid", "ppp",
	"prctl", "iiiii",
	"rt_sigreturn", "",
	"rt_sigaction", "ippi",
	"rt_sigprocmask", "ippi",
	"rt_sigpending", "pi",
	"rt_sigtimedwait", "pppi",
	"rt_sigqueueinfo", "iip",
	"rt_sigsuspend", "pi",
	"pread64", "ipii",
	"pwrite64", "ipii",
	"chown", "pii",
	"getcwd", "pi",
	"capget", "ii",
	"capset", "ii",
	"sigaltstack", "pp",
	"sendfile", "iipi",
	"getpmsg", "",
	"putpmsg", "",
	"vfork", "",
	"ugetrlimit", "",
	"mmap2", "piiiii",
	"truncate64", "pi",
	"ftruncate64", "ii",
	"stat64", "pp",
	"lstat64", "pp",
	"fstat64", "ip",
	"lchown32", "",
	"getuid32", "",
	"getgid32", "",
	"geteuid32", "",
	"getegid32", "",
	"setreuid32", "",
	"setregid32", "",
	"getgroups32", "",
	"setgroups32", "",
	"fchown32", "",
	"setresuid32", "",
	"getresuid32", "",
	"setresgid32", "",
	"getresgid32", "",
	"chown32", "",
	"setuid32", "",
	"setgid32", "",
	"setfsuid32", "",
	"setfsgid32", "",
	"pivot_root", "pp",
	"mincore", "iip",
	"madvise", "iii",
	"getdents64", "ipi",
	"fcntl64", "iii",
	"", "",
	"", "",
	"gettid", "",
	"readahead", "iii",
	"setxattr", "pppii",
	"lsetxattr", "pppii",
	"fsetxattr", "ippii",
	"getxattr", "pppi",
	"lgetxattr", "pppi",
	"fgetxattr", "ippi",
	"listxattr", "ppi",
	"llistxattr", "ppi",
	"flistxattr", "ipi",
	"removexattr", "pp",
	"lremovexattr", "pp",
	"fremovexattr", "ip",
	"tkill", "ii",
	"sendfile64", "iipi",
	"futex", "piipp",
	"sched_setaffinity", "iip",
	"sched_getaffinity", "iip",
	"set_thread_area", "",
	"get_thread_area", "",
	"io_setup", "ip",
	"io_destroy", "i",
	"io_getevents", "iiipp",
	"io_submit", "iip",
	"io_cancel", "ipp",
	"fadvise64", "iiii",
	"", "",
	"exit_group", "i",
	"lookup_dcookie", "ipi",
	"epoll_create", "i",
	"epoll_ctl", "iiip",
	"epoll_wait", "ipii",
	"remap_file_pages", "iiiii",
	"set_tid_address", "p",
	"timer_create", "ipp",
	"timer_settime", "iipp",
	"timer_gettime", "ip",
	"timer_getoverrun", "i",
	"timer_delete", "i",
	"clock_settime", "ip",
	"clock_gettime", "ip",
	"clock_getres", "ip",
	"clock_nanosleep", "iipp",
	"statfs64", "pip",
	"fstatfs64", "iip",
	"tgkill", "iii",
	"utimes", "pp",
	"fadvise64_64", "iiii",
	"vserver", "",
	"mbind", "iiipi",
	"get_mempolicy", "ppiii",
	"set_mempolicy", "ipi",
	"mq_open", "piip",
	"mq_unlink", "p",
	"mq_timedsend", "ipiip",
	"mq_timedreceive", "ipipp",
	"mq_notify", "ip",
	"mq_getsetattr", "ipp",
	"kexec_load", "iipi",
	"waitid", "iipip",
	"", "",
	"add_key", "pppii",
	"request_key", "pppi",
	"keyctl", "iiiii",
	"ioprio_set", "iii",
	"ioprio_get", "ii",
	"inotify_init", "",
	"inotify_add_watch", "ipi",
	"inotify_rm_watch", "ii",
	"migrate_pages", "iipp",
	"openat", "ipi",
	"mkdirat", "ipi",
	"mknodat", "ipii",
	"fchownat", "ipiii",
	"futimesat", "ipp",
	"fstatat64", "ippi",
	"unlinkat", "ipi",
	"renameat", "ipip",
	"linkat", "ipipi",
	"symlinkat", "pip",
	"readlinkat", "ippi",
	"fchmodat", "ipi",
	"faccessat", "ipi",
	"pselect6", "ipppp",
	"ppoll", "pippi",
	"unshare", "i",
	"set_robust_list", "pi",
	"get_robust_list", "ipp",
	"splice", "ipipi",
	"sync_file_range", "iiii",
	"tee", "iiii",
	"vmsplice", "ipii",
	"move_pages", "iippp",
	"getcpu", "ppp",
	"epoll_pwait", "ipiip",
	"utimensat", "ippi",
	"signalfd", "ipi",
	"timerfd_create", "ii",
	"eventfd", "i",
	"fallocate", "iiii",
	"timerfd_settime", "iipp",
	"timerfd_gettime", "ip",
	"signalfd4", "ipii",
	"eventfd2", "ii",
	"epoll_create1", "i",
	"dup3", "iii",
	"pipe2", "pi",
	"inotify_init1", "i",
	"preadv", "ipiii",
	"pwritev", "ipiii",
	"rt_tgsigqueueinfo", "iiip",
	"perf_event_open", "piiii",
	"recvmmsg", "ipiip",
	"fanotify_init", "ii",
	"fanotify_mark", "iiiip",
	"prlimit64", "iipp",
	"name_to_handle_at", "ipppi",
	"open_by_handle_at", "ipi",
	"clock_adjtime", "ip",
	"syncfs", "i",
	"sendmmsg", "ipii",
	"setns", "ii",
	"process_vm_readv", "ipipi",
	"process_vm_writev", "ipipi",
	"kcmp", "iiiii",
	"finit_module", "ipi",
	"sched_setattr", "ipi",
	"sched_getattr", "ipii",
	"renameat2", "ipipi",
	"seccomp", "iip",
	"getrandom", "pii",
	"memfd_create", "pi",
	"bpf", "ipi",
	"execveat", "ipppi",
	"socket", "iii",
	"socketpair", "iiip",
	"bind", "ipi",
	"connect", "ipi",
	"listen", "ii",
	"accept4", "ippi",
	"getsockopt", "iiipp",
	"setsockopt", "iiipi",
	"getsockname", "ipp",
	"getpeername", "ipp",
	"sendto", "ipiip",
	"sendmsg", "ipi",
	"recvfrom", "ipiip",
	"recvmsg", "ipi",
	"shutdown", "ii",
	"userfaultfd", "i",
	"membarrier", "iii",
	"mlock2", "iii",
	"copy_file_range", "ipipi",
	"preadv2", "ipiii",
	"pwritev2", "ipiii",
	"pkey_mprotect", "iiii",
	"pkey_alloc", "ii",
	"pkey_free", "i",
	"statx", "ipiip",
	"arch_prctl", "",
	"", "",
	"rseq", "piii",
	"", "",
	"", "",
	"", "",
	"", "",
	"", "",
	"", "",
	"", "",
	"", "",
	"", "",
	"", "",
	"", "",
	"", "",
	"", "",
	"", "",
	"", "",
	"", "",
	"clock_gettime64", "",
	"clock_settime64", "",
	"clock_adjtime64", "",
	"clock_getres_time64", "",
	"clock_nanosleep_time64", "",
	"timer_gettime64", "",
	"timer_settime64", "",
	"timerfd_gettime64", "",
	"timerfd_settime64", "",
	"utimensat_time64", "",
	"pselect6_time64", "",
	"ppoll_time64", "",
	"", "",
	"io_pgetevents_time64", "",
	"recvmmsg_time64", "",
	"mq_timedsend_time64", "",
	"mq_timedreceive_time64", "",
	"semtimedop_time64", "",
	"rt_sigtimedwait_time64", "",
	"futex_time64", "",
	"sched_rr_get_interval_time64", "",
	"", "",
	"io_uring_setup", "ip",
	"io_uring_enter", "iiiip",
	"", "",
	"", "",
	"", "",
	"", "",
	"", "",
	"", "",
	"", "",
	"pidfd_open", "ii",
	"clone3", "pi",
	"close_range", "iii",
	"", "",
	"", "",
	"faccessat2", "ipii",
};

#include "ft_strace.h"

const char*	get_syscall_name_32bit(u_int16_t syscall_number)
{
	if (syscall_number > 439)
		return ("syscall");
	return ( syscalls_32bit_g[syscall_number * 2]);
}

const char*	get_syscall_args_format_32bit(u_int16_t syscall_number)
{
	if (syscall_number > 439)
		return ("iiii");
	return (syscalls_32bit_g[syscall_number * 2 + 1]);
}
