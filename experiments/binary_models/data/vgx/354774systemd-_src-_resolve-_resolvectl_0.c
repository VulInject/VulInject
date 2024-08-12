int FUN1(const char *VAR1, bool VAR2) {
FUN2(VAR3) VAR4 *VAR5 = NULL;
_cleanup_strv_free_ char **VAR6 = NULL;
int VAR7;

assert(VAR1);

if (VAR2) {
_cleanup_free_ char *VAR8 = NULL;
int VAR9 = -VAR10;



VAR8 = strdup(VAR1);
if (!VAR8)
return FUN3();

for (;;) {
VAR7 = FUN4(&VAR5, VAR8);
if (VAR7 > 0) {
if (VAR9 <= 0)
VAR9 = VAR7;

VAR7 = FUN5(&VAR6, VAR8);
if (VAR7 < 0)
return FUN3();
}

char *VAR11 = strrchr(VAR8, '');
if (!VAR11)
break;

*VAR11 = '';
}

unsigned VAR12 = FUN6(VAR6);
if (VAR12 > 1) {
_cleanup_free_ char *VAR13 = NULL;

VAR13 = FUN7(VAR6, "");
FUN8("",
FUN9(VAR13), VAR1, VAR6[0], VAR9);

} else if (VAR12 == 1) {
const char *VAR14;

VAR14 = FUN10(FUN11(VAR1, VAR6[0]));
if (!FUN12(VAR14))
FUN13("",
VAR14, VAR1, VAR6[0], VAR9);
}

VAR7 = VAR9;
} else
VAR7 = FUN4(&VAR5, VAR1);
if (VAR7 < 0) {
if (FUN14(VAR7) && VAR15) {
FUN15(VAR7, "", VAR1);
return 0; 
}
return FUN16(VAR7, ""%VAR1\"", VAR1);
}

if (VAR16 > 0 && VAR16 != VAR7)
return FUN16(FUN17(VAR17), "");

VAR16 = VAR7;
return FUN18(&VAR18, VAR6 ? VAR6[0] : VAR1); 
}