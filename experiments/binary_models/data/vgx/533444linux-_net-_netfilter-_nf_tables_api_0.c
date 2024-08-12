static struct VAR1 *FUN1(struct VAR2 *VAR2,
struct VAR3 *VAR4,
const struct VAR5 *VAR6, u8 VAR7)
{
char VAR8[VAR9 + 1];
struct VAR10 *VAR11, *VAR12;
struct VAR1 *VAR13;

if (VAR6 == NULL)
return FUN2(-VAR14);

FUN3(VAR8, VAR6, sizeof(VAR8));

FUN4(!FUN5() &&
!FUN6(VAR2));

VAR13 = FUN2(-VAR15);
FUN7();
VAR12 = FUN8(&VAR4->VAR16, VAR8, VAR17);
if (!VAR12)
goto VAR18;

FUN9(VAR13, VAR11, VAR12, VAR19) {
if (FUN10(VAR13, VAR7))
goto VAR18;
}
VAR13 = FUN2(-VAR15);
VAR18:
FUN11();
return VAR13;
}