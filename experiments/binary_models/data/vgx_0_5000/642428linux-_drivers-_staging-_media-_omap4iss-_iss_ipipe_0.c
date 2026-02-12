static int ipipe_init_entities(struct iss_ipipe_device *ipipe)
{
struct v4l2_subdev *sd = &ipipe->subdev;
struct media_pad *pads = ipipe->pads;
struct media_entity *me = &sd->entity;
int ret;

ipipe->input = IPIPE_INPUT_NONE;

v4l2_subdev_init(sd, &ipipe_v4l2_ops);
sd->internal_ops = &ipipe_v4l2_internal_ops;
strscpy(sd->name, "OMAP4 ISS ISP IPIPE", sizeof(sd->name));
sd->grp_id = BIT(16);	
v4l2_set_subdevdata(sd, ipipe);
sd->flags |= V4L2_SUBDEV_FL_HAS_DEVNODE;

pads[IPIPE_PAD_SINK].flags = MEDIA_PAD_FL_SINK;
pads[IPIPE_PAD_SOURCE_VP].flags = MEDIA_PAD_FL_SOURCE;

me->ops = &ipipe_media_ops;
ret = media_entity_pads_init(me, IPIPE_PADS_NUM, pads);
if (ret < 0)
return ret;

ipipe_init_formats(sd, NULL);

return 0;
}