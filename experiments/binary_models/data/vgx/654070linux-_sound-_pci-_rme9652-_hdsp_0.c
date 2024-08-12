static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
struct VAR5 *VAR5 = VAR4->private;
struct VAR6 *VAR7 = FUN2(VAR2, VAR8);
if (VAR5->VAR9 == VAR10) {
unsigned int VAR11[3];
VAR11[0] = VAR5->VAR12;
VAR11[1] = VAR5->VAR13;
VAR11[2] = VAR5->VAR14;
return FUN3(VAR7, 3, VAR11, 0);
} else {
unsigned int VAR11[2];
VAR11[0] = VAR5->VAR13;
VAR11[1] = VAR5->VAR14;
return FUN3(VAR7, 2, VAR11, 0);
}
}