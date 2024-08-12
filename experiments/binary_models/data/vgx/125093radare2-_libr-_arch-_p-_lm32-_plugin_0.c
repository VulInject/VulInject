static bool FUN1(ut8 VAR1, char *VAR2) {
ut8 VAR3 = 0xff;
int VAR4;
for (VAR4 = 0; VAR4 < VAR5; VAR4++) {
if (VAR6[VAR4].VAR7 == VAR1) {
VAR3 = VAR4;
break;
}
}

if (VAR3 == 0xff) {
return false;
}
strcpy (VAR2, VAR6[VAR3].VAR8);
return true;
}