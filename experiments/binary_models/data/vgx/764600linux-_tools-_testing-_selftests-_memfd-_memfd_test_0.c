static void FUN1(int VAR1, int VAR2, mode_t VAR3)
{
char VAR4[512];
int VAR5;

sprintf(VAR4, "", VAR1);
VAR5 = open(VAR4, VAR2, VAR3);
if (VAR5 >= 0) {
FUN2("", VAR4);
FUN3();
}
}