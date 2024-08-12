static VAR1 *FUN1(pid_t VAR2, pid_t VAR3) {
_cleanup_set_free_ VAR1 *VAR4 = NULL;
int VAR5;

VAR4 = FUN2(NULL);
if (!VAR4)
return NULL;


if (VAR2 > 0) {
VAR5 = FUN3(VAR4, FUN4(VAR2));
if (VAR5 < 0)
return NULL;
}

if (VAR3 > 0) {
VAR5 = FUN3(VAR4, FUN4(VAR3));
if (VAR5 < 0)
return NULL;
}

return FUN5(VAR4);
}