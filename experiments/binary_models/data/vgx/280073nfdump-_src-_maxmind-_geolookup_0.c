static int FUN1(char *VAR1) {
char *VAR2 = VAR1;
int VAR3 = 0;
while (*VAR2) {
if ((!FUN2(*VAR2) && *VAR2 != '') || VAR3 > 15) {
return 0;
}
VAR2++;
VAR3++;
}

VAR2 = strdup(VAR1);
int VAR4 = 0;
char *VAR5 = "";
char *VAR6;
char *VAR7 = FUN3(VAR2, VAR5, &VAR6);
while (VAR7) {
int VAR8 = FUN4(VAR7);
if (VAR8 > 255) {
free(VAR2);
return 0;
}
VAR4++;
VAR7 = FUN3(NULL, VAR5, &VAR6);
}

free(VAR2);
return VAR4 == 4;
}