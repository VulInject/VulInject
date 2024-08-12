static int FUN1(struct VAR1 *VAR2);


static int FUN2(struct VAR1 *VAR2)
{

uint8_t VAR3;



VAR2->VAR4 = VAR5;
VAR2->VAR6 = 0x00;

if (VAR2->VAR7 == VAR8) {
switch (FUN3(VAR2->VAR9[1])) {
default:


return -1;
case VAR10:
VAR2->VAR4 = VAR11;
return FUN4(VAR2, &VAR2->VAR12);
case VAR13:
VAR2->VAR4 = VAR14;
return FUN4(VAR2, &VAR2->VAR12);
case VAR15:
VAR2->VAR4 = VAR16;
return FUN4(VAR2, &VAR2->VAR12);
}
} else if (VAR2->VAR7 == VAR17) {
switch (FUN5(VAR2->VAR9[1])) {
default:


return -1;
case VAR10:
VAR2->VAR18 = 0x0f;
VAR2->VAR4 = VAR11;
return FUN4(VAR2, &VAR2->VAR12);
case VAR13:
VAR2->VAR18 = 0x0f;
VAR2->VAR19 = 0x38;
VAR2->VAR4 = VAR14;
return FUN4(VAR2, &VAR2->VAR12);
case VAR15:
VAR2->VAR18 = 0x0f;
VAR2->VAR19 = 0x3a;
VAR2->VAR4 = VAR16;
return FUN4(VAR2, &VAR2->VAR12);
}
} else if (VAR2->VAR7 == VAR20) {
VAR2->VAR18 = 0x0f;
VAR2->VAR4 = VAR11;
return FUN4(VAR2, &VAR2->VAR12);
} else if (VAR2->VAR7 == VAR21) {
switch (FUN6(VAR2->VAR9[1])) {
default:


return -1;
case VAR22:

VAR2->VAR4 = VAR23;
return FUN4(VAR2, &VAR2->VAR12);
case VAR24:

VAR2->VAR4 = VAR25;
return FUN4(VAR2, &VAR2->VAR12);
case VAR26:

VAR2->VAR4 = VAR27;
return FUN4(VAR2, &VAR2->VAR12);
}
}

if (FUN4(VAR2, &VAR3))
return -1;


VAR2->VAR6 = VAR3;

if (VAR3 == 0x0f) {


VAR2->VAR18 = VAR3;

if (FUN4(VAR2, &VAR3))
return -1;

if (VAR3 == 0x38) {


VAR2->VAR19 = VAR3;

if (FUN4(VAR2, &VAR3))
return -1;

VAR2->VAR4 = VAR14;
} else if (VAR3 == 0x3a) {


VAR2->VAR19 = VAR3;

if (FUN4(VAR2, &VAR3))
return -1;

VAR2->VAR4 = VAR16;
} else {
switch(VAR3) {
default:

VAR2->VAR4 = VAR11;
break;
case 0x0e:	
VAR2->VAR4 = VAR28;

VAR2->VAR29 = true;
break;
case 0x0f:

if (FUN1(VAR2))
return -1;

if (FUN4(VAR2, &VAR3))
return -1;
VAR2->VAR4 = VAR28;
break;
}
}
}



VAR2->VAR12 = VAR3;

return 0;
}