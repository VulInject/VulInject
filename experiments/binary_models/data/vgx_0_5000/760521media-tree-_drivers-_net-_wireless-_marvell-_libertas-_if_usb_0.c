static int if_usb_host_to_card(struct lbs_private *priv, uint8_t type,
uint8_t *payload, uint16_t nb)
{
struct if_usb_card *cardp = priv->card;

lbs_deb_usbd(&cardp->udev->dev,"*** type = %u\n", type);
lbs_deb_usbd(&cardp->udev->dev,"size after = %d\n", nb);

if (type == MVMS_CMD) {
*(__le32 *)cardp->ep_out_buf = cpu_to_le32(CMD_TYPE_REQUEST);
priv->dnld_sent = DNLD_CMD_SENT;
} else {
*(__le32 *)cardp->ep_out_buf = cpu_to_le32(CMD_TYPE_DATA);
priv->dnld_sent = DNLD_DATA_SENT;
}

memcpy((cardp->ep_out_buf + MESSAGE_HEADER_LEN), payload, nb);

return usb_tx_block(cardp, cardp->ep_out_buf, nb + MESSAGE_HEADER_LEN);
}