void
FUN1(void *VAR1, processorid_t VAR2,
struct VAR3 *VAR4)
{
VAR5 *VAR6;
int VAR7;

VAR6 = (VAR5 *)VAR1;


(void) FUN2(VAR8, VAR6,
"", "");


(void) FUN3(VAR8, VAR6,
"", VAR2);


if (VAR9 > 0) {
long long VAR10;

(void) FUN3(VAR8, VAR6,
"", VAR9);
if ((VAR10 = VAR9 * 1000000LL) <= VAR11)
(void) FUN3(VAR8, VAR6,
"", (int)VAR10);
}

FUN4(FUN5(VAR12, VAR13));


(void) FUN2(VAR8, VAR6,
"", VAR4->VAR14);

if (VAR4->VAR15 == 0) {
return;
}


(void) FUN3(VAR8, VAR6,
"", FUN6(VAR4));
(void) FUN3(VAR8, VAR6,
"", FUN7(VAR4));
(void) FUN3(VAR8, VAR6,
"", FUN8(VAR4));


switch (VAR4->VAR16) {
case VAR17:
VAR7 = 1;
break;
default:
VAR7 = 0;
break;
}
if (VAR7)
(void) FUN3(VAR8, VAR6,
"", FUN9(VAR4));


switch (VAR4->VAR16) {
case VAR17:
case VAR18:
VAR7 = VAR4->VAR19 >= 0xf;
break;
case VAR20:
VAR7 = 1;
break;
default:
VAR7 = 0;
break;
}
if (VAR7)
(void) FUN3(VAR8, VAR6,
"", FUN10(VAR4));


switch (VAR4->VAR16) {
case VAR17:
VAR7 = FUN11(VAR4);
break;
case VAR18:
VAR7 = FUN6(VAR4) == 0xf;
break;
case VAR20:
VAR7 = 1;
break;
default:
VAR7 = 0;
break;
}
if (VAR7)
(void) FUN3(VAR8, VAR6,
"", FUN12(VAR4));


switch (VAR4->VAR16) {
case VAR18:
case VAR20:

VAR7 = VAR4->VAR21 >= 0x80000001;
break;
default:
VAR7 = 0;
break;
}
if (VAR7)
(void) FUN3(VAR8, VAR6,
"", FUN13((VAR4)->VAR22[1].VAR23, 11, 8));


switch (VAR4->VAR16) {
case VAR17:

VAR7 = VAR4->VAR19 > 6 ||
(VAR4->VAR19 == 6 && VAR4->VAR24 >= 8);
break;
case VAR18:
VAR7 = VAR4->VAR19 >= 0xf;
break;
case VAR20:
VAR7 = 1;
break;
default:
VAR7 = 0;
break;
}
if (VAR7 && VAR4->VAR25 != 0) {
(void) FUN3(VAR8, VAR6,
"", VAR4->VAR25);
}


switch (VAR4->VAR16) {

case VAR17:
VAR7 = FUN14(VAR4) || VAR4->VAR19 >= 0xf;
break;
case VAR18:
VAR7 = VAR4->VAR19 >= 0xf;
break;
case VAR20:
VAR7 = 1;
break;
default:
VAR7 = 0;
break;
}
if (VAR7) {
(void) FUN3(VAR8, VAR6,
"", FUN15(VAR4));
(void) FUN3(VAR8, VAR6,
"", VAR4->VAR26);
if (VAR4->VAR27 >= 0) {
(void) FUN3(VAR8, VAR6,
"", VAR4->VAR27);
(void) FUN3(VAR8, VAR6,
"", VAR4->VAR28);
}
}


(void) FUN3(VAR8, VAR6,
"", FUN16(VAR4));



switch (VAR4->VAR16) {
case VAR17:
VAR7 = FUN14(VAR4) || VAR4->VAR19 >= 0xf;
break;
case VAR18:
VAR7 = VAR4->VAR19 >= 0xf;
break;
case VAR20:
VAR7 = 1;
break;
default:
VAR7 = 0;
break;
}
if (VAR7)
(void) FUN3(VAR8, VAR6,
"", FUN17(VAR4));


switch (VAR4->VAR16) {
case VAR17:
case VAR18:
case VAR20:
case VAR29:
case VAR30:
case VAR31:
VAR7 = VAR4->VAR21 >= 0x80000001;
break;
default:
VAR7 = 0;
break;
}
if (VAR7) {
(void) FUN3(VAR8, VAR6,
"", FUN18(VAR4));
(void) FUN3(VAR8, VAR6,
"", FUN19(VAR4));
}


(void) FUN2(VAR8, VAR6,
"", VAR4->VAR32);


switch (FUN20(VAR4)) {
case VAR17:
FUN21(VAR4, VAR6, VAR33);
break;
case VAR29:
FUN22(VAR4, VAR6, VAR33);
break;
case VAR18:
FUN23(VAR4, VAR6);
break;
default:
break;
}
}