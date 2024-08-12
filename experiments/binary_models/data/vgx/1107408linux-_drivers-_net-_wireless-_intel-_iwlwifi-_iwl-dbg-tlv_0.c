static int FUN1(struct VAR1 *VAR2,
const struct VAR3 *VAR4)
{
const struct VAR5 *VAR6 = (const void *)VAR4->VAR7;
struct VAR5 *VAR8;
u32 VAR9 = FUN2(VAR6->VAR10);
u32 VAR11 = FUN2(VAR6->VAR12);
struct VAR3 *VAR13 = NULL;
int VAR14;

if (FUN2(VAR4->VAR15) < sizeof(*VAR6))
return -VAR16;

if (VAR9 <= VAR17 ||
VAR9 >= VAR18) {
FUN3(VAR2,
"",
VAR9);
return -VAR16;
}

FUN4(VAR2,
"",
VAR9, VAR11);
VAR2->VAR19.VAR20 = 0xFF;
if (!FUN2(VAR6->VAR21)) {
VAR13 = FUN5(VAR4, sizeof(*VAR4) + FUN2(VAR4->VAR15),
VAR22);
if (!VAR13)
return -VAR23;
VAR8 = (void *)VAR13->VAR7;
VAR8->VAR21 = FUN6(-1);
VAR4 = VAR13;
}

VAR14 = FUN7(VAR4, &VAR2->VAR19.VAR10[VAR9].VAR24);
FUN8(VAR13);

return VAR14;
}