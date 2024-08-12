static int FUN1(void) {
FUN2();
if (VAR1)
return 0;


char *VAR2 = VAR3;
char *VAR4;
if (asprintf(&VAR4, "", VAR5.VAR6) == -1)
FUN3("");

struct stat VAR7;
if (FUN4(VAR4, &VAR7) == 0) {
if (FUN5(VAR7.VAR8)) {
FUN6("");
free(VAR4);
return 0;
}


FUN7();
VAR9 *VAR10 = fopen(VAR2, "");
if (VAR10) {
fprintf(VAR10, "");
FUN8(VAR10, FUN9(), FUN10(), 0600);
fclose(VAR10);
}
else
FUN3("");
FUN11();

FUN12(VAR4, VAR2, 0600); 
FUN13(VAR2, VAR4);
FUN14("", VAR2);
free(VAR4);
return 1; 
}

free(VAR4);
return 0;
}