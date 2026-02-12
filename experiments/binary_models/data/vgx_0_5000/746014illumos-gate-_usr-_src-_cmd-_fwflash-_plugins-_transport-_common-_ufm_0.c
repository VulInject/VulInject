int
fw_readfw(struct devicelist *flashdev, const char *filename)
{
nvlist_t **images, **slots;
uint_t nimages, nslots, caps;
uint64_t imgsize, offset;
void *buf;
int fd;
nvlist_t *nvl = flashdev->ident->encap_ident;

caps = (uintptr_t)flashdev->addresses[UFM_ADDR_CAP];
if ((caps & DDI_UFM_CAP_READIMG) == 0) {
logmsg(MSG_ERROR, "%s: device %s does not support reading "
"images\n", flashdev->drvname, flashdev->access_devname);
return (FWFLASH_FAILURE);
}

if (nvlist_lookup_nvlist_array(nvl, DDI_UFM_NV_IMAGES, &images,
&nimages) != 0) {
logmsg(MSG_ERROR, gettext("%s: %s missing UFM image data\n"),
flashdev->drvname, flashdev->access_devname);
return (FWFLASH_FAILURE);
}

if (nimages == 0) {
logmsg(MSG_ERROR, gettext("%s: %s has no UFM images\n"),
flashdev->drvname, flashdev->access_devname);
return (FWFLASH_FAILURE);
}

if (nvlist_lookup_nvlist_array(images[0], DDI_UFM_NV_IMAGE_SLOTS,
&slots, &nslots) != 0) {
logmsg(MSG_ERROR, gettext("%s: image zero of %s has no "
"slots\n"), flashdev->drvname, flashdev->access_devname);
return (FWFLASH_FAILURE);
}

if (nvlist_lookup_uint64(slots[0], DDI_UFM_NV_SLOT_IMGSIZE,
&imgsize) != 0) {
logmsg(MSG_ERROR, gettext("%s: device %s doesn't have an image "
"size\n"), flashdev->drvname, flashdev->access_devname);
return (FWFLASH_FAILURE);
}

logmsg(MSG_INFO, gettext("%s: Need to read %" PRIu64 " bytes\n"),
flashdev->drvname, imgsize);

if ((buf = malloc(UFM_READ_BUFLEN)) == NULL) {
logmsg(MSG_ERROR, gettext("%s: Failed to allocate data "
"buffer\n"), flashdev->drvname);
return (FWFLASH_FAILURE);
}

if ((fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0644)) < 0) {
logmsg(MSG_ERROR, gettext("%s: failed to open file %s: %s\n"),
flashdev->drvname, filename, strerror(errno));
free(buf);
return (FWFLASH_FAILURE);
}

offset = 0;
while (imgsize > 0) {
ufm_ioc_readimg_t rimg;
uint64_t toread = MIN(imgsize, UFM_READ_BUFLEN);
size_t woff;

bzero(&rimg, sizeof (rimg));
rimg.ufri_version = DDI_UFM_CURRENT_VERSION;
rimg.ufri_imageno = 0;
rimg.ufri_slotno = 0;
rimg.ufri_offset = offset;
rimg.ufri_len = toread;
rimg.ufri_buf = buf;
(void) strlcpy(rimg.ufri_devpath,
flashdev->addresses[UFM_ADDR_PATH],
sizeof (rimg.ufri_devpath));
logmsg(MSG_INFO, gettext("%s: want to read %" PRIu64 " bytes "
"at offset %" PRIu64 "\n"), flashdev->drvname,
rimg.ufri_len, rimg.ufri_offset);

if (ioctl(ufmfw_ufm_fd, UFM_IOC_READIMG, &rimg) != 0) {
logmsg(MSG_ERROR, gettext("%s: failed to read image: "
"%s\n"), flashdev->drvname, strerror(errno));
free(buf);
(void) close(fd);
return (FWFLASH_FAILURE);
}

logmsg(MSG_INFO, gettext("%s: read %" PRIu64 " bytes at offset "
"%" PRIu64 "\n"), flashdev->drvname, rimg.ufri_nread,
offset);
offset += rimg.ufri_nread;
imgsize -= rimg.ufri_nread;

woff = 0;
while (rimg.ufri_nread > 0) {
size_t towrite = MIN(rimg.ufri_nread, UFM_READ_BUFLEN);
ssize_t ret = write(fd, buf + woff, towrite);
if (ret == -1) {
logmsg(MSG_ERROR, gettext("%s: failed to write "
"to %s: %s\n"), flashdev->drvname, filename,
strerror(errno));
free(buf);
(void) close(fd);
return (FWFLASH_FAILURE);
}

rimg.ufri_nread -= ret;
woff += ret;
}
}

free(buf);
if (close(fd) != 0) {
logmsg(MSG_ERROR, gettext("%s: failed to finish writing to %s: "
"%s\n"), flashdev->drvname, filename, strerror(errno));
return (FWFLASH_FAILURE);
}
logmsg(MSG_INFO, gettext("%s: successfully wrote image to %s\n"),
flashdev->drvname, filename);
return (FWFLASH_SUCCESS);
}