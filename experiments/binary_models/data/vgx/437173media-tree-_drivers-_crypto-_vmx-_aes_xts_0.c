static int FUN1(struct VAR1 *VAR2, const VAR3 *VAR4,
unsigned int VAR5)
{
int VAR6;
struct VAR7 *VAR8 = FUN2(VAR2);

VAR6 = FUN3(VAR2, VAR4, VAR5);
if (VAR6)
return VAR6;

FUN4();
FUN5();
FUN6();
VAR6 = FUN7(VAR4 + VAR5/2, (VAR5/2) * 8, &VAR8->VAR9);
VAR6 += FUN7(VAR4, (VAR5/2) * 8, &VAR8->VAR10);
VAR6 += FUN8(VAR4, (VAR5/2) * 8, &VAR8->VAR11);
FUN9();
FUN10();
FUN11();

VAR6 += FUN12(VAR8->VAR12, VAR4, VAR5);
return VAR6;
}