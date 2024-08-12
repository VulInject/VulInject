int
FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = (void *)VAR2;
struct VAR5 *VAR6;
const char *VAR7 = NULL;
struct bootrom_id VAR8;
usbd_status VAR9;
VAR10 *VAR11;
size_t VAR12;
int VAR13;

if (VAR4->VAR14)
return 0;


memset(&VAR8, 0, sizeof(VAR8));
FUN2(VAR4, VAR15, &VAR8, sizeof(VAR8));
VAR4->VAR16 = FUN3(VAR8.VAR17);
VAR4->VAR18 = FUN3(VAR8.VAR19);


VAR9 = FUN4(VAR4->VAR20, VAR4->VAR21, VAR22,
&VAR4->VAR23);
if (VAR9 != 0) {
FUN5("",
FUN6(VAR4), FUN7(VAR9));
return 1;
}
VAR9 = FUN4(VAR4->VAR20, VAR4->VAR24, VAR22,
&VAR4->VAR25);
if (VAR9 != 0) {
FUN5("",
FUN6(VAR4), FUN7(VAR9));
goto VAR26;
}


if (VAR4->VAR16 != VAR27) {
switch (VAR4->VAR16)
{
case VAR28:
VAR7 = "";
break;
case VAR29:
case VAR30:
case VAR31:
if (VAR4->VAR18 == 3)
VAR7 = "";
break;
case VAR32:
VAR7 = "";
break;
case VAR33:
case VAR34:
VAR7 = "";
break;
default:
break;
}

if (VAR7 == NULL) {
FUN5("", FUN6(VAR4));
goto VAR26;
}

if (FUN8(VAR7, &VAR11, &VAR12) != 0) {
FUN5("",
FUN6(VAR4), VAR7);
goto VAR26;
}

if (FUN9(VAR4, VAR11, VAR12) != 0) {
FUN5("",
FUN6(VAR4));
free(VAR11, VAR35, VAR12);
goto VAR26;
}

free(VAR11, VAR35, VAR12);

for (VAR13 = 0; VAR13 < 10; VAR13++) {
FUN10(100 * 1000);
memset(&VAR8, 0, sizeof(VAR8));
FUN2(VAR4, VAR15, &VAR8, sizeof(VAR8));
if (FUN3(VAR8.VAR17) == VAR27)
break;
}

if (FUN3(VAR8.VAR17) != VAR27) {
FUN5("",
FUN6(VAR4));
goto VAR26;
}

VAR4->VAR16 = FUN3(VAR8.VAR17);
VAR4->VAR18 = FUN3(VAR8.VAR19);
}

FUN2(VAR4, VAR36, &VAR8, sizeof(VAR8));

if (FUN11(VAR4) || FUN12(VAR4)) {
FUN5("", FUN6(VAR4));
goto VAR26;
}

for (VAR13 = 0; VAR13 < VAR37; VAR13++) {
VAR6 = &VAR4->VAR38[VAR13];

FUN13(VAR6->VAR39, VAR4->VAR23, VAR6, VAR6->VAR40,
VAR41, VAR42 | VAR43, VAR44,
VAR45);
VAR9 = FUN14(VAR6->VAR39);
if (VAR9 != 0 && VAR9 != VAR46)
FUN5("",
FUN6(VAR4), FUN7(VAR9));
}

VAR4->VAR14 = 1;
return 0;

VAR26:
if (VAR4->VAR23) {
FUN15(VAR4->VAR23);
VAR4->VAR23 = NULL;
}
if (VAR4->VAR25) {
FUN15(VAR4->VAR25);
VAR4->VAR25 = NULL;
}
FUN16(VAR4);
FUN17(VAR4);
return 1;
}