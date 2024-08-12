static struct VAR1 *FUN1(struct VAR2 *VAR3)
{
struct VAR1 *VAR4 = xmalloc(sizeof(struct VAR1));
int VAR5;

FUN2(VAR4);


FUN3(VAR3);
for (VAR5 = 0; VAR5 < VAR3->VAR6; VAR5++) {
struct VAR7 *VAR8;
struct VAR9 *VAR10;
const struct VAR11 *VAR12 = VAR3->VAR13[VAR5];
if (!FUN4(VAR12))
continue;

VAR8 = FUN5(VAR4, VAR12->VAR14);
if (!VAR8) {
VAR8 = FUN6(VAR4, VAR12->VAR14);
VAR8->VAR15 = xcalloc(1, sizeof(struct VAR9));
}
VAR10 = VAR8->VAR15;
VAR10->VAR16[FUN4(VAR12)].VAR17 = VAR12->VAR18;
FUN7(&VAR10->VAR16[FUN4(VAR12)].VAR19, &VAR12->VAR19);
}

return VAR4;
}