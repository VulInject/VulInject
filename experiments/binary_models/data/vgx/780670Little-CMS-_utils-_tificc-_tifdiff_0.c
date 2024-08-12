VAR1 FUN1(VAR2 *VAR3)
{
uint16 VAR4, VAR5, VAR6, VAR7, VAR8, *VAR9;
uint16 VAR10, VAR11 = 0;
int VAR12, VAR13 = 0, VAR14 = 0;

FUN2(VAR3,           VAR15,   &VAR4);
FUN3(VAR3,  VAR16, &VAR5);

if (VAR5 == 1)
FUN4("");

if (VAR5 != 8 && VAR5 != 16)
FUN4("");

FUN3(VAR3, VAR17, &VAR6);
FUN3(VAR3, VAR18, &VAR8);

switch (VAR8)
{
case VAR19: VAR13 = 0; break;
case VAR20: FUN4("");
default:

FUN4("", (int) VAR8);
}




if (VAR6 == 1) VAR13 = 0;




FUN3(VAR3, VAR21, &VAR7, &VAR9);


VAR12 = VAR6 - VAR7;

switch (VAR4) {

case VAR22:

VAR11 = 1;

case VAR23:

VAR14 = VAR24;                                
break;

case VAR25:

VAR14 = VAR26;
break;


case VAR27:

FUN4(""); 

case VAR28:
VAR14 = FUN5(VAR12);
break;

case VAR29:
FUN2(VAR3, VAR30, &VAR10);
{
uint16 VAR31, VAR32;

VAR14 = VAR33;
FUN3(VAR3, VAR34, &VAR31, &VAR32);
if (VAR31 != 1 || VAR32 != 1)
FUN4("");

}
break;

case 9:
case VAR35:
VAR14 = VAR36;
break;


case VAR37:      

FUN6(VAR3, VAR38, VAR39);
VAR14 = VAR40;             
VAR5 = 16;               
break;

default:
FUN4("", VAR4);
}



VAR5 >>= 3; 

return (FUN7(VAR14)|FUN8(VAR13)|FUN9(VAR7)|FUN10(VAR12)|FUN11(VAR5)|FUN12(VAR11));
}