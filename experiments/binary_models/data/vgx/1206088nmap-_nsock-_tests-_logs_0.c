static int FUN1(void *VAR1) {
struct VAR2 *VAR3 = (struct VAR2 *)VAR1;
nsock_loglevel_t VAR4;
int VAR5 = 0;

FUN2(VAR6);

for (VAR4 = VAR7; VAR4 <= VAR8; VAR4++) {
VAR5 = FUN3(VAR3, VAR7);
if (VAR5)
return VAR5;
}

return 0;
}


const struct test_case VAR9 = {
.VAR10     = "",
.VAR11    = VAR12,
.VAR13      = VAR14,
.VAR15 = VAR16
};