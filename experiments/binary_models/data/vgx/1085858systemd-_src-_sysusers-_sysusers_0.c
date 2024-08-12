static int FUN1(const char *VAR1, VAR2 **tmpfile, char **VAR3) {
_cleanup_fclose_ VAR2 *VAR4 = NULL, *VAR5 = NULL;
FUN2(VAR6) char *VAR7 = NULL;
struct VAR8 *VAR9 = NULL;
long VAR10;
VAR11 *VAR12;
int VAR13;

if (FUN3(VAR14))
return 0;

if (VAR15) {
FUN4("", FUN5(VAR16));
return 0;
}

VAR13 = FUN6("", VAR1, &VAR5, &VAR7);
if (VAR13 < 0)
return FUN7(VAR13, "", VAR1);

VAR10 = (long) (FUN8() / VAR17);

VAR4 = fopen(VAR1, "");
if (VAR4) {

VAR13 = FUN9(FUN10(VAR4), FUN10(VAR5), VAR7);
if (VAR13 < 0)
return FUN7(VAR13, "",
VAR1, VAR7);

while ((VAR13 = FUN11(VAR4, &VAR9)) > 0) {
VAR12 = FUN12(VAR18, VAR9->VAR19);
if (VAR12 && VAR12->VAR20) {

VAR9->VAR21 = VAR10;


VAR12->VAR20 = false;
FUN13(VAR14, FUN14(VAR12->VAR22));
}


if (FUN15(VAR9->VAR19[0], '', ''))
break;

VAR13 = FUN16(VAR9, VAR5);
if (VAR13 < 0)
return FUN7(VAR13, ""%VAR23\"",
VAR9->VAR19);

}
if (VAR13 < 0)
return FUN7(VAR13, "", VAR1);

} else {
if (VAR24 != VAR25)
return FUN7(VAR24, "", VAR1);
if (FUN17(FUN10(VAR5), 0000) < 0)
return FUN7(VAR24, "", VAR7);
}

FUN18(VAR12, VAR14) {
FUN2(VAR26) char *VAR27 = NULL;
bool VAR28;

struct spwd VAR29 = {
.VAR19 = VAR12->VAR30,
.VAR31 = (char*) VAR32,
.VAR21 = VAR10,
.VAR33 = -1,
.VAR34 = -1,
.VAR35 = -1,
.VAR36 = -1,
.VAR37 = -1,
.VAR38 = VAR39, 
};

VAR13 = FUN19(VAR12->VAR30, &VAR27, &VAR28);
if (VAR13 < 0)
FUN7(VAR13, "", VAR12->VAR30);

if (VAR27 && !VAR28) {
FUN2(VAR26) char* VAR40 = FUN20(VAR27);
VAR13 = FUN21(VAR40, &VAR27);
if (VAR13 < 0)
return FUN7(VAR13, "");
}

if (VAR27)
VAR29.VAR31 = VAR27;

VAR13 = FUN16(&VAR29, VAR5);
if (VAR13 < 0)
return FUN7(VAR13, ""%VAR23\"",
VAR9->VAR19);
}


while (VAR9) {
VAR13 = FUN16(VAR9, VAR5);
if (VAR13 < 0)
return FUN7(VAR13, ""%VAR23\"",
VAR9->VAR19);

VAR13 = FUN11(VAR4, &VAR9);
if (VAR13 < 0)
return FUN7(VAR13, "", VAR1);
if (VAR13 == 0)
break;
}
if (!FUN15(VAR24, 0, VAR25))
return -VAR24;

VAR13 = FUN22(VAR5);
if (VAR13 < 0)
return FUN7(VAR13, "", VAR7);

*tmpfile = FUN20(VAR5);
*VAR3 = FUN20(VAR7);

return 0;
}