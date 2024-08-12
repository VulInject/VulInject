static int FUN1(struct VAR1 *VAR2, size_t VAR3)
{
void *VAR4;
size_t VAR5;

if (VAR3 < VAR2->VAR6)
return 0;

if (VAR2->VAR6 >= VAR7 / 2)
VAR5 = VAR3;
else
{
VAR5 = VAR2->VAR6 << 1;
if (VAR5 < VAR3)
VAR5 = VAR3;
}
if (VAR5 > (~((VAR8)0)) / sizeof(void *))
return -1;
if (!(VAR4 = realloc(VAR2->VAR9, VAR5 * sizeof(void *))))
return -1;
VAR2->VAR9 = (void **)VAR4;
VAR2->VAR6 = VAR5;
return 0;
}