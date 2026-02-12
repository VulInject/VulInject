static void r852_update_media_status(struct r852_device *dev)
{
uint8_t reg;
unsigned long flags;
int readonly;

spin_lock_irqsave(&dev->irqlock, flags);
if (!dev->card_detected) {
message("card removed");
spin_unlock_irqrestore(&dev->irqlock, flags);
return ;
}

readonly  = r852_read_reg(dev, R852_CARD_STA) & R852_CARD_STA_RO;
reg = r852_read_reg(dev, R852_DMA_CAP);
dev->sm = (reg & (R852_DMA1 | R852_DMA2)) && (reg & R852_SMBIT);

message("detected %s %s card in slot",
dev->sm ? "SmartMedia" : "xD",
readonly ? "readonly" : "writeable");

dev->readonly = readonly;
spin_unlock_irqrestore(&dev->irqlock, flags);
}