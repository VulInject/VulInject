static void FUN1(Node VAR1) {
if (VAR1 && VAR1->VAR2 == NULL) {
if (VAR3) {
VAR1->VAR2 = VAR3->VAR2;
VAR3->VAR2 = VAR1;
} else
VAR1->VAR2 = VAR1;
VAR3 = VAR1;
}
}