static VAR1 *
FUN1(VAR2  *VAR3)
{
l_int32          VAR4, VAR5, VAR6, VAR7, VAR8, VAR9, VAR10, VAR11, VAR12, VAR13;
l_int32          VAR14, VAR15, VAR16;
VAR17        *VAR18, *VAR19;
VAR1             *VAR20;
VAR21         *VAR22;
VAR23  *VAR24;
SavedImage       VAR25;
int              VAR26;


if (FUN2(VAR3) != VAR27) {
FUN3(VAR3, &VAR26);
return (VAR1 *)FUN4("", VAR28, NULL);
}

if (VAR3->VAR29 == NULL) {
FUN3(VAR3, &VAR26);
return (VAR1 *)FUN4("", VAR28, NULL);
}

VAR13 = VAR3->VAR30;
if (VAR13 > 1)
FUN5("",
VAR28, VAR13);

VAR25 = VAR3->VAR29[0];
VAR7 = VAR25.VAR31.VAR32;
VAR8 = VAR25.VAR31.VAR33;
if (VAR7 <= 0 || VAR8 <= 0) {
FUN3(VAR3, &VAR26);
return (VAR1 *)FUN4("", VAR28, NULL);
}

if (VAR25.VAR34 == NULL) {
FUN3(VAR3, &VAR26);
return (VAR1 *)FUN4("", VAR28, NULL);
}

if (VAR25.VAR31.VAR35) {

VAR24 = VAR25.VAR31.VAR35;
} else if (VAR3->VAR36) {

VAR24 = VAR3->VAR36;
} else {

FUN3(VAR3, &VAR26);
return (VAR1 *)FUN4("", VAR28, NULL);
}

VAR11 = VAR24->VAR37;
if (VAR11 <= 0 || VAR11 > 256) {
FUN3(VAR3, &VAR26);
return (VAR1 *)FUN4("", VAR28, NULL);
}
if (VAR11 <= 2)
VAR9 = 1;
else if (VAR11 <= 4)
VAR9 = 2;
else if (VAR11 <= 16)
VAR9 = 4;
else  
VAR9 = 8;
VAR22 = FUN6(VAR9);
for (VAR10 = 0; VAR10 < VAR11; VAR10++) {
VAR14 = VAR24->VAR38[VAR10].VAR39;
VAR15 = VAR24->VAR38[VAR10].VAR40;
VAR16 = VAR24->VAR38[VAR10].VAR41;
FUN7(VAR22, VAR14, VAR15, VAR16);
}

if ((VAR20 = FUN8(VAR7, VAR8, VAR9)) == NULL) {
FUN3(VAR3, &VAR26);
FUN9(&VAR22);
return (VAR1 *)FUN4("", VAR28, NULL);
}
FUN10(VAR20, VAR42);
FUN11(VAR20, VAR22);
FUN12(VAR22, VAR20, &VAR12);
if (!VAR12) {
FUN3(VAR3, &VAR26);
FUN13(&VAR20);
FUN9(&VAR22);
return (VAR1 *)FUN4("", VAR28, NULL);
}

VAR4 = FUN14(VAR20);
VAR18 = FUN15(VAR20);
for (VAR5 = 0; VAR5 < VAR8; VAR5++) {
VAR19 = VAR18 + VAR5 * VAR4;
if (VAR9 == 1) {
for (VAR6 = 0; VAR6 < VAR7; VAR6++) {
if (VAR25.VAR34[VAR5 * VAR7 + VAR6])
FUN16(VAR19, VAR6);
}
} else if (VAR9 == 2) {
for (VAR6 = 0; VAR6 < VAR7; VAR6++)
FUN17(VAR19, VAR6, VAR25.VAR34[VAR5 * VAR7 + VAR6]);
} else if (VAR9 == 4) {
for (VAR6 = 0; VAR6 < VAR7; VAR6++)
FUN18(VAR19, VAR6, VAR25.VAR34[VAR5 * VAR7 + VAR6]);
} else {  
for (VAR6 = 0; VAR6 < VAR7; VAR6++)
FUN19(VAR19, VAR6, VAR25.VAR34[VAR5 * VAR7 + VAR6]);
}
}



FUN3(VAR3, &VAR26);
return VAR20;
}