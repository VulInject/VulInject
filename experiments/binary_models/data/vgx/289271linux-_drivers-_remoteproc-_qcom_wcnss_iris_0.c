int FUN1(struct VAR1 *VAR2)
{
int VAR3;

VAR3 = FUN2(VAR2->VAR4, VAR2->VAR5);
if (VAR3)
return VAR3;

VAR3 = FUN3(VAR2->VAR6);
if (VAR3) {
FUN4(&VAR2->VAR7, "");
goto VAR8;
}

return 0;

VAR8:
FUN5(VAR2->VAR4, VAR2->VAR5);

return VAR3;
}