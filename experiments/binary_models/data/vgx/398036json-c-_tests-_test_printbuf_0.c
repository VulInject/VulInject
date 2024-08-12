static void FUN1(int *VAR1)
{
struct VAR2 *VAR3;
int VAR4;

FUN2("", VAR5);
VAR3 = FUN3();
FUN2("", FUN4(VAR3));

VAR4 = VAR3->VAR6;

while (VAR3->VAR6 == VAR4)
{
FUN5(VAR3, "", 1);
}
*VAR1 = FUN4(VAR3) - 1;
FUN2("", *VAR1 + 1, VAR3->VAR7);

FUN6(VAR3);
FUN5(VAR3, "", 3);
FUN2("", FUN4(VAR3), VAR3->VAR7);

char VAR8[] = {'', '', '', ''};
FUN6(VAR3);
FUN5(VAR3, VAR8, (int)sizeof(VAR8));
FUN2("", FUN4(VAR3), VAR3->VAR7);

FUN7(VAR3);
VAR3 = FUN3();
char *VAR9 = malloc(*VAR1);
memset(VAR9, '', *VAR1);
FUN5(VAR3, VAR9, *VAR1);
FUN2("", FUN4(VAR3), VAR3->VAR7);

free(VAR9);
FUN7(VAR3);

VAR3 = FUN3();
VAR9 = malloc(*VAR1 + 1);
memset(VAR9, '', *VAR1 + 1);
FUN5(VAR3, VAR9, *VAR1 + 1);
FUN2("", FUN4(VAR3), VAR3->VAR7);

free(VAR9);
FUN7(VAR3);

VAR3 = FUN3();
FUN8(VAR3, VAR10);
FUN2("", FUN4(VAR3), VAR3->VAR7);
FUN7(VAR3);

FUN2("", VAR5);
}