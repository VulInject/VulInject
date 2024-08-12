static int FUN1(struct VAR1 *VAR2) {
int VAR3 = 0, VAR4;
char VAR5[20];
FUN2(VAR2, VAR6, NULL, 0);
FUN3(FUN4(VAR2, ''));
{
{
FUN5(VAR2, VAR2->VAR7 - 1, "", 0);
while (FUN6(VAR2) != '') {
snprintf(VAR5, sizeof(VAR5), "", VAR3);
VAR3++;
VAR4 = FUN7(VAR2, VAR5, strlen(VAR5));
VAR2->VAR8 =
VAR2->VAR9 + strlen(VAR2->VAR9) - strlen(VAR5) + 1 ;
VAR2->VAR10 = strlen(VAR5) - 2 ;
FUN3(FUN8(VAR2));
FUN9(VAR2, VAR4);
if (FUN6(VAR2) == '') VAR2->VAR7++;
}
FUN3(FUN4(VAR2, ''));
FUN9(VAR2, VAR11.VAR12);
FUN2(VAR2, VAR13, VAR11.VAR14, VAR2->VAR7 - VAR11.VAR14);
}
}
return 0;
}