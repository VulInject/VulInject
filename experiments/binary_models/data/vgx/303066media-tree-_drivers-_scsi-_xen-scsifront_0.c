static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = VAR2->VAR4;
struct VAR5 *VAR6;
grant_ref_t VAR7;
int VAR8 = -VAR9;


VAR6 = (struct VAR5 *)FUN2(VAR10);
if (!VAR6) {
FUN3(VAR4, VAR8,
"");
return VAR8;
}
FUN4(VAR6);
FUN5(&VAR2->VAR11, VAR6, VAR12);

VAR8 = FUN6(VAR4, VAR6, 1, &VAR7);
if (VAR8 < 0) {
FUN7((unsigned long)VAR6);
FUN3(VAR4, VAR8,
"");
return VAR8;
}
VAR2->VAR13 = VAR7;

VAR8 = FUN8(VAR4, &VAR2->VAR14);
if (VAR8) {
FUN3(VAR4, VAR8, "");
goto VAR15;
}

VAR8 = FUN9(VAR2->VAR14);
if (VAR8 <= 0) {
FUN3(VAR4, VAR8, "");
goto VAR15;
}

VAR2->VAR16 = VAR8;

VAR8 = FUN10(VAR2->VAR16, NULL, VAR17,
VAR18, "", VAR2);
if (VAR8) {
FUN3(VAR4, VAR8, "");
goto VAR19;
}

return 0;


VAR19:
FUN11(VAR2->VAR16, VAR2);
VAR15:
FUN12(VAR2->VAR13, 0,
(unsigned long)VAR2->VAR11.VAR6);

return VAR8;
}