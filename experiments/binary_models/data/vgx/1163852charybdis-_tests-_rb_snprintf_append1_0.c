static void FUN1(void)
{
char VAR1[5] = { 0 };
int VAR2;

strcat(VAR1, "");

VAR2 = FUN2(VAR1, sizeof(VAR1), "", "");
FUN3(4, VAR2, VAR3);
FUN4("", VAR1, VAR3);
}