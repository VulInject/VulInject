static void
FUN1(VAR1 *VAR2, const char *VAR3)
{
size_t VAR4;
size_t VAR5 = 64;

if (VAR2->VAR6 != VAR7) {
return;
}

if ((VAR4 = strlen(VAR3)) < 1) {
return;
}


if (VAR4 >= VAR8 - VAR2->VAR9 - 1) {
VAR2->VAR6 = VAR10;
return;
}
size_t VAR11 = VAR2->VAR9 + VAR4;

if (VAR11 + 1 >= VAR2->VAR12) {
size_t VAR13 = VAR2->VAR12;
char *VAR14;


while (VAR13 < VAR11 + 1) {
if (VAR5 >= VAR8 - VAR13) {
VAR2->VAR6 = VAR10;
return;
}
VAR13 += VAR5;
}

VAR14 = FUN2(VAR13, VAR2->VAR15);
VAR14 = malloc(VAR13);
if (VAR14 == NULL) {
VAR2->VAR6 = VAR16;
return;
}

if (VAR2->VAR17 != NULL) {
bcopy(VAR2->VAR17, VAR14, VAR2->VAR9 + 1);
FUN3(VAR2->VAR17, VAR2->VAR12);
free(VAR2->VAR17);
}

VAR2->VAR17 = VAR14;
VAR2->VAR12 = VAR13;
}

bcopy(VAR3, VAR2->VAR17 + VAR2->VAR9, VAR4 + 1);
VAR2->VAR9 = VAR11;
}