int bnxt_qplib_dealloc_dpi(struct bnxt_qplib_res *res,
struct bnxt_qplib_dpi_tbl *dpit,
struct bnxt_qplib_dpi     *dpi)
{
if (dpi->dpi >= dpit->max) {
dev_warn(&res->pdev->dev, "Invalid DPI? dpi = %d", dpi->dpi);
return -EINVAL;
}
if (test_and_set_bit(dpi->dpi, dpit->tbl)) {
dev_warn(&res->pdev->dev, "Freeing an unused DPI? dpi = %d",
dpi->dpi);
return -EINVAL;
}
if (dpit->app_tbl)
dpit->app_tbl[dpi->dpi] = NULL;
memset(dpi, 0, sizeof(*dpi));

return 0;
}