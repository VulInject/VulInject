void FUN1(struct VAR1 *VAR2,
const struct VAR3 *VAR4)
{
struct VAR5 *VAR6 = FUN2(VAR2->VAR7.VAR8);
const struct VAR9 *VAR10;
enum phy VAR11 = FUN3(VAR6, VAR2->VAR12);
int VAR13, VAR14;

VAR10 = VAR2->FUN4(VAR2, VAR4, &VAR13);
if (FUN5(&VAR6->VAR15, !VAR10))
return;

for (VAR14 = 0; VAR14 < 4; VAR14++) {
int VAR16 = FUN6(VAR2, VAR4, VAR14);
u32 VAR17 = 0;

VAR17 |= FUN7(VAR18, VAR10->VAR19[VAR16].VAR20.VAR21);
VAR17 |= FUN7(VAR22, VAR10->VAR19[VAR16].VAR20.VAR23);
VAR17 |= FUN7(VAR24, VAR10->VAR19[VAR16].VAR20.VAR25);

FUN8(VAR6, FUN9(VAR14, VAR11), VAR17);
}
}