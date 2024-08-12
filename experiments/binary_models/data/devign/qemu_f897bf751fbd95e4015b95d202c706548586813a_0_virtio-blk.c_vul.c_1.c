void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    uint32_t VAR5;
    struct VAR6 *VAR7 = VAR2->VAR8->VAR9;
    struct VAR6 *VAR10 = VAR2->VAR8->VAR11;
    unsigned VAR12 = VAR2->VAR8->VAR12;
    unsigned VAR13 = VAR2->VAR8->VAR13;
    if (VAR2->VAR8->VAR13 < 1 || VAR2->VAR8->VAR12 < 1)
    {
        FUN2("");
        FUN3(1);
    }
    if (FUN4(FUN5(VAR10, VAR13, 0, &VAR2->VAR14, sizeof(VAR2->VAR14)) != sizeof(VAR2->VAR14)))
    {
        FUN2("");
        FUN3(1);
    }
    FUN6(&VAR10, &VAR13, sizeof(VAR2->VAR14));
    if (VAR12 < 1 || VAR7[VAR12 - 1].VAR15 < sizeof(struct VAR16))
    {
        FUN2("");
        FUN3(1);
    }
    VAR2->VAR17 = (void *)VAR7[VAR12 - 1].VAR18 + VAR7[VAR12 - 1].VAR15 - sizeof(struct VAR16);
    FUN7(VAR7, &VAR12, sizeof(struct VAR16));
    VAR5 = FUN8(FUN9(VAR2->VAR19), &VAR2->VAR14.VAR5);
    if (VAR5 & VAR20)
    {
        FUN10(VAR2, VAR4);
    }
    else if (VAR5 & VAR21)
    {
        FUN11(VAR2);
    }
    else if (VAR5 & VAR22)
    {
        VAR23 *VAR24 = VAR2->VAR19;
        strncpy(VAR2->VAR8->VAR9[0].VAR18, VAR24->VAR25.VAR26 ? VAR24->VAR25.VAR26 : "", FUN12(VAR2->VAR8->VAR9[0].VAR15, VAR27));
        FUN13(VAR2, VAR28);
        FUN14(VAR2);
    }
    else if (VAR5 & VAR29)
    {
        FUN15(&VAR2->VAR30, &VAR2->VAR8->VAR11[1], VAR2->VAR8->VAR13 - 1);
        FUN16(VAR2, VAR4);
    }
    else if (VAR5 == VAR31 || VAR5 == VAR32)
    {
        FUN15(&VAR2->VAR30, &VAR2->VAR8->VAR9[0], VAR2->VAR8->VAR12 - 1);
        FUN17(VAR2);
    }
    else
    {
        FUN13(VAR2, VAR33);
        FUN14(VAR2);
    }
}