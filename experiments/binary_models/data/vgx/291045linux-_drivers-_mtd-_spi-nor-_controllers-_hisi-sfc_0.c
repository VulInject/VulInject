static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = VAR2->VAR4;
struct VAR5 *VAR6;
int VAR7;

FUN2(VAR4->VAR8, VAR6) {
VAR7 = FUN3(VAR6, VAR2);
if (VAR7) {
FUN4(VAR6);
goto VAR9;
}

if (VAR2->VAR10 == VAR11) {
FUN5(VAR4, "");
FUN4(VAR6);
break;
}
}

return 0;

VAR9:
FUN6(VAR2);
return VAR7;
}