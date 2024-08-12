static VAR1
FUN1(VAR2 **VAR3, VAR4 **VAR5, VAR6 **VAR7)
{
if ((*VAR3 = FUN2(VAR8)) == NULL)
return (VAR9);

if (FUN3(*VAR3) != 0) {
FUN4(*VAR3, NULL, NULL, NULL);
return (FUN5());
}

if ((*VAR5 = FUN6(*VAR3)) == NULL) {
FUN4(*VAR3, NULL, NULL, NULL);
return (FUN5());
}

if (FUN7(*VAR3, VAR10, NULL, *VAR5, NULL, NULL,
NULL, VAR11) != 0) {
FUN4(*VAR3, *VAR5, NULL, NULL);
return (FUN5());
}

if ((*VAR7 = FUN8(*VAR3)) == NULL) {
FUN4(*VAR3, *VAR5, NULL, NULL);
return (FUN5());
}

if (FUN9(*VAR5, VAR12, *VAR7) != 0) {
FUN4(*VAR3, *VAR5, *VAR7, NULL);
return (FUN5());
}
return (VAR13);
}