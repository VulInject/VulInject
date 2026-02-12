static ssize_t image_data_write(struct file *filp, struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buffer, loff_t pos, size_t count)
{
int rc;

mutex_lock(&image_data_mutex);


if (pos == 0) {

if (image_data.data)
free_image_buf();


if (update_flash_data.status == FLASH_IMG_READY)
opal_flash_update(FLASH_UPDATE_CANCEL);


rc = alloc_image_buf(buffer, count);
if (rc)
goto out;
}

if (image_data.status != IMAGE_LOADING) {
rc = -ENOMEM;
goto out;
}

if ((pos + count) > image_data.size) {
rc = -EINVAL;
goto out;
}

memcpy(image_data.data + pos, (void *)buffer, count);
rc = count;


if ((pos + count) == image_data.size) {
pr_debug("FLASH: Candidate image loaded....\n");
image_data.status = IMAGE_READY;
}

out:
mutex_unlock(&image_data_mutex);
return rc;
}


static const struct bin_attribute image_data_attr = {
.attr = {.name = "image", .mode = 0200},
.size = MAX_IMAGE_SIZE,	
.write = image_data_write,
};