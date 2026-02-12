static int lookup_dotdot_ino(fsck_ino_t);


int
ckinode(struct dinode *dp, struct inodesc *idesc, enum cki_action action)
{
struct inodesc cleardesc;
mode_t	mode;

if (idesc->id_filesize == 0)
idesc->id_filesize = (offset_t)dp->di_size;


mode = dp->di_mode & IFMT;
if (mode == IFBLK || mode == IFCHR)
return (KEEPON);
if (mode == IFLNK && dp->di_size > MAXPATHLEN) {
pwarn("I=%d  Symlink longer than supported maximum\n",
idesc->id_number);
init_inodesc(&cleardesc);
cleardesc.id_type = ADDR;
cleardesc.id_number = idesc->id_number;
cleardesc.id_fix = DONTKNOW;
clri(&cleardesc, "BAD", CLRI_VERBOSE, CLRI_NOP_CORRUPT);
return (STOP);
}
return (ckinode_common(dp, idesc, action));
}