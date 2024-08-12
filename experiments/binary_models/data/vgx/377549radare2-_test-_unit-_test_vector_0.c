static bool FUN1(void) {
RVector VAR1;
FUN2 (&VAR1, 1, NULL, NULL);
bool VAR2 = FUN3 (&VAR1);
FUN4 (VAR2, true, "");
uint8_t VAR3 = 0;
FUN5 (&VAR1, &VAR3);
VAR2 = FUN3 (&VAR1);
FUN4 (VAR2, false, "");
FUN6 (&VAR1, &VAR3);
VAR2 = FUN3 (&VAR1);
FUN4 (VAR2, true, "");
FUN7 (&VAR1);

VAR4 *VAR5 = FUN8 (42, NULL, NULL);
VAR2 = FUN3 (&VAR1);
FUN4 (VAR2, true, "");
FUN9 (VAR5);

VAR6;
}