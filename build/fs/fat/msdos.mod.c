#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xd0b03f3a, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xa5b36da2, __VMLINUX_SYMBOL_STR(fat_detach) },
	{ 0x405c1144, __VMLINUX_SYMBOL_STR(get_seconds) },
	{ 0xffe2b209, __VMLINUX_SYMBOL_STR(drop_nlink) },
	{ 0xbac65bab, __VMLINUX_SYMBOL_STR(mark_buffer_dirty_inode) },
	{ 0x914dd21e, __VMLINUX_SYMBOL_STR(__mark_inode_dirty) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x35e40ace, __VMLINUX_SYMBOL_STR(fat_flush_inodes) },
	{ 0x6de36a91, __VMLINUX_SYMBOL_STR(inc_nlink) },
	{ 0x4287584b, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xd9c79e89, __VMLINUX_SYMBOL_STR(mount_bdev) },
	{ 0x67ba3749, __VMLINUX_SYMBOL_STR(fat_sync_inode) },
	{ 0xeefe162e, __VMLINUX_SYMBOL_STR(fat_add_entries) },
	{ 0x28fb31, __VMLINUX_SYMBOL_STR(fat_remove_entries) },
	{ 0x3c2b4896, __VMLINUX_SYMBOL_STR(fat_alloc_new_dir) },
	{ 0x136d3a49, __VMLINUX_SYMBOL_STR(fat_fill_super) },
	{ 0xbfb22ba2, __VMLINUX_SYMBOL_STR(fat_build_inode) },
	{ 0x259c10c5, __VMLINUX_SYMBOL_STR(fat_attach) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x2d383d66, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x6225c8fa, __VMLINUX_SYMBOL_STR(set_nlink) },
	{ 0x21c88fa7, __VMLINUX_SYMBOL_STR(sync_dirty_buffer) },
	{ 0xf4ea7b7a, __VMLINUX_SYMBOL_STR(fat_getattr) },
	{ 0x48a1aae1, __VMLINUX_SYMBOL_STR(__brelse) },
	{ 0x111e74ac, __VMLINUX_SYMBOL_STR(kill_block_super) },
	{ 0x6f20960a, __VMLINUX_SYMBOL_STR(full_name_hash) },
	{ 0x1dcef318, __VMLINUX_SYMBOL_STR(fat_scan) },
	{ 0x3ff77484, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x6e3f4b1d, __VMLINUX_SYMBOL_STR(__fat_fs_error) },
	{ 0xb544f6d, __VMLINUX_SYMBOL_STR(d_splice_alias) },
	{ 0xbd788050, __VMLINUX_SYMBOL_STR(fat_setattr) },
	{ 0x83e9f120, __VMLINUX_SYMBOL_STR(fat_free_clusters) },
	{ 0xf0921004, __VMLINUX_SYMBOL_STR(fat_get_dotdot_entry) },
	{ 0xbcfa5c27, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x4a39704d, __VMLINUX_SYMBOL_STR(fat_time_unix2fat) },
	{ 0x5d200325, __VMLINUX_SYMBOL_STR(fat_dir_empty) },
	{ 0x7ea61082, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0x48b50ec2, __VMLINUX_SYMBOL_STR(clear_nlink) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "8F7AADEA0FD8C97BB3543D8");
