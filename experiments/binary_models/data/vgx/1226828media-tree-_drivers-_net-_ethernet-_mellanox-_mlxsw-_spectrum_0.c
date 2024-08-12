static int FUN1(struct VAR1 *VAR1)
{
enum mlxsw_reg_svfa_mt VAR2 = VAR3;
u16 VAR4, VAR5;
int VAR6;

FUN2(VAR4, VAR1->VAR7, VAR8) {
VAR6 = FUN3(VAR1, VAR2, true, VAR4,
VAR4);
if (VAR6) {
VAR5 = VAR4;
goto VAR9;
}
}

VAR6 = FUN4(VAR1, true);
if (VAR6) {
VAR5 = VAR8;
goto VAR9;
}

return 0;

VAR9:
FUN2(VAR4, VAR1->VAR7, VAR5)
FUN3(VAR1, VAR2, false, VAR4,
VAR4);
return VAR6;
}