static int r871x_suspend(struct usb_interface *pusb_intf, pm_message_t state)
{
struct net_device *pnetdev = usb_get_intfdata(pusb_intf);
struct _adapter *padapter = netdev_priv(pnetdev);

netdev_info(pnetdev, "Suspending...\n");
padapter->suspended = true;
rtl871x_intf_stop(padapter);
if (pnetdev->netdev_ops->ndo_stop)
pnetdev->netdev_ops->ndo_stop(pnetdev);
mdelay(10);
netif_device_detach(pnetdev);
return 0;
}