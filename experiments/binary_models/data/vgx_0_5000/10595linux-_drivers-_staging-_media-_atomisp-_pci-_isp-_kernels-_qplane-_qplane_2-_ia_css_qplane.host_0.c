int ia_css_qplane_config(struct sh_css_isp_qplane_isp_config *to,
const struct ia_css_qplane_configuration  *from,
unsigned int size)
{
unsigned int elems_a = ISP_VEC_NELEMS;
int ret;

ret = ia_css_dma_configure_from_info(&to->port_b, from->info);
if (ret)
return ret;

to->width_a_over_b = elems_a / to->port_b.elems;


if (elems_a % to->port_b.elems != 0)
return -EINVAL;

to->inout_port_config = from->pipe->inout_port_config;
to->format = from->info->format;

return 0;
}