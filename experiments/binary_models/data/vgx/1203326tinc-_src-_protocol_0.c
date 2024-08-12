bool FUN1(const char *VAR1) {
VAR2 *new, VAR3 = {0};

VAR3.VAR1 = VAR1;

if(FUN2(&VAR4, &VAR3)) {
FUN3(VAR5, VAR6, "");
return true;
} else {
new = xmalloc(sizeof(*new));
new->VAR1 = xstrdup(VAR1);
new->VAR7 = VAR8.VAR9;
FUN4(&VAR4, new);
FUN5(&VAR10, VAR11, NULL, &(struct VAR12) {
10, FUN6()
});
return false;
}
}