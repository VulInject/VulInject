static bool
FUN1(struct VAR1 *VAR2, int VAR3, const char *VAR4, u32 VAR5, VAR6 *VAR7)
{
int VAR8;
char VAR9[11];

if (VAR5 + 1 > sizeof(VAR9))

return false;

memcpy(VAR9, VAR4, VAR5);
VAR9[VAR5] = '';
VAR8 = FUN2(VAR9, 10, VAR7);
return VAR8 == 0;
}