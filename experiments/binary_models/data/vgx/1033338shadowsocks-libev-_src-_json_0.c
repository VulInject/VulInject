static void * FUN1 (size_t VAR1, int VAR2, void * VAR3)
{
return VAR2 ? calloc (1, VAR1) : malloc (VAR1);
}