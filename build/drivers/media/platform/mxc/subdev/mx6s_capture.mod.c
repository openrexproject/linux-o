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
	{ 0x622fd48b, __VMLINUX_SYMBOL_STR(vb2_ops_wait_finish) },
	{ 0x99a0ea77, __VMLINUX_SYMBOL_STR(vb2_ops_wait_prepare) },
	{ 0x94d40e93, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0x2624a426, __VMLINUX_SYMBOL_STR(vb2_fop_poll) },
	{ 0xfdaf0133, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x849b9cb7, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x8b38c0a4, __VMLINUX_SYMBOL_STR(__pm_runtime_suspend) },
	{ 0x13bec41d, __VMLINUX_SYMBOL_STR(release_bus_freq) },
	{ 0xe92a7faf, __VMLINUX_SYMBOL_STR(vb2_queue_release) },
	{ 0xc290906e, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0xe57f0426, __VMLINUX_SYMBOL_STR(vb2_dma_contig_cleanup_ctx) },
	{ 0x3f59d6dd, __VMLINUX_SYMBOL_STR(request_bus_freq) },
	{ 0x3101fa63, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0x3e53493d, __VMLINUX_SYMBOL_STR(vb2_queue_init) },
	{ 0xb7338f35, __VMLINUX_SYMBOL_STR(vb2_dma_contig_memops) },
	{ 0xba1cc47f, __VMLINUX_SYMBOL_STR(vb2_dma_contig_init_ctx) },
	{ 0xf9a53d6a, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0x5c877a8c, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0x294154fa, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xbdaebdd7, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x1c483a9, __VMLINUX_SYMBOL_STR(v4l2_get_timestamp) },
	{ 0xc88f759, __VMLINUX_SYMBOL_STR(of_graph_get_remote_port_parent) },
	{ 0x3d41904f, __VMLINUX_SYMBOL_STR(of_get_next_child) },
	{ 0xe2870eef, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0xec4fa503, __VMLINUX_SYMBOL_STR(v4l2_async_notifier_register) },
	{ 0xaafdc258, __VMLINUX_SYMBOL_STR(strcasecmp) },
	{ 0x9e44b9b7, __VMLINUX_SYMBOL_STR(of_get_next_available_child) },
	{ 0x7bd07cbc, __VMLINUX_SYMBOL_STR(regmap_update_bits) },
	{ 0x90705b7f, __VMLINUX_SYMBOL_STR(syscon_node_to_regmap) },
	{ 0xe35c5285, __VMLINUX_SYMBOL_STR(of_find_node_by_phandle) },
	{ 0xdc886417, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xe14a2c18, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x2a1c6286, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0xc20e6c6d, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xe92a39be, __VMLINUX_SYMBOL_STR(video_device_release) },
	{ 0xbd4ed352, __VMLINUX_SYMBOL_STR(video_device_alloc) },
	{ 0xbd7d6228, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x5755bbee, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0xdac11bae, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0x985146c1, __VMLINUX_SYMBOL_STR(devm_clk_get) },
	{ 0x21567722, __VMLINUX_SYMBOL_STR(devm_ioremap_resource) },
	{ 0x3b8b1c19, __VMLINUX_SYMBOL_STR(platform_get_irq) },
	{ 0x8440ca78, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0xbaa21e14, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x19c541d7, __VMLINUX_SYMBOL_STR(vb2_read) },
	{ 0x2d383d66, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x4287584b, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x9ca2e3da, __VMLINUX_SYMBOL_STR(vb2_mmap) },
	{ 0x3efe74c5, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x5cbd76af, __VMLINUX_SYMBOL_STR(vb2_plane_vaddr) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xc1e5883, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0x870aff27, __VMLINUX_SYMBOL_STR(vb2_buffer_done) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xc7ac54a9, __VMLINUX_SYMBOL_STR(vb2_reqbufs) },
	{ 0xabc1520e, __VMLINUX_SYMBOL_STR(vb2_plane_cookie) },
	{ 0xc987b9c5, __VMLINUX_SYMBOL_STR(vb2_querybuf) },
	{ 0xacd41215, __VMLINUX_SYMBOL_STR(vb2_qbuf) },
	{ 0xd4325072, __VMLINUX_SYMBOL_STR(vb2_dqbuf) },
	{ 0x15e03698, __VMLINUX_SYMBOL_STR(vb2_streamon) },
	{ 0x8c29171b, __VMLINUX_SYMBOL_STR(vb2_streamoff) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x576fde70, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0x17143f01, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0x92b1080b, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0x9a26a77, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0x17af91d0, __VMLINUX_SYMBOL_STR(v4l2_async_notifier_unregister) },
	{ 0x3937df41, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cfsl,imx6s-csi*");

MODULE_INFO(srcversion, "E1AE4BD09B751F8ACD08CE3");
