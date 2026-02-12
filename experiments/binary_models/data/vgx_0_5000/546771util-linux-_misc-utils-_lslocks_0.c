static ino_t get_dev_inode(char *str, dev_t *dev)
{
unsigned int maj = 0, min = 0;
ino_t inum = 0;

if (sscanf(str, "%x:%x:%ju", &maj, &min, &inum) != 3)
errx(EXIT_FAILURE, _("failed to parse '%s'"), str);

*dev = (dev_t) makedev(maj, min);
return inum;
}