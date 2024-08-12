static int FUN1(struct VAR1 *VAR1)
{
struct VAR2 *VAR3;
struct VAR4 *VAR5;
int VAR6;

VAR3 = FUN2(sizeof(*VAR3));
if (!VAR3)
return -VAR7;

VAR5 = FUN2(sizeof(*VAR5));
if (!VAR5) {
FUN3(VAR3);
return -VAR7;
}

VAR3->VAR8 = &VAR9;
VAR3->VAR10 = VAR11;
VAR3->VAR12 = VAR13;
VAR3->VAR14 = VAR5;

VAR6 = FUN4(VAR1, VAR3);
if (VAR6)
return VAR6;

VAR5->VAR15 = false;
VAR5->VAR16 = VAR17;
VAR3->VAR18 = VAR19;
VAR3->VAR20 = VAR21;
FUN5(VAR1);

return 0;
}