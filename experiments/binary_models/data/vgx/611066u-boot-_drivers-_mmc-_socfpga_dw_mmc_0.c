static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = VAR2->VAR4;
u32 VAR5 = ((VAR4->VAR6 & 0x7) << VAR7) |
((VAR4->VAR8 & 0x7) << VAR9);


FUN2(FUN3() + VAR10,
VAR11);

FUN4("", VAR12,
VAR4->VAR8, VAR4->VAR6);

int VAR13;

VAR13 = FUN5(VAR14,
VAR5);
if (VAR13) {
FUN6("");
return VAR13;
}
FUN7(VAR5, FUN8() + VAR15);

FUN4("", VAR12,
FUN9(FUN8() + VAR15));


FUN10(FUN3() + VAR10,
VAR11);

return 0;
}