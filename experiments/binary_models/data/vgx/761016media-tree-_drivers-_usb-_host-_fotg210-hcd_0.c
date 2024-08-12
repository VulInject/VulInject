static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR3, int VAR4)
{
struct VAR5 *VAR6 = FUN2(VAR2);
struct VAR7 *VAR8;
unsigned long VAR9;
int VAR10;

FUN3(&VAR6->VAR11, VAR9);
VAR10 = FUN4(VAR2, VAR3, VAR4);
if (VAR10)
goto VAR12;

switch (FUN5(VAR3->VAR13)) {


default:
VAR8 = (struct VAR7 *) VAR3->VAR14;
if (!VAR8)
break;
switch (VAR8->VAR15) {
case VAR16:
case VAR17:
FUN6(VAR6, VAR8);
break;
case VAR18:
case VAR19:

break;
case VAR20:

FUN7(VAR6, VAR8);
break;
}
break;

case VAR21:
VAR8 = (struct VAR7 *) VAR3->VAR14;
if (!VAR8)
break;
switch (VAR8->VAR15) {
case VAR16:
case VAR17:
FUN8(VAR6, VAR8);
break;
case VAR20:
FUN7(VAR6, VAR8);
break;
default:
FUN9(VAR6, "",
VAR8, VAR8->VAR15);
goto VAR12;
}
break;

case VAR22:




break;
}
VAR12:
FUN10(&VAR6->VAR11, VAR9);
return VAR10;
}