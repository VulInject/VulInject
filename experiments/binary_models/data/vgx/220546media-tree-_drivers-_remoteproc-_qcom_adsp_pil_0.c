static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4;
struct resource VAR5;
int VAR6;

VAR4 = FUN2(VAR2->VAR7->VAR8, "", 0);
if (!VAR4) {
FUN3(VAR2->VAR7, "");
return -VAR9;
}

VAR6 = FUN4(VAR4, 0, &VAR5);
if (VAR6)
return VAR6;

VAR2->VAR10 = VAR2->VAR11 = VAR5.VAR12;
VAR2->VAR13 = FUN5(&VAR5);
VAR2->VAR14 = FUN6(VAR2->VAR7, VAR2->VAR10, VAR2->VAR13);
if (!VAR2->VAR14) {
FUN3(VAR2->VAR7, "",
&VAR5.VAR12, VAR2->VAR13);
return -VAR15;
}

return 0;
}