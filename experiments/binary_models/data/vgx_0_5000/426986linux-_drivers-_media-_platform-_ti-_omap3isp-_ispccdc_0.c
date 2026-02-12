static bool ccdc_has_all_fields(struct isp_ccdc_device *ccdc)
{
struct isp_pipeline *pipe = to_isp_pipeline(&ccdc->subdev.entity);
struct isp_device *isp = to_isp_device(ccdc);
enum v4l2_field of_field = ccdc->formats[CCDC_PAD_SOURCE_OF].field;
enum v4l2_field field;


if (of_field == V4L2_FIELD_NONE)
return true;


field = isp_reg_readl(isp, OMAP3_ISP_IOMEM_CCDC, ISPCCDC_SYN_MODE)
& ISPCCDC_SYN_MODE_FLDSTAT
? V4L2_FIELD_BOTTOM : V4L2_FIELD_TOP;


if (of_field == V4L2_FIELD_ALTERNATE) {
pipe->field = field;
return true;
}


ccdc->fields |= field == V4L2_FIELD_BOTTOM
? CCDC_FIELD_BOTTOM : CCDC_FIELD_TOP;

if (ccdc->fields != CCDC_FIELD_BOTH)
return false;


if ((of_field == V4L2_FIELD_INTERLACED_TB && field == V4L2_FIELD_TOP) ||
(of_field == V4L2_FIELD_INTERLACED_BT && field == V4L2_FIELD_BOTTOM))
return false;


ccdc->fields = 0;

return true;
}