static int FUN1(struct VAR1 *VAR2)
{
int VAR3;
struct VAR4 *VAR5;
struct VAR1 *VAR6 = VAR2->VAR7;

VAR5 = FUN2(VAR2->VAR8, VAR6 ? VAR6->VAR9 : VAR10);
if (!VAR5)
return -VAR11;
VAR2->VAR9 = VAR5;

VAR5 = FUN3("", VAR12, VAR2->VAR9, (VAR13 *)&VAR2->VAR14);
if (!VAR5) {
VAR3 = -VAR11;
goto VAR15;
}
VAR5 = FUN4("", VAR12, VAR2->VAR9, (VAR16 *)&VAR2->VAR17);
if (!VAR5) {
VAR3 = -VAR11;
goto VAR15;
}
VAR5 = FUN5("", VAR12, VAR2->VAR9, (VAR16 *)&VAR2->VAR18);
if (!VAR5) {
VAR3 = -VAR11;
goto VAR15;
}
return 0;

VAR15:
FUN6(VAR2->VAR9);
return VAR3;
}