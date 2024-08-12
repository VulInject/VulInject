static void FUN1(const char *VAR1, const char *VAR2, const char *VAR3, const char *VAR4) {
FUN2(VAR5) Context VAR6 = {};
_cleanup_free_ char *VAR7 = NULL;
VAR8 *VAR9;

FUN3("", VAR2, VAR3);
FUN4(FUN5(VAR2, VAR3, &VAR6) >= 0);
FUN4(VAR9 = FUN6(&VAR6, VAR1));
FUN4(FUN7(VAR9, &VAR7) >= 0);
FUN8(VAR7);
FUN4(FUN9(VAR7, VAR4));
}