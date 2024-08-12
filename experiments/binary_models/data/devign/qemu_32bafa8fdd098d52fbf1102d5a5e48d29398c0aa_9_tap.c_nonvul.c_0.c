int FUN1(const VAR1 *VAR2, const char *VAR3, VAR4 *VAR5, VAR6 **VAR7)
{
    const VAR8 *VAR9;
    const char *VAR10, *VAR11;
    VAR12 *VAR13;
    int VAR14, VAR15;
    assert(VAR2->VAR16 == VAR17);
    VAR9 = VAR2->VAR18.VAR9.VAR19;
    VAR10 = VAR9->VAR20 ? VAR9->VAR10 : VAR21;
    VAR11 = VAR9->VAR22 ? VAR9->VAR11 : VAR23;
    VAR14 = FUN2(VAR10, VAR11, VAR7);
    if (VAR14 == -1)
    {
        return -1;
    }
    FUN3(VAR14, VAR24, VAR25);
    VAR15 = FUN4(VAR14);
    VAR13 = FUN5(VAR5, "", VAR3, VAR14, VAR15);
    snprintf(VAR13->VAR26.VAR27, sizeof(VAR13->VAR26.VAR27), "", VAR10, VAR11);
    return 0;
}