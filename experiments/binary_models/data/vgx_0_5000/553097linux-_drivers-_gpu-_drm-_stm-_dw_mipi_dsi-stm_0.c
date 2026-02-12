static int dw_mipi_dsi_phy_init(void *priv_data)
{
struct dw_mipi_dsi_stm *dsi = priv_data;
u32 val;
int ret;


dsi_set(dsi, DSI_WRPCR, WRPCR_REGEN | WRPCR_BGREN);
ret = readl_poll_timeout(dsi->base + DSI_WISR, val, val & WISR_RRS,
SLEEP_US, TIMEOUT_US);
if (ret)
DRM_DEBUG_DRIVER("!TIMEOUT! waiting REGU, let's continue\n");


dsi_set(dsi, DSI_WRPCR, WRPCR_PLLEN);
ret = readl_poll_timeout(dsi->base + DSI_WISR, val, val & WISR_PLLLS,
SLEEP_US, TIMEOUT_US);
if (ret)
DRM_DEBUG_DRIVER("!TIMEOUT! waiting PLL, let's continue\n");

return 0;
}