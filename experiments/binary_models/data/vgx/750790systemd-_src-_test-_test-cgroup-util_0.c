static void FUN1(const char *VAR1, int VAR2, const char *VAR3) {
_cleanup_free_ char *VAR4 = NULL;

FUN2(FUN3(VAR1, &VAR4) == VAR2);
FUN2(FUN4(VAR4, VAR3));
}