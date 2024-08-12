bool
FUN1(const char *VAR1)
{
struct VAR2 *VAR3;
struct VAR4 *VAR5 = NULL, *VAR6;
int VAR7;
int VAR8;
const char *VAR9 = NULL;

if (!(VAR3 = FUN2(NULL, &VAR9))) {
FUN3(VAR10, "", VAR11);

return false;
}

FUN4(VAR3);

VAR7 = FUN5(VAR3, VAR1, &VAR5);
if (VAR5 == NULL || VAR7 < 0) {
FUN3(VAR10, "", -VAR7);
FUN6(VAR3);
return false;
}

VAR8 = VAR12; 
FUN7(VAR6, VAR5) {
struct VAR13 *VAR14 = FUN8(VAR6);
VAR7 = FUN9(VAR14, VAR8, NULL, NULL, NULL, NULL);
if (VAR7 < 0) {
VAR11 = -VAR7;
FUN3(VAR10, "", FUN10(VAR14), -VAR7);
FUN11(VAR14);
FUN12(VAR5);
FUN6(VAR3);
return false;
}

FUN11(VAR14);
}

FUN12(VAR5);

FUN6(VAR3);

return true;
}