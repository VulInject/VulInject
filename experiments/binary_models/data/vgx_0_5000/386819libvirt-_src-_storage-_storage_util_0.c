static int
virStorageBackendDetectBlockVolFormatFD(virStorageSource *target,
int fd,
unsigned int readflags)
{
size_t i;
off_t start;
unsigned char buffer[1024];
ssize_t bytes;


target->format = VIR_STORAGE_POOL_DISK_UNKNOWN;

start = lseek(fd, 0, SEEK_SET);
if (start < 0) {
virReportSystemError(errno,
_("cannot seek to beginning of file '%s'"),
target->path);
return -1;
}
bytes = saferead(fd, buffer, sizeof(buffer));
if (bytes < 0) {
if (readflags & VIR_STORAGE_VOL_READ_NOERROR) {
VIR_WARN("ignoring failed saferead of file '%s'",
target->path);
return -2;
} else {
virReportSystemError(errno,
_("cannot read beginning of file '%s'"),
target->path);
return -1;
}
}

for (i = 0; disk_types[i].part_table_type != -1; i++) {
if (disk_types[i].offset + disk_types[i].length > bytes)
continue;
if (memcmp(buffer+disk_types[i].offset, &disk_types[i].magic,
disk_types[i].length) == 0) {
target->format = disk_types[i].part_table_type;
break;
}
}

if (target->format == VIR_STORAGE_POOL_DISK_UNKNOWN)
VIR_DEBUG("cannot determine the target format for '%s'",
target->path);

return 0;
}