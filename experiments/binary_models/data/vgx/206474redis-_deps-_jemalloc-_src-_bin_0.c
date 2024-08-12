bool
FUN1(VAR1 *VAR2) {
if (FUN2(&VAR2->VAR3, "", VAR4,
VAR5)) {
return true;
}
VAR2->VAR6 = NULL;
FUN3(&VAR2->VAR7);
FUN4(&VAR2->VAR8);
if (VAR9) {
memset(&VAR2->VAR10, 0, sizeof(VAR11));
}
return false;
}