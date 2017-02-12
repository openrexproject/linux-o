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
	{ 0xafa7f2b5, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x6328a7fa, __VMLINUX_SYMBOL_STR(iget_failed) },
	{ 0x138b125c, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x2edc3c5b, __VMLINUX_SYMBOL_STR(sb_min_blocksize) },
	{ 0x77ecac9f, __VMLINUX_SYMBOL_STR(zlib_inflateEnd) },
	{ 0x58a7aede, __VMLINUX_SYMBOL_STR(__bread) },
	{ 0x9577a5e0, __VMLINUX_SYMBOL_STR(unload_nls) },
	{ 0xa3a0cbbf, __VMLINUX_SYMBOL_STR(save_mount_options) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xef6dbbe9, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0xcd608c9a, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0x89f5d3fe, __VMLINUX_SYMBOL_STR(iget5_locked) },
	{ 0xd39e7bf2, __VMLINUX_SYMBOL_STR(pagecache_get_page) },
	{ 0xacf4d843, __VMLINUX_SYMBOL_STR(match_strdup) },
	{ 0xa58aadad, __VMLINUX_SYMBOL_STR(ll_rw_block) },
	{ 0xcae232b, __VMLINUX_SYMBOL_STR(utf16s_to_utf8s) },
	{ 0x44e9a829, __VMLINUX_SYMBOL_STR(match_token) },
	{ 0x4e830a3e, __VMLINUX_SYMBOL_STR(strnicmp) },
	{ 0x4287584b, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xd9c79e89, __VMLINUX_SYMBOL_STR(mount_bdev) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0xa10a2d2e, __VMLINUX_SYMBOL_STR(page_symlink_inode_operations) },
	{ 0xd9faa5f9, __VMLINUX_SYMBOL_STR(generic_read_dir) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x32ddd5b6, __VMLINUX_SYMBOL_STR(call_rcu) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xc517b904, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0x4b1fc992, __VMLINUX_SYMBOL_STR(mpage_readpages) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xcc4129f9, __VMLINUX_SYMBOL_STR(mpage_readpage) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0xd627480b, __VMLINUX_SYMBOL_STR(strncat) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x6d855c99, __VMLINUX_SYMBOL_STR(d_obtain_alias) },
	{ 0xba581130, __VMLINUX_SYMBOL_STR(kunmap) },
	{ 0xce5ac24f, __VMLINUX_SYMBOL_STR(zlib_inflate_workspacesize) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0xf6ca9f1d, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x6225c8fa, __VMLINUX_SYMBOL_STR(set_nlink) },
	{ 0x2d383d66, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xa4730b73, __VMLINUX_SYMBOL_STR(__wait_on_buffer) },
	{ 0x769b138e, __VMLINUX_SYMBOL_STR(generic_ro_fops) },
	{ 0x4e3567f7, __VMLINUX_SYMBOL_STR(match_int) },
	{ 0xef19c849, __VMLINUX_SYMBOL_STR(unlock_page) },
	{ 0x48a1aae1, __VMLINUX_SYMBOL_STR(__brelse) },
	{ 0xeaa62715, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0x881039d0, __VMLINUX_SYMBOL_STR(zlib_inflate) },
	{ 0xb85cf224, __VMLINUX_SYMBOL_STR(inode_init_once) },
	{ 0xab1985d7, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xf6a1f88, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0xa3db4f12, __VMLINUX_SYMBOL_STR(kmap) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0x58e0e1a, __VMLINUX_SYMBOL_STR(load_nls) },
	{ 0x33b4fa94, __VMLINUX_SYMBOL_STR(unlock_new_inode) },
	{ 0x111e74ac, __VMLINUX_SYMBOL_STR(kill_block_super) },
	{ 0x6f20960a, __VMLINUX_SYMBOL_STR(full_name_hash) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x6da59f3a, __VMLINUX_SYMBOL_STR(generic_show_options) },
	{ 0x85ae8112, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x3ff77484, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x4211c3c1, __VMLINUX_SYMBOL_STR(zlib_inflateInit2) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0x184c472, __VMLINUX_SYMBOL_STR(iput) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xadacf225, __VMLINUX_SYMBOL_STR(load_nls_default) },
	{ 0xb544f6d, __VMLINUX_SYMBOL_STR(d_splice_alias) },
	{ 0x6077d590, __VMLINUX_SYMBOL_STR(sb_set_blocksize) },
	{ 0xb02b5b5d, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0xd757e866, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0x16572f29, __VMLINUX_SYMBOL_STR(ioctl_by_bdev) },
	{ 0xbcfa5c27, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0x32d08546, __VMLINUX_SYMBOL_STR(init_special_inode) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x8686c819, __VMLINUX_SYMBOL_STR(__getblk) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xa31cdb56, __VMLINUX_SYMBOL_STR(flush_dcache_page) },
	{ 0x625225db, __VMLINUX_SYMBOL_STR(generic_block_bmap) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "0E33CFE1F376B5FD9C65041");
