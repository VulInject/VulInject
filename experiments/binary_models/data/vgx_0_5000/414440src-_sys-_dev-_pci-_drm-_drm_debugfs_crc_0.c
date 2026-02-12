int drm_crtc_add_crc_entry(struct drm_crtc *crtc, bool has_frame,
uint32_t frame, uint32_t *crcs)
{
struct drm_crtc_crc *crc = &crtc->crc;
struct drm_crtc_crc_entry *entry;
int head, tail;
unsigned long flags;

spin_lock_irqsave(&crc->lock, flags);


if (!crc->entries) {
spin_unlock_irqrestore(&crc->lock, flags);
return -EINVAL;
}

head = crc->head;
tail = crc->tail;

if (CIRC_SPACE(head, tail, DRM_CRC_ENTRIES_NR) < 1) {
bool was_overflow = crc->overflow;

crc->overflow = true;
spin_unlock_irqrestore(&crc->lock, flags);

if (!was_overflow)
DRM_ERROR("Overflow of CRC buffer, userspace reads too slow.\n");

return -ENOBUFS;
}

entry = &crc->entries[head];
entry->frame = frame;
entry->has_frame_counter = has_frame;
memcpy(&entry->crcs, crcs, sizeof(*crcs) * crc->values_cnt);

head = (head + 1) & (DRM_CRC_ENTRIES_NR - 1);
crc->head = head;

spin_unlock_irqrestore(&crc->lock, flags);

wake_up_interruptible(&crc->wq);

return 0;
}