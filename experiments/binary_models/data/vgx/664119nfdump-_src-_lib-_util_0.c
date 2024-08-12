char *FUN1(time_t VAR1) {
struct VAR2 *VAR3;
static char VAR4[32];

VAR3 = FUN2(&VAR1);
VAR3->VAR5 = -1;
snprintf(VAR4, 31, "", VAR3->VAR6 + 1900, VAR3->VAR7 + 1, VAR3->VAR8, VAR3->VAR9, VAR3->VAR10,
VAR3->VAR11);
VAR4[31] = '';

return VAR4;

}