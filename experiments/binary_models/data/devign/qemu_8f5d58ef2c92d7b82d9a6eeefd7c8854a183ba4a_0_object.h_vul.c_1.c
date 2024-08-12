void FUN1(VAR1 *VAR2, const char *VAR3, const char *VAR4, VAR1 **VAR5, void (*VAR6)(VAR1 *, const char *, VAR1 *, VAR7 **), ObjectPropertyLinkFlags VAR8, VAR7 **VAR9)
{
    VAR7 *VAR10 = NULL;
    VAR11 *VAR12 = FUN2(sizeof(*VAR12));
    VAR13 *VAR14;
    VAR15 *VAR16;
    VAR12->VAR5 = VAR5;
    VAR12->VAR6 = VAR6;
    VAR12->VAR8 = VAR8;
    VAR14 = FUN3("", VAR4);
    VAR16 = FUN4(VAR2, VAR3, VAR14, VAR17, VAR6 ? VAR18 : NULL, VAR19, VAR12, &VAR10);
    if (VAR10)
    {
        FUN5(VAR9, VAR10);
        FUN6(VAR12);
        goto VAR20;
    }
    VAR16->VAR21 = VAR22;
VAR20:
    FUN6(VAR14);
}