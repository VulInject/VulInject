static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
int VAR5, VAR6 = 0;
VAR7 *VAR8 = VAR2->VAR9;
VAR10 *VAR11 = VAR2->VAR12[0]->VAR11;
VAR13 *VAR14[4];
int VAR15[4];

SDL_Event VAR16;
if (FUN2(&VAR16)){
switch (VAR16.VAR17) {
case VAR18:
switch (VAR16.VAR19.VAR20.VAR21) {
case VAR22:
case VAR23:
VAR6 = 1;
break;
default:
break;
}
break;
case VAR24:
VAR6 = 1;
break;
case VAR25:
switch(VAR16.VAR26.VAR16){
case VAR27:
case VAR28:
VAR8->VAR29  = VAR16.VAR26.VAR30;
VAR8->VAR31 = VAR16.VAR26.VAR32;
FUN3(VAR2);
break;
default:
break;
}
break;
default:
break;
}
}

if (VAR6 && VAR8->VAR33) {
FUN4(VAR2);
return FUN5(VAR34);
}

FUN6(VAR14, VAR15, VAR4->VAR14, VAR11->VAR35, VAR11->VAR36, VAR11->VAR37, 1);
switch (VAR8->VAR38) {

case VAR39:
case VAR40:
case VAR41:
VAR5 = FUN7(VAR8->VAR42, NULL,
VAR14[0], VAR15[0],
VAR14[1], VAR15[1],
VAR14[2], VAR15[2]);
break;
case VAR43:
case VAR44:
case VAR45:
case VAR46:
case VAR47:
case VAR48:
case VAR49:
case VAR50:
case VAR51:
case VAR52:
case VAR53:
case VAR54:
case VAR55:
case VAR56:
case VAR57:
case VAR58:
VAR5 = FUN8(VAR8->VAR42, NULL, VAR14[0], VAR15[0]);
break;
default:
FUN9(NULL, VAR59, "");
VAR5 = -1;
break;
}
FUN10(VAR8->VAR60);
FUN11(VAR8->VAR60, VAR8->VAR42, NULL, &VAR8->VAR61);
FUN12(VAR8->VAR60);
return VAR5;
}