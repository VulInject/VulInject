static bool FUN1(VAR1 *VAR2, NPIdentifier VAR3)
{
FUN2(FUN3(VAR4), false);

int VAR5 = FUN4(VAR4,
VAR6,
VAR7, VAR2,
VAR8, &VAR3,
VAR9);

if (VAR5 != VAR10) {
FUN5("", VAR5);
return false;
}

uint32_t VAR11;
VAR5 = FUN6(VAR4, VAR12, &VAR11, VAR9);

if (VAR5 != VAR10) {
FUN5("", VAR5);
return false;
}

return VAR11;
}