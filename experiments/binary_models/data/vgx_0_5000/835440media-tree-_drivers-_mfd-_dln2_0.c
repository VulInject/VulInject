static bool dln2_transfer_complete(struct dln2_dev *dln2, struct urb *urb,
u16 handle, u16 rx_slot)
{
struct device *dev = &dln2->interface->dev;
struct dln2_mod_rx_slots *rxs = &dln2->mod_rx_slots[handle];
struct dln2_rx_context *rxc;
bool valid_slot = false;

if (rx_slot >= DLN2_MAX_RX_SLOTS)
goto out;

rxc = &rxs->slots[rx_slot];


spin_lock(&rxs->lock);
if (rxc->in_use && !rxc->urb) {
rxc->urb = urb;
complete(&rxc->done);
valid_slot = true;
}
spin_unlock(&rxs->lock);

out:
if (!valid_slot)
dev_warn(dev, "bad/late response %d/%d\n", handle, rx_slot);

return valid_slot;
}