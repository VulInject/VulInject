static int nfcmrvl_nci_uart_open(struct nci_uart *nu)
{
struct nfcmrvl_private *priv;
struct nfcmrvl_platform_data *pdata = NULL;
struct nfcmrvl_platform_data config;



if (nu->tty->dev->parent && nu->tty->dev->parent->of_node)
if (nfcmrvl_uart_parse_dt(nu->tty->dev->parent->of_node,
&config) == 0)
pdata = &config;

if (!pdata) {
pr_info("No platform data / DT -> fallback to module params\n");
config.hci_muxed = hci_muxed;
config.reset_n_io = reset_n_io;
config.flow_control = flow_control;
config.break_control = break_control;
pdata = &config;
}

priv = nfcmrvl_nci_register_dev(NFCMRVL_PHY_UART, nu, &uart_ops,
nu->tty->dev, pdata);
if (IS_ERR(priv))
return PTR_ERR(priv);

priv->support_fw_dnld = true;

nu->drv_data = priv;
nu->ndev = priv->ndev;

return 0;
}