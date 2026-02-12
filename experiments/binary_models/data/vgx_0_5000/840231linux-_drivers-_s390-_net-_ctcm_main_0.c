static int ctcm_probe_device(struct ccwgroup_device *cgdev)
{
struct ctcm_priv *priv;

CTCM_DBF_TEXT_(SETUP, CTC_DBF_INFO,
"%s %p",
__func__, cgdev);

if (!get_device(&cgdev->dev))
return -ENODEV;

priv = kzalloc(sizeof(struct ctcm_priv), GFP_KERNEL);
if (!priv) {
CTCM_DBF_TEXT_(ERROR, CTC_DBF_ERROR,
"%s: memory allocation failure",
CTCM_FUNTAIL);
put_device(&cgdev->dev);
return -ENOMEM;
}
priv->buffer_size = CTCM_BUFSIZE_DEFAULT;
cgdev->cdev[0]->handler = ctcm_irq_handler;
cgdev->cdev[1]->handler = ctcm_irq_handler;
dev_set_drvdata(&cgdev->dev, priv);
cgdev->dev.type = &ctcm_devtype;

return 0;
}