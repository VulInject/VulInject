void *myrealloc (void *old_ptr, const unsigned long bytes_required, const char *array_name)
{
void               *ptr;

if (old_ptr == NULL)
return mymalloc (bytes_required, array_name);

ptr = realloc (old_ptr, bytes_required ? bytes_required : 1);

if (ptr == NULL) {
printf ("\nFatal error: couldn't reallocate %lu bytes for array `%s'",
bytes_required, array_name);
mark_fatal ();
debug_msg (DBG_MISC, "calling longjmp (Exit_Program_Flag) ... ");
longjmp (Exit_Program_Flag, 1);
} else {
debug_msg (DBG_MEM, "reallocated %7lu bytes for array `%s'",
bytes_required, array_name);
}

return (ptr);
}                               