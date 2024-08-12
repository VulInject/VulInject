VAR1 FUN1(struct VAR2 *VAR3,
struct VAR4 *VAR5,
VAR6 *VAR7, int *VAR8)
{
i40e_status VAR9;
enum i40e_nvmupd_cmd VAR10;


*VAR8 = 0;


VAR10 = FUN2(VAR3, VAR5, VAR8);

FUN3(VAR3, VAR11, "",
VAR12[VAR10],
VAR3->VAR13,
VAR3->VAR14, VAR3->VAR15,
VAR5->VAR16, VAR5->VAR17, VAR5->VAR18, VAR5->VAR19);

if (VAR10 == VAR20) {
*VAR8 = -VAR21;
FUN3(VAR3, VAR11,
"",
VAR10, *VAR8);
}


if (VAR10 == VAR22) {
if (!VAR5->VAR19) {
*VAR8 = -VAR21;
return VAR23;
}

VAR7[0] = VAR3->VAR13;

if (VAR5->VAR19 >= 4) {
VAR7[1] = 0;
*((VAR24 *)&VAR7[2]) = VAR3->VAR15;
}


if (VAR3->VAR13 == VAR25)
VAR3->VAR13 = VAR26;

return 0;
}


if (VAR3->VAR13 == VAR25) {
FUN3(VAR3, VAR11,
"");
VAR3->VAR13 = VAR26;
}

switch (VAR3->VAR13) {
case VAR26:
VAR9 = FUN4(VAR3, VAR5, VAR7, VAR8);
break;

case VAR27:
VAR9 = FUN5(VAR3, VAR5, VAR7, VAR8);
break;

case VAR28:
VAR9 = FUN6(VAR3, VAR5, VAR7, VAR8);
break;

case VAR29:
case VAR30:

if (VAR5->VAR18 == 0xffff) {
FUN7(VAR3, VAR3->VAR15);
return 0;
}

VAR9 = VAR31;
*VAR8 = -VAR32;
break;

default:

FUN3(VAR3, VAR11,
"", VAR3->VAR13);
VAR9 = VAR33;
*VAR8 = -VAR34;
break;
}
return VAR9;
}