static unsigned int FUN1(struct VAR1 *VAR2)
{
unsigned int VAR3 = VAR4;
unsigned int VAR5;
struct VAR6 *VAR7 = VAR2->VAR8;

if (VAR7) {
VAR5 = VAR7->VAR9 - VAR7->VAR10;
VAR3 += VAR5 + FUN2(VAR5, FUN3(VAR2));
VAR5 = VAR7->VAR11 - VAR7->VAR12;
VAR3 += VAR5 + FUN2(VAR5, FUN4(VAR2));
}
return VAR3;
}