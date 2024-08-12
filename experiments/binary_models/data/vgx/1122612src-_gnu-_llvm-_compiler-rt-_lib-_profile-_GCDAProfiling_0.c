static void FUN1(struct VAR1* VAR2) {
struct VAR3* VAR4 = VAR2->VAR5;
struct VAR3* VAR6 = NULL;
struct VAR3* VAR7 = NULL;

while (VAR4) {
VAR7 = VAR4->VAR7;

if (VAR4->VAR8 == VAR9) {
if (VAR4 == VAR2->VAR5) {
VAR2->VAR5 = VAR7;
}

if (VAR4 == VAR2->VAR10) {
VAR2->VAR10 = VAR6;
}

if (VAR6) {
VAR6->VAR7 = VAR7;
}

free(VAR4);
} else {
VAR6 = VAR4;
}

VAR4 = VAR7;
}
}