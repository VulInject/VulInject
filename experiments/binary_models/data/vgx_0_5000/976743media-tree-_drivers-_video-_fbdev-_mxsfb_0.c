static void mxsfb_disable_controller(struct fb_info *fb_info)
{
struct mxsfb_info *host = to_imxfb_host(fb_info);
unsigned loop;
u32 reg;
int ret;

dev_dbg(&host->pdev->dev, "%s\n", __func__);


writel(CTRL_DOTCLK_MODE, host->base + LCDC_CTRL + REG_CLR);

loop = 1000;
while (loop) {
reg = readl(host->base + LCDC_CTRL);
if (!(reg & CTRL_RUN))
break;
loop--;
}

reg = readl(host->base + LCDC_VDCTRL4);
writel(reg & ~VDCTRL4_SYNC_SIGNALS_ON, host->base + LCDC_VDCTRL4);

mxsfb_disable_axi_clk(host);

clk_disable_unprepare(host->clk);
if (host->clk_disp_axi)
clk_disable_unprepare(host->clk_disp_axi);

host->enabled = 0;

if (host->reg_lcd) {
ret = regulator_disable(host->reg_lcd);
if (ret)
dev_err(&host->pdev->dev,
"lcd regulator disable failed: %d\n", ret);
}
}