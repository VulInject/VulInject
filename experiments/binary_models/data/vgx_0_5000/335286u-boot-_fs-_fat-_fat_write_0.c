static int flush_dirty_fat_buffer(fsdata *mydata)
{
int getsize = FATBUFBLOCKS;
__u32 fatlength = mydata->fatlength;
__u8 *bufptr = mydata->fatbuf;
__u32 startblock = mydata->fatbufnum * FATBUFBLOCKS;

debug("debug: evicting %d, dirty: %d\n", mydata->fatbufnum,
(int)mydata->fat_dirty);

if ((!mydata->fat_dirty) || (mydata->fatbufnum == -1))
return 0;


if (startblock + getsize > fatlength)
getsize = fatlength - startblock;

startblock += mydata->fat_sect;


if (disk_write(startblock, getsize, bufptr) < 0) {
debug("error: writing FAT blocks\n");
return -1;
}

if (mydata->fats == 2) {

startblock += mydata->fatlength;
if (disk_write(startblock, getsize, bufptr) < 0) {
debug("error: writing second FAT blocks\n");
return -1;
}
}
mydata->fat_dirty = 0;

return 0;
}