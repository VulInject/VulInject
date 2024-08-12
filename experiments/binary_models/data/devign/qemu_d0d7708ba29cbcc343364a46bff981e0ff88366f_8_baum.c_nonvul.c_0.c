static VAR1 *FUN1(const char *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 **VAR8)
{
    VAR9 *VAR10 = FUN2(VAR4->VAR11.VAR12);
    VAR13 *VAR14;
    VAR1 *VAR15;
    VAR16 *VAR17;
    SDL_SysWMinfo VAR18;
    int VAR19;
    VAR15 = FUN3(VAR10, VAR8);
    if (!VAR15)
    {
        return NULL;
    }
    VAR14 = FUN4(sizeof(VAR13));
    VAR14->VAR15 = VAR15;
    VAR15->VAR20 = VAR14;
    VAR15->VAR21 = VAR22;
    VAR15->VAR23 = VAR24;
    VAR15->VAR25 = VAR26;
    VAR17 = FUN4(FUN5());
    VAR14->VAR27 = VAR17;
    VAR14->VAR28 = FUN6(VAR17, NULL, NULL);
    if (VAR14->VAR28 == -1)
    {
        FUN7(VAR8, "", FUN8(FUN9()));
        goto VAR29;
    }
    VAR14->VAR30 = FUN10(VAR31, VAR32, VAR14);
    if (FUN11(VAR17, &VAR14->VAR33, &VAR14->VAR34) == -1)
    {
        FUN7(VAR8, "", FUN8(FUN9()));
        goto VAR35;
    }
    memset(&VAR18, 0, sizeof(VAR18));
    FUN12(&VAR18.VAR36);
    if (FUN13(&VAR18))
        VAR19 = VAR18.VAR18.VAR37.VAR38;
    else
        VAR19 = VAR39;
    if (FUN14(VAR17, VAR19, NULL) == -1)
    {
        FUN7(VAR8, "", FUN8(FUN9()));
        goto VAR35;
    }
    FUN15(VAR14->VAR28, VAR40, NULL, VAR14);
    return VAR15;
VAR35:
    FUN16(VAR14->VAR30);
    FUN17(VAR17);
VAR29:
    FUN18(VAR17);
    FUN18(VAR15);
    FUN18(VAR14);
    return NULL;
}