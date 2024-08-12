static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4,
const VAR5 *VAR6, unsigned int VAR7)
{
struct VAR8 *VAR9 = FUN2(VAR4);
unsigned int VAR10;

for (VAR10 = 0; VAR10 < VAR9->VAR11; VAR10++) {
const VAR12 *VAR13 = VAR9->VAR14 + VAR10;
void *VAR15 = FUN3(VAR13);
u32 VAR16 = FUN4(VAR13);

VAR7 = (VAR7 + 1) % VAR17;

if (FUN5(FUN6(VAR2, VAR6, VAR16, VAR15, VAR7, true)))
goto VAR18;
}

return 0;

VAR18:
FUN7(VAR2, VAR2->VAR19 + 1, VAR10);
return -VAR20;
}