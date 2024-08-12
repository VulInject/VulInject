int main (void) {
FUN1 ("");
FUN1 ("",
sizeof (VAR1), FUN2 (VAR1),
(char *) &VAR1[5] - (char *) VAR1, FUN2 (VAR1[5]));
FUN1 ("",
sizeof (VAR2), FUN2 (VAR2),
(char *) &VAR2[5] - (char *) VAR1, FUN2 (VAR2[5]));
return 0;
}