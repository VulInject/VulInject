int
FUN1(
struct VAR1		*VAR2,	
struct VAR3	*VAR4)	
{
struct VAR1		*VAR5;
int						VAR6 = 0;

for (VAR5 = VAR2; VAR5; VAR5 = VAR5->VAR7) {
switch (VAR5->VAR8) {
case VAR9:
VAR6 |= FUN2(VAR5, &VAR4->VAR10);
FUN3(VAR4, VAR11);
break;

case VAR12:
VAR6 |= FUN4(VAR5, &VAR4->VAR13);
FUN3(VAR4, VAR14);
break;

case VAR15:
VAR6 |= FUN5(VAR5, &VAR4->VAR16);
FUN3(VAR4, VAR17);
break;

case VAR18:
VAR6 |= FUN6(VAR5, &VAR4->VAR19);
FUN3(VAR4, VAR20);
break;

default:
FUN7("", VAR21, VAR5->VAR8);
VAR6 |= -1;
break;
}
}
return VAR6;
}