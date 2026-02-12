static int ov6650_s_parm(struct v4l2_subdev *sd, struct v4l2_streamparm *parms)
{
struct i2c_client *client = v4l2_get_subdevdata(sd);
struct ov6650 *priv = to_ov6650(client);
struct v4l2_captureparm *cp = &parms->parm.capture;
struct v4l2_fract *tpf = &cp->timeperframe;
int div, ret;
u8 clkrc;

if (parms->type != V4L2_BUF_TYPE_VIDEO_CAPTURE)
return -EINVAL;

if (cp->extendedmode != 0)
return -EINVAL;

if (tpf->numerator == 0 || tpf->denominator == 0)
div = 1;  
else
div = (tpf->numerator * FRAME_RATE_MAX) / tpf->denominator;

if (div == 0)
div = 1;
else if (div > GET_CLKRC_DIV(CLKRC_DIV_MASK))
div = GET_CLKRC_DIV(CLKRC_DIV_MASK);


priv->tpf.numerator = div;
priv->tpf.denominator = FRAME_RATE_MAX;

clkrc = to_clkrc(&priv->tpf, priv->pclk_limit, priv->pclk_max);

ret = ov6650_reg_rmw(client, REG_CLKRC, clkrc, CLKRC_DIV_MASK);
if (!ret) {
tpf->numerator = GET_CLKRC_DIV(clkrc);
tpf->denominator = FRAME_RATE_MAX;
}

return ret;
}