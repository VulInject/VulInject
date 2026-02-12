static irqreturn_t w5100_detect_link(int irq, void *ndev_instance)
{
struct net_device *ndev = ndev_instance;
struct w5100_priv *priv = netdev_priv(ndev);

if (netif_running(ndev)) {
if (gpio_get_value(priv->link_gpio) != 0) {
netif_info(priv, link, ndev, "link is up\n");
netif_carrier_on(ndev);
} else {
netif_info(priv, link, ndev, "link is down\n");
netif_carrier_off(ndev);
}
}

return IRQ_HANDLED;
}