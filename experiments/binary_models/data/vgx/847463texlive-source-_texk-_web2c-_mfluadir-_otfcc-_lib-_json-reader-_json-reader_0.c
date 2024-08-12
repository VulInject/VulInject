static void FUN1(VAR1 *VAR2, VAR3 *VAR4) {
for (uint32_t VAR5 = 0; VAR5 < VAR2->VAR6.VAR7.VAR8; VAR5++) {
sds VAR9 =
FUN2(VAR2->VAR6.VAR7.VAR10[VAR5].VAR11, VAR2->VAR6.VAR7.VAR10[VAR5].VAR12);
if (strcmp(VAR9, "") == 0) {
FUN3(VAR4, VAR9, VAR13, 0);
} else if (strcmp(VAR9, "") == 0) {
FUN3(VAR4, VAR9, VAR13, 1);
} else {
FUN3(VAR4, VAR9, VAR14, VAR5);
}
}
}