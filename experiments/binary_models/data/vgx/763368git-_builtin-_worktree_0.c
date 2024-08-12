static int FUN1(const void *VAR1, const void *VAR2)
{
const struct VAR3 *VAR4 = VAR1;
const struct VAR3 *VAR5 = VAR2;
int VAR6;

if ((VAR6 = FUN2(VAR4->VAR7, VAR5->VAR7)))
return VAR6;

if (!VAR4->VAR8)
return -1;
if (!VAR5->VAR8)
return 1;

return strcmp(VAR4->VAR8, VAR5->VAR8);
}