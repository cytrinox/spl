#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x51198477, "module_layout" },
	{ 0xdd4acab1, "vn_fsync" },
	{ 0xc816dc2d, "kmalloc_caches" },
	{ 0x5a34a45c, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8d8996ce, "z_uncompress" },
	{ 0x26b64321, "call_usermodehelper_setfns" },
	{ 0xd670e116, "spl_kmem_alloc_warn" },
	{ 0xf5893abf, "up_read" },
	{ 0x1c1af916, "set_normalized_timespec" },
	{ 0xdb347c7a, "call_usermodehelper_exec" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xadaabe1b, "pv_lock_ops" },
	{ 0x25ec1b28, "strlen" },
	{ 0x8205f265, "crhold" },
	{ 0x1efe1f66, "vn_close" },
	{ 0x4ff1c9bc, "populate_rootfs_wait" },
	{ 0x19295e53, "taskq_create" },
	{ 0x3f38bd50, "crgetruid" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xd14a7eb5, "vn_getattr" },
	{ 0xbd100793, "cpu_online_mask" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xab140103, "spl_kmem_alloc" },
	{ 0x80c478fd, "rootdir" },
	{ 0x52760ca9, "getnstimeofday" },
	{ 0x73a78bc4, "downgrade_write" },
	{ 0xffff91e3, "taskq_init_ent" },
	{ 0xefc4da17, "kobj_close_file" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xf7fb002a, "kobj_get_filesize" },
	{ 0x63bdf5f0, "crgetngroups" },
	{ 0xf7756b61, "vn_rename" },
	{ 0x8e4c2658, "crgetgroups" },
	{ 0xebebe14, "groups_free" },
	{ 0xba2adaf, "mutex_unlock" },
	{ 0x4704f678, "vn_rdwr" },
	{ 0x999e8297, "vfree" },
	{ 0xda8ebb70, "crgetsuid" },
	{ 0x91715312, "sprintf" },
	{ 0x8eb0a41f, "tsd_destroy" },
	{ 0xb8e71471, "spl_kmem_cache_free" },
	{ 0x53c639a, "ddi_strtoul" },
	{ 0xbc32eee7, "spl_panic" },
	{ 0x7d11c268, "jiffies" },
	{ 0x31eb4278, "mutex_trylock" },
	{ 0x57a6ccd0, "down_read" },
	{ 0x30e8b295, "spl_kthread_create" },
	{ 0x35225ea3, "down_write_trylock" },
	{ 0xde9360ba, "totalram_pages" },
	{ 0x786ba98a, "crgetuid" },
	{ 0x6395be94, "__init_waitqueue_head" },
	{ 0x4f8b5ddb, "_copy_to_user" },
	{ 0xfe7c4287, "nr_cpu_ids" },
	{ 0x106b6ba8, "taskq_destroy" },
	{ 0x114258fb, "misc_register" },
	{ 0xde0bdcff, "memset" },
	{ 0x8b78128, "spl_kmem_cache_destroy" },
	{ 0xbc9dddde, "taskq_wait_id" },
	{ 0x8f64aa4, "_raw_spin_unlock_irqrestore" },
	{ 0x69371301, "current_task" },
	{ 0x143fcac6, "__cv_signal" },
	{ 0x87ebeb76, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x4ebec927, "kthread_stop" },
	{ 0x8bb0527b, "crgetrgid" },
	{ 0x2fa5a500, "memcmp" },
	{ 0x856dab93, "set_current_groups" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb940ee11, "taskq_wait" },
	{ 0x7ec9bfbc, "strncpy" },
	{ 0xb4390f9a, "mcount" },
	{ 0x676335fa, "__cv_timedwait" },
	{ 0x85abc85f, "strncmp" },
	{ 0xafe1db9d, "mutex_lock" },
	{ 0xa340453c, "system_taskq" },
	{ 0x13401075, "taskq_dispatch" },
	{ 0x5bb6ad4b, "spl_vmem_zalloc" },
	{ 0x6e06545b, "crgetsgid" },
	{ 0x3b4ceb4a, "up_write" },
	{ 0xe6e3b875, "down_write" },
	{ 0x6d601403, "crgetgid" },
	{ 0x1b7b5809, "__cv_broadcast" },
	{ 0x3323ccb1, "tsd_get" },
	{ 0x53bddca5, "taskq_dispatch_ent" },
	{ 0x9d271bf, "spl_kmem_cache_expire" },
	{ 0x31eaf145, "init_task" },
	{ 0xfd07bd40, "spl_kmem_alloc_max" },
	{ 0x351c2576, "z_compress_level" },
	{ 0x81376bfd, "vn_remove" },
	{ 0xc50bab05, "unregister_shrinker" },
	{ 0x6ae07d22, "__cv_wait" },
	{ 0x17980bc5, "crfree" },
	{ 0x93fca811, "__get_free_pages" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x4b5814ef, "kmalloc_order_trace" },
	{ 0x958b84e3, "tsd_create" },
	{ 0x667ba081, "spl_kmem_cache_create" },
	{ 0x20173f35, "taskq_wait_outstanding" },
	{ 0xaebbec7c, "kobj_read_file" },
	{ 0xdae80439, "spl_vmem_alloc" },
	{ 0xcfa37f55, "wake_up_process" },
	{ 0xd22ed5e2, "spl_kmem_cache_alloc" },
	{ 0xa3a77c69, "down_read_trylock" },
	{ 0x54b130a8, "kmem_cache_alloc_trace" },
	{ 0x360e492b, "__cv_init" },
	{ 0xd52bf1ce, "_raw_spin_lock" },
	{ 0x9327f5ce, "_raw_spin_lock_irqsave" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xcf21d241, "__wake_up" },
	{ 0x659a64d0, "call_usermodehelper_setup" },
	{ 0xd2965f6f, "kthread_should_stop" },
	{ 0x2c0fbe10, "vn_open" },
	{ 0x31ec560e, "groups_alloc" },
	{ 0x506746b6, "getrawmonotonic" },
	{ 0x1285cb78, "tsd_set" },
	{ 0x3896a905, "__thread_exit" },
	{ 0x37a0cba, "kfree" },
	{ 0x82fe53e1, "ddi_strtol" },
	{ 0x236c8c64, "memcpy" },
	{ 0x5c8b5ce8, "prepare_to_wait" },
	{ 0x9518b623, "register_shrinker" },
	{ 0xf68905fd, "ddi_strtoull" },
	{ 0xd9ace09, "ddi_strtoll" },
	{ 0xfa66f77c, "finish_wait" },
	{ 0x4cbbd171, "__bitmap_weight" },
	{ 0x9f46de9, "kobj_open_file" },
	{ 0x185936d6, "groupmember" },
	{ 0x401c592f, "spl_version" },
	{ 0x50720c5f, "snprintf" },
	{ 0x80c3f220, "spl_kmem_free" },
	{ 0x7466fa85, "spl_kmem_cache_reap_now" },
	{ 0x1500ba78, "__thread_create" },
	{ 0x4f6b400b, "_copy_from_user" },
	{ 0x778a305, "spl_vmem_free" },
	{ 0xb3e56341, "taskq_cancel_id" },
	{ 0xdfb0b5e5, "misc_deregister" },
	{ 0x2a6e6109, "__init_rwsem" },
	{ 0xec031267, "taskq_dispatch_delay" },
	{ 0x85524b8b, "p0" },
	{ 0x59fe72f0, "__cv_destroy" },
	{ 0x2e1cae5a, "vn_openat" },
	{ 0x9dcb88fc, "spl_kmem_zalloc" },
	{ 0xdb7958d9, "taskq_empty_ent" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=spl";


MODULE_INFO(srcversion, "EFD5F56EF2E9E5A7BCED0BE");