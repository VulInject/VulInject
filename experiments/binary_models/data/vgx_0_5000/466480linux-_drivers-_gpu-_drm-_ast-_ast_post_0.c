void ast_post_gpu(struct drm_device *dev)
{
struct ast_private *ast = to_ast_private(dev);
struct pci_dev *pdev = to_pci_dev(dev->dev);
u32 reg;

pci_read_config_dword(pdev, 0x04, &reg);
reg |= 0x3;
pci_write_config_dword(pdev, 0x04, reg);

ast_enable_vga(dev);
ast_open_key(ast);
ast_enable_mmio(dev);
ast_set_def_ext_reg(dev);

if (ast->chip == AST2600) {
ast_dp_launch(dev, 1);
} else if (ast->config_mode == ast_use_p2a) {
if (ast->chip == AST2500)
ast_post_chip_2500(dev);
else if (ast->chip == AST2300 || ast->chip == AST2400)
ast_post_chip_2300(dev);
else
ast_init_dram_reg(dev);

ast_init_3rdtx(dev);
} else {
if (ast->tx_chip_types & AST_TX_SIL164_BIT)
ast_set_index_reg_mask(ast, AST_IO_CRTC_PORT, 0xa3, 0xcf, 0x80);	
}
}