void
DISK_printgeometry(const char *units)
{
const struct unit_type	*ut;
const int		 secsize = dl.d_secsize;
double			 size;

size = units_size(units, disk.dk_size, &ut);
printf("Disk: %s\tgeometry: %d/%d/%d [%.0f ", disk.dk_name,
disk.dk_cylinders, disk.dk_heads, disk.dk_sectors, size);
if (ut->ut_conversion == 0 && secsize != DEV_BSIZE)
printf("%d-byte ", secsize);
printf("%s]\n", ut->ut_lname);
}