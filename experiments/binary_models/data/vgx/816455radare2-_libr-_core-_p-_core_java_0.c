static int FUN1(VAR1 *VAR2, const char *VAR3) {
VAR4 *VAR5 = FUN2 (VAR2);
VAR6 *VAR7 = (VAR6 *)FUN3 (VAR5);
IFDBG FUN4 ("", VAR3);

if (!VAR7) {
FUN5 ("");
return true;
}

switch (*(VAR3)) {
case '': return FUN6 (VAR7);
case '': return FUN7 (VAR7);
case '': return FUN8 (VAR7);
case '': return FUN9 (VAR7);
case '': return FUN10 (VAR5);
case '': return FUN11 (VAR7);
}
return false;
}