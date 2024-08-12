VAR1 FUN1(const void *VAR2, int VAR3)
{
int VAR4 = 0;
int VAR5 = 0;
int VAR6 = 0;
const char *VAR7 = NULL;
TEE_Result VAR8 = VAR9;

if (FUN2(VAR2, VAR3) == VAR10)
return VAR11;

VAR6 = FUN3(VAR2, VAR3, "");
if (VAR6 < 0)
return VAR11;

for (VAR4 = 0; VAR4 < VAR6; VAR4++) {
VAR7 = FUN4(VAR2, VAR3, "", VAR4, &VAR5);
assert(VAR7 && VAR5 > 0);

VAR8 = FUN5(VAR2, VAR3, VAR7);


if (VAR8 != VAR12)
return VAR8;
}

return VAR11;
}