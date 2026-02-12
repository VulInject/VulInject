open_module ()
{
char *mfile;
DBM *retval;

if (current_parsed_root == NULL)
{
error (0, 0, "must set the CVSROOT environment variable");
error (1, 0, "or specify the '-d' global option");
}
mfile = xmalloc (strlen (current_parsed_root->directory)
+ sizeof (CVSROOTADM)
+ sizeof (CVSROOTADM_MODULES) + 3);
(void) sprintf (mfile, "%s/%s/%s", current_parsed_root->directory,
CVSROOTADM, CVSROOTADM_MODULES);
retval = dbm_open (mfile, O_RDONLY, 0666);
free (mfile);
return retval;
}