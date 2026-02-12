char *
di_dim_path_dev(di_dim_t dim, char *drv_name, int instance, char *minor_name)
{
idim_t	idim = (idim_t)dim;
char	*devices;
char	*dev = NULL;


if (minor_name == NULL)
return (NULL);


devices = di_dim_path_devices(dim, drv_name, instance, minor_name);
if (devices == NULL)
return (NULL);


(void) di_devlink_walk(idim->i_devlink_hdl, NULL,
devices, DI_PRIMARY_LINK, (void *)&dev, di_dim_path_dev_callback);
free(devices);
return (dev);
}