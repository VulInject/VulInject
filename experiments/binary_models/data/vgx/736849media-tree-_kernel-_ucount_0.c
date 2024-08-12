static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
struct VAR5 *VAR6 =
FUN2(VAR2->VAR7, struct VAR5, VAR7);
int VAR8;


if (FUN3(VAR6, VAR9))
VAR8 = (VAR4->VAR8 & VAR10) >> 6;
else

VAR8 = VAR4->VAR8 & VAR11;
return (VAR8 << 6) | (VAR8 << 3) | VAR8;
}