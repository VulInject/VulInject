int FUN1(struct VAR1 *VAR2, void *VAR3)
{
struct VAR4 *VAR5 = FUN2((struct VAR6 *)VAR2->private);
struct VAR7 *VAR8 = &VAR5->VAR9;
int VAR10;

if (VAR3 != VAR11)
return 0;

FUN3(VAR2,
"",
VAR8->VAR12, VAR8->VAR13,
VAR8->VAR14,
FUN4(VAR8->VAR15, 1000));
FUN5(VAR2, "");
for (VAR10 = 0; VAR10 < VAR16; VAR10++)
FUN3(VAR2, ""%VAR17\"", VAR18[VAR10],
VAR8->VAR19[VAR10]);

return 0;
}