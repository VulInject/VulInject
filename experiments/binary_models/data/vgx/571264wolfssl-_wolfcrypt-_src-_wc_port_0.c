int FUN1(VAR1* VAR2, const char* VAR3, char** VAR4)
{
int VAR5 = VAR6; 
int VAR7 = 0;
int VAR8 = 0;

if (VAR4)
*VAR4 = NULL;

if (VAR2 == NULL || VAR3 == NULL) {
return VAR9;
}

FUN2(VAR2, 0, sizeof(VAR1));
VAR7 = (int)FUN3(VAR3);

if (VAR7 > VAR10 - 3)
return VAR11;

FUN4(VAR2->VAR4, VAR3, VAR10 - 3);
FUN4(VAR2->VAR4 + VAR7, "", VAR10 - VAR7);

VAR2->VAR12 = FUN5(VAR2->VAR4, &VAR2->VAR13);
if (VAR2->VAR12 == VAR14) {
FUN6("");
return VAR11;
}

do {
if (!(VAR2->VAR13.VAR15 & VAR16)) {
VAR8 = (int)FUN3(VAR2->VAR13.VAR17);

if (VAR7 + VAR8 + 2 > VAR10) {
return VAR11;
}
FUN4(VAR2->VAR4, VAR3, VAR7 + 1);
VAR2->VAR4[VAR7] = '';
FUN4(VAR2->VAR4 + VAR7 + 1,
VAR2->VAR13.VAR17,
VAR10 - VAR7 - 1);
if (VAR4)
*VAR4 = VAR2->VAR4;
return 0;
}
} while (FUN7(VAR2->VAR12, &VAR2->VAR13));

if (VAR7 > VAR10 - 3)
return VAR11;

FUN4(VAR2->VAR4, VAR3, VAR10 - 3);
FUN4(VAR2->VAR4 + VAR7, "", VAR10 - VAR7);

if (!FUN8(VAR2->VAR4, &VAR2->VAR13)) {
FUN6("");
return VAR11;
}

do {
VAR8 = (int)FUN3(FUN9(VAR2));

if (VAR7 + VAR8 + 2 > VAR10) {
return VAR11;
}
FUN4(VAR2->VAR4, VAR3, VAR7 + 1);
VAR2->VAR4[VAR7] = '';
FUN4(VAR2->VAR4 + VAR7 + 1,
FUN9(VAR2),
VAR10 - VAR7 - 1);
if (0 == FUN10(VAR2->VAR4)) {
if (VAR4)
*VAR4 = VAR2->VAR4;
return 0;
}
} while (FUN11(&VAR2->VAR13));

if (FUN12(&VAR2->VAR18, VAR3) != 0) {
FUN6("");
return VAR11;
}
VAR2->VAR19 = &VAR2->VAR18;

while ((FUN13(&VAR2->VAR18, &VAR2->VAR20)) != 0) {
VAR8 = (int)FUN3(VAR2->VAR20.VAR4);

if (VAR7 + VAR8 + 2 >= VAR10) {
VAR5 = VAR11;
break;
}
FUN4(VAR2->VAR4, VAR3, VAR7 + 1);
VAR2->VAR4[VAR7] = '';


FUN4(VAR2->VAR4 + VAR7 + 1, VAR2->VAR20.VAR4, VAR8 + 1);
if ((VAR5 = FUN10(VAR2->VAR4)) == 0) {
if (VAR4)
*VAR4 = VAR2->VAR4;
return 0;
}
}
VAR2->VAR18 = FUN14((const VAR21*)VAR3);
if (VAR2->VAR18 == NULL) {
FUN6("");
return VAR11;
}

while ((VAR2->VAR20 = FUN15(VAR2->VAR18)) != NULL) {
VAR8 = (int)FUN3(VAR2->VAR20->VAR22);

if (VAR7 + VAR8 + 2 >= VAR10) {
VAR5 = VAR11;
break;
}
FUN4(VAR2->VAR4, VAR3, VAR7 + 1);
VAR2->VAR4[VAR7] = '';


FUN4(VAR2->VAR4 + VAR7 + 1, VAR2->VAR20->VAR22, VAR8 + 1);

if ((VAR5 = FUN10(VAR2->VAR4)) == 0) {
if (VAR4)
*VAR4 = VAR2->VAR4;
return 0;
}
}
VAR2->VAR18 = FUN16(VAR3);
if (VAR2->VAR18 == NULL) {
FUN6("");
return VAR11;
}

while ((VAR2->VAR20 = FUN17(VAR2->VAR18)) != NULL) {
VAR8 = (int)FUN3(VAR2->VAR20->VAR22);

if (VAR7 + VAR8 + 2 >= VAR10) {
VAR5 = VAR11;
break;
}
FUN4(VAR2->VAR4, VAR3, VAR7 + 1);
VAR2->VAR4[VAR7] = '';


FUN4(VAR2->VAR4 + VAR7 + 1, VAR2->VAR20->VAR22, VAR8 + 1);
if ((VAR5 = FUN10(VAR2->VAR4)) == 0) {
if (VAR4)
*VAR4 = VAR2->VAR4;
return 0;
}
}
FUN18(VAR2);

return VAR5;
}