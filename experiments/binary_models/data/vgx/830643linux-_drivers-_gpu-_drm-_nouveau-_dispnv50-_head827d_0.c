static int
FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2->VAR5.VAR5.VAR6)->VAR7->VAR8.VAR4;
const int VAR9 = VAR2->VAR5.VAR10;
int VAR11;

if ((VAR11 = FUN3(VAR4, 4)))
return VAR11;

FUN4(VAR4, VAR12, FUN5(VAR9),
FUN6(VAR12, VAR13, VAR14, VAR15));

FUN4(VAR4, VAR12, FUN7(VAR9), 0x00000000);
return 0;
}