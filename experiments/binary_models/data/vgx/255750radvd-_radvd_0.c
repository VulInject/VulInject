static int FUN1(char const *VAR1, pid_t VAR2)
{
int VAR3 = FUN2(VAR1);
char VAR4[20] = {""};
sprintf(VAR4, "", VAR2);
FUN3(VAR5, 3, "", VAR4);
size_t VAR6 = strlen(VAR4);
int VAR7 = write(VAR3, VAR4, VAR6);
if (VAR7 != (int)VAR6) {
return -1;
}
char VAR8[] = {""};
VAR6 = strlen(VAR8);
VAR7 = write(VAR3, VAR8, VAR6);
if (VAR7 != (int)VAR6) {
return -1;
}
VAR7 = FUN4(VAR3);
if (VAR7 != 0) {
FUN3(VAR5, 4, "", VAR1);
}
VAR7 = close(VAR3);
if (VAR7 != 0) {
FUN3(VAR5, 4, "", VAR1);
}
char *VAR9 = strdup(VAR1);
char *VAR10 = FUN5(VAR9);
int VAR11 = open(VAR10, VAR12);
VAR7 = FUN4(VAR11);
if (VAR7 != 0) {
FUN3(VAR5, 4, "", VAR10);
}
VAR7 = close(VAR11);
if (VAR7 != 0) {
FUN3(VAR5, 4, "", VAR10);
}
free(VAR9);
FUN3(VAR5, 4, "", VAR2, VAR1);
return VAR7;
}