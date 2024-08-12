FUN1(struct VAR1 *VAR2, socklen_t VAR3, VAR4 **VAR5)
{
    char VAR6[VAR7];
    char VAR8[VAR9];
    VAR10 *VAR11;
    VAR12 *VAR13;
    int VAR14;
    VAR14 = getnameinfo((struct VAR15 *)VAR2, VAR3, VAR6, sizeof(VAR6), VAR8, sizeof(VAR8), VAR16 | VAR17);
    if (VAR14 != 0)
    {
        FUN2(VAR5, "", FUN3(VAR14));
        return NULL;
    }
    VAR11 = FUN4(VAR10, 1);
    VAR11->VAR18 = VAR19;
    VAR13 = &VAR11->VAR20.VAR13;
    VAR13->VAR6 = FUN5(VAR6);
    VAR13->VAR21 = FUN5(VAR8);
    if (VAR2->VAR22 == VAR23)
    {
        VAR13->VAR24 = VAR13->VAR25 = true;
    }
    else
    {
        VAR13->VAR26 = VAR13->VAR27 = true;
    }
    return VAR11;
}