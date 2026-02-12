static struct drm_buf *savage_freelist_get(struct drm_device * dev)
{
drm_savage_private_t *dev_priv = dev->dev_private;
drm_savage_buf_priv_t *tail = dev_priv->tail.prev;
uint16_t event;
unsigned int wrap;
DRM_DEBUG("\n");

UPDATE_EVENT_COUNTER();
if (dev_priv->status_ptr)
event = dev_priv->status_ptr[1] & 0xffff;
else
event = SAVAGE_READ(SAVAGE_STATUS_WORD1) & 0xffff;
wrap = dev_priv->event_wrap;
if (event > dev_priv->event_counter)
wrap--;		

DRM_DEBUG("   tail=0x%04x %d\n", tail->age.event, tail->age.wrap);
DRM_DEBUG("   head=0x%04x %d\n", event, wrap);

if (tail->buf && (TEST_AGE(&tail->age, event, wrap) || event == 0)) {
drm_savage_buf_priv_t *next = tail->next;
drm_savage_buf_priv_t *prev = tail->prev;
prev->next = next;
next->prev = prev;
tail->next = tail->prev = NULL;
return tail->buf;
}

DRM_DEBUG("returning NULL, tail->buf=%p!\n", tail->buf);
return NULL;
}