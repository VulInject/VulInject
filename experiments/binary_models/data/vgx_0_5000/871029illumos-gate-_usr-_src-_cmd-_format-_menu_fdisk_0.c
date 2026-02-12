int
good_fdisk(void)
{
char		buf[MAXPATHLEN];
struct stat	statbuf;

(void) get_pname(&buf[0]);
if (stat(buf, &statbuf) == -1 ||
!S_ISCHR(statbuf.st_mode) ||
cur_label == L_TYPE_EFI) {

return (1);
}

if (lel(cur_disk->fdisk_part.numsect) > 0) {
return (1);
} else {

if (strcmp(cur_disk->disk_dkinfo.dki_cname, "lofi") == 0) {
return (1);
}
err_print("WARNING - ");
err_print("This disk may be in use by an application "
"that has\n\t  modified the fdisk table. Ensure "
"that this disk is\n\t  not currently in use "
"before proceeding to use fdisk.\n");
return (0);
}
}