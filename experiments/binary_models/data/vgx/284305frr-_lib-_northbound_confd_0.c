static enum VAR1
FUN1(VAR2 *VAR3, enum cdb_iter_op VAR4,
VAR5 *VAR6, VAR5 *VAR7, void *VAR8)
{
char VAR9[VAR10];
struct VAR11 *VAR11;
enum nb_operation VAR12;
struct VAR13 *VAR14 = VAR8;
char VAR15[VAR16];
struct VAR17 *VAR18;
char *VAR19, *VAR20;
int VAR21;

FUN2(VAR3, VAR9, sizeof(VAR9));


VAR15[0] = '';
VAR19 = strrchr(VAR9, '');
VAR20 = strrchr(VAR9, '');
if (VAR19 && VAR20 && !strchr(VAR19, '')) {
*VAR20 = '';
FUN3(VAR15, VAR19 + 1, sizeof(VAR15));
*VAR19 = '';
}

VAR11 = FUN4(VAR9);
if (!VAR11) {
FUN5(VAR22,
"", VAR23, VAR9);
VAR14->VAR24 = true;
return VAR25;
}


switch (VAR4) {
case VAR26:
VAR12 = VAR27;
break;
case VAR28:
VAR12 = VAR29;
break;
case VAR30:
if (FUN6(VAR31, VAR11->VAR32))
VAR12 = VAR31;
else

return VAR33;
break;
case VAR34:
VAR12 = VAR35;
break;
case VAR36:

return VAR33;
default:
FUN7(VAR37,
"", VAR23,
VAR4, VAR9);
VAR14->VAR24 = true;
return VAR25;
}


if (VAR11->VAR32->VAR38 != VAR39 && VAR7
&& FUN8(VAR11->VAR9, VAR7, VAR15,
sizeof(VAR15))
!= 0) {
FUN7(VAR40,
"",
VAR23);
VAR14->VAR24 = true;
return VAR25;
}


VAR18 = FUN9(VAR9, VAR15);
VAR21 = FUN10(VAR14->VAR41, VAR11, VAR12, VAR9,
NULL, VAR18);
FUN11(VAR18);
if (VAR21 != VAR42) {
FUN5(
VAR43,
"",
VAR23, FUN12(VAR12), VAR9);
VAR14->VAR24 = true;
return VAR25;
}

return VAR33;
}