static void FUN1(struct VAR1 *VAR1)
{
VAR2 *VAR3 = VAR1->VAR4;
struct VAR5 *VAR6;
int VAR7 = VAR1->VAR7;

if (!VAR3)
return;

VAR6 = VAR3->VAR6;

if (!FUN2(VAR6) || !FUN3(VAR6))
return;

switch (VAR7) {
case -VAR8:

FUN4(VAR6);
FUN5(VAR3, VAR9, VAR6, "");
return;
case -VAR10:
case -VAR11:
case -VAR12:
FUN6(VAR3, VAR13, VAR6, "", VAR7);
return;
default:
FUN7(VAR3, VAR9, VAR6, "", VAR7);

case 0:
break;
}

FUN8(VAR6); 
FUN9(VAR6);
}