enum VAR1 FUN1(
uid_t VAR2,
struct VAR3 *VAR4,
char *VAR5, size_t VAR6,
int *VAR7) {

enum nss_status VAR8;
int VAR9;

VAR10;
VAR11;

assert(VAR4);
assert(VAR7);

if (!FUN2(VAR2))
return VAR12;


if (FUN3("") <= 0) {

if (VAR2 == VAR13.VAR14)
return FUN4(VAR4, &VAR13,
FUN5(NULL),
VAR5, VAR6, VAR7);

if (VAR2 == VAR15.VAR14) {
if (!FUN6())
return VAR12;

return FUN4(VAR4, &VAR15,
NULL,
VAR5, VAR6, VAR7);
}

} else if (VAR2 == VAR13.VAR14 || VAR2 == VAR15.VAR14)
return VAR12;

VAR8 = FUN7(VAR2, VAR4, VAR5, VAR6, &VAR9);
if (FUN8(VAR8, VAR16, VAR17)) {
VAR18;
*VAR7 = VAR9;
return VAR8;
}

return VAR8;
}