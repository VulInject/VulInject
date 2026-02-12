static char *vram = "16m";
MODULE_PARM_DESC(vram, "Configure VRAM size (for devices without IOMMU/GPUMMU)");
module_param(vram, charp, 0);

bool dumpstate = false;
MODULE_PARM_DESC(dumpstate, "Dump KMS state on errors");
module_param(dumpstate, bool, 0600);



struct clk *msm_clk_get(struct platform_device *pdev, const char *name)
{
struct clk *clk;
char name2[32];

clk = devm_clk_get(&pdev->dev, name);
if (!IS_ERR(clk) || PTR_ERR(clk) == -EPROBE_DEFER)
return clk;

snprintf(name2, sizeof(name2), "%s_clk", name);

clk = devm_clk_get(&pdev->dev, name2);
if (!IS_ERR(clk))
dev_warn(&pdev->dev, "Using legacy clk name binding.  Use "
"\"%s\" instead of \"%s\"\n", name, name2);

return clk;
}