static int s5k6aa_set_colorfx(struct s5k6aa *s5k6aa, int val)
{
struct i2c_client *client = v4l2_get_subdevdata(&s5k6aa->sd);
static const struct v4l2_control colorfx[] = {
{ V4L2_COLORFX_NONE,	 0 },
{ V4L2_COLORFX_BW,	 1 },
{ V4L2_COLORFX_NEGATIVE, 2 },
{ V4L2_COLORFX_SEPIA,	 3 },
{ V4L2_COLORFX_SKY_BLUE, 4 },
{ V4L2_COLORFX_SKETCH,	 5 },
};
int i;

for (i = 0; i < ARRAY_SIZE(colorfx); i++) {
if (colorfx[i].id == val)
return s5k6aa_write(client, REG_G_SPEC_EFFECTS,
colorfx[i].value);
}
return -EINVAL;
}