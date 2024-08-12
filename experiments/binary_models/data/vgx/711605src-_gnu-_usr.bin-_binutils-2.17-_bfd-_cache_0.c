FUN1 (struct VAR1 *VAR2, const void *VAR3, file_ptr VAR4)
{
file_ptr VAR5;
VAR6 *VAR7 = FUN2 (VAR2, 0);
if (VAR7 == NULL)
return 0;
VAR5 = fwrite (VAR3, 1, VAR4, VAR7);
if (VAR5 < VAR4 && FUN3 (VAR7))
{
FUN4 (VAR8);
return -1;
}
return VAR5;
}