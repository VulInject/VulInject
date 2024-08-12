static void
FUN1(const VAR1 *VAR2, VAR3 *VAR4, size_t VAR5) {
gchar VAR6[128];
gchar VAR7[128];
gchar VAR8[128];
gchar VAR9[128];
gchar VAR10[128];
gchar VAR11[128];

char *VAR12  = FUN2(VAR2->VAR13);
char *VAR14 = FUN3(VAR2->VAR13, VAR2->VAR15);

FUN4(VAR2->VAR13, VAR16, "", VAR6, sizeof(VAR6) - 1);
FUN4(VAR2->VAR17, VAR16, "", VAR7, sizeof(VAR7) - 1);
FUN4(VAR2->VAR18, VAR19, "", VAR8, sizeof(VAR8) - 1);

switch (VAR2->VAR20) {
case VAR21:
case VAR22:
FUN4(VAR2->VAR23, VAR16, "", VAR9, sizeof(VAR9) - 1);
if (VAR12 != NULL) {
snprintf(VAR4, VAR5, "", VAR6, VAR12, VAR8, VAR9, VAR7);
} else {
snprintf(VAR4, VAR5, "", VAR6, VAR8, VAR9, VAR7);
}
break;

case VAR24:
case VAR25:
FUN4(VAR2->VAR15, VAR16, "", VAR10, sizeof(VAR10) - 1);
if (VAR12 != NULL) {
snprintf(VAR11, sizeof(VAR11) - 1, "", VAR6, VAR12, VAR8, VAR7, VAR10);
} else {
snprintf(VAR11, sizeof(VAR11) - 1, "", VAR6, VAR8, VAR7, VAR10);
}
if (VAR14 != NULL) {
snprintf(VAR4, VAR5, "", VAR11, VAR14);
}
break;
}
}