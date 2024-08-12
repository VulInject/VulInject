int
FUN1(Dwarf_Global VAR1,
char **VAR2,
VAR3 * VAR4,
VAR3 * VAR5,
VAR6 * VAR7)
{
Dwarf_Global_Context VAR8 = 0;
Dwarf_Debug VAR9 = 0;
Dwarf_Off VAR10 = 0;

if (VAR1 == NULL) {
FUN2(NULL, VAR7, VAR11);
return (VAR12);
}

VAR8 = VAR1->VAR13;

if (VAR8 == NULL) {
FUN2(NULL, VAR7, VAR14);
return (VAR12);
}

VAR10 = VAR8->VAR15;

VAR9 = VAR8->VAR16;
if (VAR9 == NULL) {
FUN2(NULL, VAR7, VAR17);
return (VAR12);
}

if (VAR9->VAR18.VAR19 &&
((VAR10 + VAR20) >= VAR9->VAR18.VAR19)) {
dwarfstring VAR21;
FUN3(&VAR21);
FUN4(VAR10,VAR10+VAR20,
VAR9->VAR18.VAR19,&VAR21);
FUN5(VAR9, VAR7, VAR22,
FUN6(&VAR21));
FUN7(&VAR21);
return (VAR12);
}

if (VAR4) {
if(VAR1->VAR23) {
*VAR4 = VAR1->VAR23 + VAR10;
} else {
*VAR4 = 0;
}
}
*VAR2 = (char *) VAR1->VAR24;
if (VAR5) {

int VAR25 = 0;
Dwarf_Unsigned VAR26 = 0;
int VAR27 = FUN8(VAR9, VAR7);

if (VAR27 != VAR28) {
return VAR27;
}


if ((VAR10 + 10) >= VAR9->VAR18.VAR19) {
dwarfstring VAR21;

FUN3(&VAR21);
FUN4(VAR10,VAR10+10,
VAR9->VAR18.VAR19,&VAR21);
FUN5(VAR9, VAR7, VAR22,
FUN6(&VAR21));
FUN7(&VAR21);
return (VAR12);
}
VAR25 = FUN9(VAR9, VAR10,true,
&VAR26,VAR7);
if(VAR25 != VAR28) {
return VAR25;
}
*VAR5 = VAR10 + VAR26;
}
return VAR28;
}