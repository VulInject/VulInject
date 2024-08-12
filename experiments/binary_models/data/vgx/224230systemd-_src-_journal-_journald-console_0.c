static bool FUN1(void) {

static int VAR1 = -1;

if (FUN2(VAR1 < 0)) {
_cleanup_free_ char *VAR2 = NULL;

VAR1 =
FUN3("", &VAR2) >= 0
&& FUN4(VAR2) > 0;
}

return VAR1;
}