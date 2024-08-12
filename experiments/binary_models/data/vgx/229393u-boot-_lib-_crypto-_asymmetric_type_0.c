struct VAR1 *FUN1(struct VAR1 *VAR2,
const struct VAR3 *VAR4,
const struct VAR3 *VAR5,
bool VAR6)
{
struct VAR1 *VAR1;
key_ref_t VAR7;
const char *VAR8;
char *VAR9, *VAR10;
int VAR11;

FUN2(!VAR4 && !VAR5);

if (VAR4) {
VAR8 = VAR4->VAR12;
VAR11 = VAR4->VAR11;
} else {
VAR8 = VAR5->VAR12;
VAR11 = VAR5->VAR11;
}


VAR10 = VAR9 = FUN3(2 + 1 + VAR11 * 2 + 1, VAR13);
if (!VAR9)
return FUN4(-VAR14);

if (VAR6) {
*VAR10++ = '';
*VAR10++ = '';
} else {
*VAR10++ = '';
*VAR10++ = '';
}
*VAR10++ = '';
VAR10 = FUN5(VAR10, VAR8, VAR11);
*VAR10 = 0;

FUN6(""%VAR15\"", VAR9);

VAR7 = FUN7(FUN8(VAR2, 1),
&VAR16, VAR9, true);
if (FUN9(VAR7))
FUN6("", VAR9, FUN10(VAR7));
FUN11(VAR9);

if (FUN9(VAR7)) {
switch (FUN10(VAR7)) {

case -VAR17:
case -VAR18:
case -VAR19:
return FUN4(-VAR20);
default:
return FUN12(VAR7);
}
}

VAR1 = FUN13(VAR7);
if (VAR4 && VAR5) {
const struct VAR21 *VAR22 = FUN14(VAR1);

if (!VAR22->VAR23[1]) {
FUN6("");
goto VAR24;
}
if (!FUN15(VAR5, VAR22->VAR23[1])) {
FUN6("");
goto VAR24;
}
}

FUN16("", VAR25, FUN17(VAR1));
return VAR1;

VAR24:
FUN18(VAR1);
return FUN4(-VAR26);
}