int VAR1 = 0;





void
FUN1(void *VAR2, int VAR3)
{
VAR4 *VAR5 = (VAR4 *)VAR2;
ndmp_notify_data_halted_request VAR6;

if (VAR5 == NULL)
return;

if (VAR5->VAR7.VAR8 == VAR9 ||
VAR5->VAR7.VAR8 == VAR10)
return;

FUN2(VAR11, "",
VAR5->VAR7.VAR12);

if (VAR5->VAR7.VAR12 == VAR13) {

FUN3(VAR5, (VAR3 == 0 ? VAR14 : VAR15));


if (VAR5->VAR7.VAR16.VAR17 == VAR18 &&
VAR3 == 0) {
if (FUN4(VAR5, 0, 0) < 0)
VAR3 = VAR19;
}
}

VAR5->VAR7.VAR8 = VAR10;

switch (VAR3) {
case 0:
VAR5->VAR7.VAR20 = VAR21;
break;
case VAR22:
VAR5->VAR7.VAR20 = VAR23;
break;
case VAR19:
VAR5->VAR7.VAR20 = VAR24;
break;
default:
VAR5->VAR7.VAR20 = VAR25;
}

VAR6.VAR26 = VAR5->VAR7.VAR20;
VAR6.VAR27 = "";

FUN2(VAR11, "");

if (FUN5(VAR5->VAR28,
VAR29, VAR30, (void *)&VAR6, 0) < 0)
FUN2(VAR11, "");

if (VAR5->VAR7.VAR16.VAR17 == VAR31) {

if (VAR5->VAR32.VAR33 != VAR5->VAR7.VAR34) {
(void) close(VAR5->VAR7.VAR34);
} else {
FUN2(VAR11, "");
}

VAR5->VAR7.VAR34 = -1;
} else {
FUN6(VAR5, VAR35);
}
}