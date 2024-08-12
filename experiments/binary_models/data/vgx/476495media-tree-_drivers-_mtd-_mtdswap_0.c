static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
int VAR5;
loff_t VAR6;

VAR2->VAR7--;
VAR4->VAR8 |= VAR9;
FUN2(VAR2, VAR4);
VAR4->VAR10 = NULL;


if (!FUN3(VAR2->VAR11))
return 1;

VAR6 = FUN4(VAR2, VAR4);
FUN5(VAR2->VAR12, "", VAR6);
VAR5 = FUN6(VAR2->VAR11, VAR6);

if (VAR5) {
FUN5(VAR2->VAR12, ""
"", VAR6, VAR5);
return VAR5;
}

return 1;

}