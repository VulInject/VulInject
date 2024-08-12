static VAR1 FUN1(const char *VAR2)
{
const char *VAR3;

for (VAR3 = VAR2; *VAR3; VAR3 = FUN2(VAR3)) {
const char *VAR4;

if (FUN3(VAR3, "", &VAR4) && FUN4(*VAR4))
return VAR3 - VAR2;
}

return VAR3 - VAR2;
}