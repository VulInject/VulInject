VAR1 *
FUN1(struct VAR2 *VAR3, VAR4 *VAR5,
bool VAR6)
{

FUN2(VAR1) VAR7 = FUN3(VAR8);
size_t VAR9;
unsigned VAR10 = 0;
unsigned VAR11 = 0;
unsigned VAR12 = FUN4(VAR5);


FUN5(VAR7, "");
if (VAR5->VAR13 && VAR5->VAR13->VAR14) {
if (VAR5->VAR13->VAR15 != 1) {
FUN6(VAR16, "",
FUN7(""));
return NULL;
}
if (VAR12 != VAR5->VAR13->VAR14 * VAR5->VAR13->VAR17 * VAR5->VAR13->VAR18) {
FUN6(VAR16, "",
FUN7(""
""
""));
return NULL;
}

if ((FUN8(VAR3) & VAR19) != 0) {
FUN9(VAR7, "",
VAR12,
VAR5->VAR13->VAR14,
VAR5->VAR13->VAR17,
VAR5->VAR13->VAR18);
} else {
FUN6(VAR16, "",
FUN7(""
""));
return NULL;
}
} else {
FUN9(VAR7, "", VAR12);
}


FUN5(VAR7, "");
FUN9(VAR7, "",
FUN10(FUN11(VAR5), 1024));

if (VAR5->VAR20.VAR21)
FUN5(VAR7, ""); 


if (VAR5->VAR22[VAR23] == VAR24)
FUN5(VAR7, ""); 
if (VAR5->VAR22[VAR25] == VAR24)
FUN5(VAR7, ""); 
if (VAR5->VAR22[VAR26] == VAR24) {
if (VAR5->VAR27[VAR28] == VAR29)
FUN5(VAR7, "");
}

switch (VAR5->VAR30.VAR31) {
case VAR32:

break;
case VAR33:
if ((FUN8(VAR3) & VAR34) != 0) {
FUN5(VAR7, "");
} else {
FUN6(VAR16, "",
FUN7(""
""));
return NULL;
}
break;
default:
FUN6(VAR16,
FUN7(""),
FUN12(VAR5->VAR30.VAR31));
return NULL;
}


FUN5(VAR7, ""); 
FUN5(VAR7, ""); 

FUN13(VAR7, "", "", NULL);

if (VAR5->VAR35.VAR36 == NULL &&
VAR5->VAR35.VAR37) {
if ((FUN8(VAR3) & VAR38)) {
FUN5(VAR7, "");
FUN9(VAR7, "", VAR5->VAR35.VAR37->VAR39);
} else {
FUN6(VAR16, "",
FUN7(""
""));
return NULL;
}
}


for (VAR9 = 0; VAR9 < VAR5->VAR40; VAR9++) {
if (FUN14(VAR5, VAR5->VAR41[VAR9], VAR3, VAR7,
&VAR10, &VAR11) < 0)
return NULL;
}
for (VAR9 = 0; VAR9 < VAR5->VAR42; VAR9++) {
if (FUN15(VAR5, VAR5->VAR43[VAR9], VAR3, VAR7, VAR6) < 0)
return NULL;
}
for (VAR9 = 0; VAR9 < VAR5->VAR44; VAR9++) {
if (FUN16(VAR5, VAR5->VAR45[VAR9], VAR7) < 0)
return NULL;
}

if (VAR5->VAR46 && VAR5->VAR47) {
if (VAR5->VAR46 == 1 && VAR5->VAR47 == 1) {
if (FUN17(VAR5, VAR5->VAR48[0], VAR5->VAR49[0],
VAR3, VAR7, VAR6) < 0)
return NULL;
} else {
FUN6(VAR16, "",
FUN7(""));
return NULL;
}
}

for (VAR9 = 0; VAR9 < VAR5->VAR50; VAR9++) {
if (FUN18(VAR5, VAR5->VAR51[VAR9],
FUN19(VAR5, VAR5->VAR51[VAR9]->VAR52),
VAR3, VAR7) < 0)
return NULL;
}

for (VAR9 = 0; VAR9 < VAR5->VAR53; VAR9++) {
if (FUN20(VAR5, VAR5->VAR54[VAR9], VAR7) < 0)
return NULL;
}

if (FUN21(VAR5, VAR7) < 0)
return NULL;

if (VAR5->VAR55) {
VAR56 *VAR57;

FUN22(""
""
"");

VAR57 = VAR5->VAR55;
for (VAR9 = 0; VAR9 < VAR57->VAR58; VAR9++)
FUN5(VAR7, VAR57->VAR59[VAR9]);
}

FUN5(VAR7, VAR5->VAR60);

return FUN23(&VAR7);
}