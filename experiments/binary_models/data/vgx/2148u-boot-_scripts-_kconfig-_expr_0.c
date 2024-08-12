static void FUN1(enum expr_type VAR1, struct VAR2 **VAR3, struct VAR2 **VAR4)
{


if (VAR5->VAR1 == VAR1) {
FUN1(VAR1, &VAR5->VAR6.VAR2, &VAR7);
FUN1(VAR1, &VAR5->VAR8.VAR2, &VAR7);
return;
}
if (VAR7->VAR1 == VAR1) {
FUN1(VAR1, &VAR5, &VAR7->VAR6.VAR2);
FUN1(VAR1, &VAR5, &VAR7->VAR8.VAR2);
return;
}



if (VAR5->VAR1 == VAR9 && VAR7->VAR1 == VAR9 &&
VAR5->VAR6.VAR10 == VAR7->VAR6.VAR10 &&
(VAR5->VAR6.VAR10 == &VAR11 || VAR5->VAR6.VAR10 == &VAR12))
return;
if (!FUN2(VAR5, VAR7))
return;



VAR13++;
FUN3(VAR5); FUN3(VAR7);
switch (VAR1) {
case VAR14:
VAR5 = FUN4(&VAR12);
VAR7 = FUN4(&VAR12);
break;
case VAR15:
VAR5 = FUN4(&VAR11);
VAR7 = FUN4(&VAR11);
break;
default:
;
}
}