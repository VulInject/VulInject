static int FUN1(struct VAR1 *VAR2,
unsigned char *VAR3, unsigned int VAR4,
struct VAR5 *VAR6)
{
int VAR7;
int VAR8 = FUN2(int, VAR4, VAR9);


if (VAR6 && !FUN3(VAR6)) {
VAR7 = FUN4(VAR2, VAR6, 2);
if (VAR7)
return 0;
}


VAR7 = FUN5(VAR2, VAR2->VAR10, VAR11,
VAR3, VAR8);
if (VAR7)
return VAR7;


VAR7 = FUN4(VAR2, NULL, 3);
if (VAR7)
VAR8 = VAR7;

return VAR8;
}