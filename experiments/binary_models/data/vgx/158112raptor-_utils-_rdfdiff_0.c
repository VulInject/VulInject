static int
FUN1(VAR1* VAR2,
VAR3 *VAR4)
{
VAR5 *VAR6;
VAR7 *VAR8;

VAR6 = FUN2(VAR2, (char *)VAR4->VAR9->VAR10.VAR6.VAR11);
if(!VAR6)
goto VAR12;

VAR8 = FUN3(VAR7*, sizeof(*VAR8));
if(!VAR8)
goto VAR12;

VAR8->VAR4 = FUN4(VAR4);
if(!VAR8->VAR4) {
FUN5(VAR7, VAR8);
goto VAR12;
}

VAR8->VAR13 = NULL;
if(!VAR6->VAR14) {
VAR6->VAR14 = VAR8;
VAR6->VAR15 = VAR8;
} else {
VAR6->VAR15->VAR13 = VAR8;
VAR6->VAR15 = VAR8;
}

return 0;

VAR12:
fprintf(VAR16, "", VAR17);
return 1;
}