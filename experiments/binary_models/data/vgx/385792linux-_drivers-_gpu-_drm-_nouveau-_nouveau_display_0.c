static bool
FUN1(struct VAR1 *VAR2, int *VAR3, int *VAR4,
VAR5 *VAR6, VAR5 *VAR7)
{
struct VAR8 *VAR9 = &VAR2->VAR10->VAR9[FUN2(VAR2)];
struct VAR11 *VAR12 = &FUN3(VAR2)->VAR12;
struct nvif_head_scanoutpos_v0 VAR13;
int VAR14 = 20;
bool VAR15 = false;

VAR13.VAR16 = 0;

do {
VAR15 = FUN4(&VAR12->VAR17, VAR18, &VAR13, sizeof(VAR13));
if (VAR15 != 0)
return false;

if (VAR13.VAR19) {
VAR15 = true;
break;
}

if (VAR14) FUN5(VAR9->VAR20);
} while (VAR14--);

*VAR4 = VAR13.VAR21;
*VAR3 = FUN6(VAR13.VAR22, VAR13.VAR23, VAR13.VAR24, VAR13.VAR19);
if (VAR6) *VAR6 = FUN7(VAR13.VAR25[0]);
if (VAR7) *VAR7 = FUN7(VAR13.VAR25[1]);

return VAR15;
}