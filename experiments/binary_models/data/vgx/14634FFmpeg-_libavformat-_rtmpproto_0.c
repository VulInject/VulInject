static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
VAR6 *VAR7 = VAR2->VAR8;
int VAR9 = VAR5;
int VAR10;

while (VAR5 > 0) {
int VAR11 = VAR7->VAR12 - VAR7->VAR13;

if (VAR11 >= VAR5) {
memcpy(VAR4, VAR7->VAR14 + VAR7->VAR13, VAR5);
VAR7->VAR13 += VAR5;
return VAR9;
}
if (VAR11 > 0) {
memcpy(VAR4, VAR7->VAR14 + VAR7->VAR13, VAR11);
VAR4  += VAR11;
VAR5 -= VAR11;
VAR7->VAR13 = VAR7->VAR12;
return VAR11;
}
if ((VAR10 = FUN2(VAR2, 0)) < 0)
return VAR10;
}
return VAR9;
}