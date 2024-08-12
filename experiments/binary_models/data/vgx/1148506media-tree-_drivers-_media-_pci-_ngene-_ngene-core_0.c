int FUN1(struct VAR1 *VAR1, const struct VAR2 *VAR3)
{
struct VAR4 *VAR5;
int VAR6 = 0;

if (FUN2(VAR1) < 0)
return -VAR7;

VAR5 = FUN3(sizeof(struct VAR4));
if (VAR5 == NULL) {
VAR6 = -VAR8;
goto VAR9;
}

VAR5->VAR1 = VAR1;
VAR5->VAR10 = (struct VAR11 *)VAR3->VAR12;
FUN4(KERN_INFO VAR13 "", VAR5->VAR10->VAR14);

FUN5(VAR1, VAR5);


VAR6 = FUN6(VAR5);
if (VAR6 < 0)
goto VAR15;
VAR6 = FUN7(VAR5);
if (VAR6 < 0)
goto VAR15;

FUN8(VAR5);

VAR6 = FUN9(VAR5);
if (VAR6 < 0)
goto VAR15;


VAR5->VAR16 = -1;


VAR6 = FUN10(VAR5);
if (VAR6 < 0)
goto VAR17;

return 0;

VAR17:
FUN11(VAR5);
VAR15:
FUN12(VAR5);
VAR9:
FUN13(VAR1);
return VAR6;
}