void FUN1(void) {
struct VAR1 *VAR2 = NULL;

FUN2(VAR3);


VAR2 = FUN3(""); 
if (VAR2 != NULL) {
VAR4 = VAR2->VAR5;
}

VAR2 = FUN3(""); 
if (VAR2 != NULL) {
VAR6 = VAR2->VAR5;
}

VAR2 = FUN3("");
if (VAR2 != NULL) {
VAR7 = VAR2->VAR5;
}

FUN4();

if (VAR8 != NULL) {
FUN5(VAR8);
}

VAR8 = FUN6(VAR9);
FUN7(VAR8, "");
}