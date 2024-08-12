static void FUN1(struct VAR1 *VAR1)
{
struct VAR2 *VAR3;
int VAR4;

if (!VAR1)
return;

VAR3 = VAR1->VAR5;
if (!VAR3)
return;

switch (VAR1->VAR6) {
case 0:
FUN2(VAR3, VAR1->VAR7);
break;
case -VAR8:
case -VAR9:
case -VAR10:
return;
case -VAR11:
default:
FUN3(VAR3->VAR12, "", VAR1->VAR6);
break;
}

VAR4 = FUN4(VAR1, VAR13);
if (VAR4 && VAR4 != -VAR14)
FUN5(VAR3->VAR12, "", VAR4);
}