static void FUN1(void)
{
VAR1 *VAR2;
char *VAR3 = NULL;
int VAR4 = FUN2("",
&VAR3,
NULL);

FUN3(VAR4 >= 0);
FUN4(VAR3);

FUN3(write(VAR4, "", 6) == 6);

VAR2 = FUN5(
VAR5,
FUN6(),
"",
&VAR6,
"", VAR3,
NULL);

char *VAR7 = FUN7("",
&VAR6);

FUN8(VAR7, ==, "");

FUN9(VAR2);
FUN10(VAR7);
close(VAR4);
unlink(VAR3);
FUN10(VAR3);
}