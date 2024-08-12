static char *FUN1(VAR1 *VAR2, u8 VAR3)
{
char VAR4[256];
u8 VAR5;

for (VAR5 = 0; VAR5 < VAR3 / 2; VAR5++)
VAR4[VAR5] = VAR2[VAR5 * 2];
return FUN2(VAR4, VAR6);
}