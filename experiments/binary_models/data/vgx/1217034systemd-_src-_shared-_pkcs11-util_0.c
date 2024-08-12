int FUN1(
const char *VAR1,
const char *VAR2,
const char *VAR3,
VAR4 **VAR5,
char **VAR6) {

FUN2(VAR7) struct pkcs11_acquire_certificate_callback_data VAR8 = {
.VAR2 = VAR2,
.VAR3 = VAR3,
};
int VAR9;

assert(VAR1);
assert(VAR5);

VAR9 = FUN3(VAR1, VAR10, &VAR8);
if (VAR9 == -VAR11) 
return FUN4(FUN5(VAR12),
"",
VAR1);
if (VAR9 < 0)
return VAR9;

*VAR5 = FUN6(VAR8.VAR13);

if (VAR6)
*VAR6 = FUN6(VAR8.VAR14);

return 0;
}