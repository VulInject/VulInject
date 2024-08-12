static void *FUN1(void *VAR1) {
int VAR2;
VAR3 *VAR4 = VAR1;
VAR4->VAR5 = true;
if (VAR4->VAR6 > 0) {
FUN2 (VAR4->VAR6);
} else if (VAR4->VAR6 < 0) {
FUN3 (VAR4->VAR7);
}
FUN4 (VAR4->VAR7);
do {
FUN5 (VAR4, true);
VAR2 = VAR4->FUN6 (VAR4);
if (VAR2 < 0) {
VAR4->VAR5 = false;
FUN7 (VAR4->VAR7);
return 0;
}
FUN5 (VAR4, false);
} while (VAR2);
VAR4->VAR5 = false;
FUN7 (VAR4->VAR7);
FUN8 (&VAR2);
return 0;
}