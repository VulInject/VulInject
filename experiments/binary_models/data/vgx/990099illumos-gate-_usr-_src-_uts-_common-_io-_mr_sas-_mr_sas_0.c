int
FUN1(struct VAR1 *VAR2)
{
int		VAR3;
uint8_t		VAR4;
uint32_t	VAR5 = 0;
uint32_t	VAR6;
uint32_t	VAR7;
uint32_t	VAR8;
uint32_t	VAR9;
uint32_t	VAR10;

VAR8 =
VAR2->VAR11->FUN2(VAR2);
VAR6 =
VAR8 & VAR12;
FUN3(VAR13, (VAR14,
"", VAR6));

while (VAR6 != VAR15) {
FUN3(VAR16, (VAR14,
"", VAR6));

switch (VAR6) {
case VAR17:
FUN3(VAR16, (VAR18,
""));

return (VAR19);
case VAR20:

FUN3(VAR13, (VAR18,
""));


if (!VAR2->VAR21 && !VAR2->VAR22) {
FUN4(VAR23 |
VAR24, VAR2);
} else {
FUN5(VAR23 |
VAR24, VAR2);
}
VAR4	= (VAR2->VAR21 == 1) ? 180 : 2;
VAR7	= VAR20;
break;
case VAR25:

FUN3(VAR13, (VAR18,
""));

if (!VAR2->VAR21 && !VAR2->VAR22) {
FUN4(VAR24, VAR2);
} else {
FUN5(VAR24,
VAR2);
}
VAR4	= (VAR2->VAR21 == 1) ? 180 : 10;
VAR7	= VAR25;
break;
case VAR26:

VAR2->VAR11->FUN6(VAR2);
FUN3(VAR13, (VAR18,
""));


if (!VAR2->VAR21 && !VAR2->VAR22) {
FUN4(VAR27, VAR2);
} else {
FUN5(VAR27,
VAR2);

for (VAR3 = 0; VAR3 < (10 * 1000); VAR3++) {
VAR10 =
FUN7(VAR2);
if (VAR10 & 1) {
FUN8(1 *
FUN9(VAR28));
} else {
break;
}
}

}
VAR4	= (VAR2->VAR21 == 1) ? 180 : 10;
VAR7	= VAR26;
break;
case VAR29:

FUN3(VAR13, (VAR18, ""));

VAR4	= (VAR2->VAR21 == 1) ? 180 : 2;
VAR7	= VAR29;
break;
case VAR30:
VAR4	= (VAR2->VAR21 == 1) ? 180 : 2;
VAR7	= VAR30;
break;
case VAR31:
VAR4	= (VAR2->VAR21 == 1) ? 180 : 2;
VAR7	= VAR31;
break;
case VAR32:
VAR4	= 180;
VAR7	= VAR32;
break;
case VAR33:
VAR4	= 180;
VAR7	= VAR33;
VAR9 = VAR8;
FUN3(VAR34, (VAR18,
""));
break;
case VAR35:
VAR4	= 180;
VAR7	= VAR35;
break;
default:
FUN3(VAR13, (VAR18,
"", VAR6));
return (VAR19);
}


for (VAR3 = 0; VAR3 < (VAR4 * VAR28); VAR3++) {

VAR8 =
VAR2->VAR11->FUN2(VAR2);
VAR6 = VAR8 & VAR12;

if (VAR6 == VAR7) {
FUN8(1 * FUN9(VAR28));
} else {
break;
}
}
if (VAR6 == VAR33) {
if (VAR9 != VAR8) {
continue;
}
}


if (VAR6 == VAR7) {
FUN3(VAR13, (VAR36,
"", VAR4));
return (VAR19);
}
};


if (!VAR2->VAR21 && !VAR2->VAR22) {
VAR5 = FUN10(VAR2);
FUN3(VAR13, (VAR14,
"", VAR5));


FUN4(0xF, VAR2);
}

if (FUN11(VAR2->VAR37) != VAR38) {
return (VAR39);
}

return (VAR38);
}