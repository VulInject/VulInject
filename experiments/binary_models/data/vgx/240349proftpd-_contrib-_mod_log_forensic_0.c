VAR1 FUN1(VAR2 *VAR3) {
VAR4 *VAR5;
int bool;

FUN2(VAR3, 1);
FUN3(VAR3, VAR6|VAR7|VAR8);

bool = FUN4(VAR3, 1);
if (bool == -1) {
FUN5(VAR3, "");
}

VAR5 = FUN6(VAR3->argv[0], 1, NULL);
VAR5->argv[0] = FUN7(VAR5->VAR9, sizeof(int));
*((int *) VAR5->argv[0]) = bool;

return FUN8(VAR3);
}