static void FUN1(struct VAR1 *VAR2, const char *VAR3,
unsigned int VAR4)
{
char VAR5[VAR6];
unsigned int VAR7, VAR8 = 0;
char VAR9;

for (VAR7 = 0; VAR7 < VAR4; VAR7++) {
VAR9 = *VAR3++;

if (VAR9 == '')
VAR5[VAR8++] = '';

VAR5[VAR8++] = VAR9;
if (VAR8 >= (VAR6 - 1)) {
if (FUN2(VAR10, VAR5, VAR8))
return;
VAR8 = 0;
}
}

if (VAR8)
FUN2(VAR10, VAR5, VAR8);
}