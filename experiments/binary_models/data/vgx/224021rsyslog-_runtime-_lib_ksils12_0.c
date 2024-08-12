static void
FUN1(rsksictx VAR1) {
size_t VAR2 = 0;

if (VAR1 == NULL || VAR1->VAR3 == NULL) return;

for (VAR2 = 0; VAR2 < VAR1->VAR4; VAR2++) {
if (VAR1->VAR3[VAR2] != NULL) {
FUN2(VAR1->VAR3[VAR2]);
VAR1->VAR3[VAR2] = NULL;
}
}

VAR1->VAR4 = 0;
return;
}