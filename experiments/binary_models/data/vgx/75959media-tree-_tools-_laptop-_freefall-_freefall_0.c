static void FUN1(char *VAR1, int VAR2)
{
char VAR3[1024];
int VAR4 = open(VAR1, VAR5);

if (VAR4 < 0) {
FUN2("");
FUN3(1);
}

sprintf(VAR3, "", VAR2);

if (write(VAR4, VAR3, strlen(VAR3)) != strlen(VAR3)) {
FUN2("");
FUN3(1);
}

close(VAR4);
}