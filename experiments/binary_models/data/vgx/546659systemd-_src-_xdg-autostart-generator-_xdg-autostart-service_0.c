static int FUN1(
const char *VAR1,
const char *VAR2,
unsigned VAR3,
const char *VAR4,
unsigned VAR5,
const char *VAR6,
int VAR7,
const char *VAR8,
void *VAR9,
void *VAR10) {

bool *VAR11 = FUN2(VAR9);
int VAR12;

assert(VAR2);
assert(VAR6);
assert(VAR8);

VAR12 = FUN3(VAR8);
if (VAR12 < 0)
return FUN4(VAR1, VAR13, VAR2, VAR3, FUN5(VAR14), "", VAR8);
*VAR11 = VAR12;
return 0;
}