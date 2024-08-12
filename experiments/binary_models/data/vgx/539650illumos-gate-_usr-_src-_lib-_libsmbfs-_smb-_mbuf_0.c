int
FUN1(VAR1 *VAR2, const void *VAR3, int VAR4, int VAR5)
{
struct VAR6 *VAR7;
const char *VAR8;
char  *VAR9;
size_t VAR10;
int VAR11;

if (VAR4 == 0)
return (0);

VAR8 = VAR3;
VAR7 = VAR2->VAR12;
if ((VAR11 = FUN2(VAR7, VAR4, &VAR7)) != 0)
return (VAR11);
while (VAR4 > 0) {
VAR10 = FUN3(VAR7);
if (VAR10 == 0) {
VAR7 = VAR7->VAR13;
continue;
}
if (VAR10 > VAR4)
VAR10 = VAR4;
VAR9 = FUN4(VAR7, char *) + VAR7->VAR14;
if (VAR8) {
bcopy(VAR8, VAR9, VAR10);
VAR8 += VAR10;
} else
FUN5(VAR9, VAR10);
VAR4 -= VAR10;
VAR7->VAR14 += VAR10;
VAR2->VAR15 += VAR10;
}
VAR2->VAR16 = FUN4(VAR7, char *) + VAR7->VAR14;
VAR2->VAR12 = VAR7;
return (0);
}