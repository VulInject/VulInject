static int FUN1(VAR1 *VAR2) {
VAR3 *VAR4 = FUN2(sizeof(VAR3));

if (!VAR4) return -1;
FUN3(&VAR4->VAR5);
FUN3(&VAR4->VAR6);
VAR2->VAR7 = VAR4;
return 0;
}