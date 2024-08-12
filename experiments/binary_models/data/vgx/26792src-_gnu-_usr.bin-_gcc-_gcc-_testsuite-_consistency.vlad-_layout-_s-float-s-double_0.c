int main (void) {
FUN1 ("");
FUN1 ("", sizeof (VAR1), FUN2 (VAR1));
FUN1 ("",
FUN3 (struct VAR1, VAR2), FUN3 (struct VAR1, VAR3),
FUN2 (VAR1.VAR2), FUN2 (VAR1.VAR3));
return 0;
}