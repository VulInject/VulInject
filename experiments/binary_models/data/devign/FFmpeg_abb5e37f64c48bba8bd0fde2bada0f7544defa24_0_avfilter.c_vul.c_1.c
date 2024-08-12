int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int (*VAR5)(VAR1 *, VAR3 *);
    VAR6 *VAR7 = VAR2->VAR8;
    VAR3 *VAR9;
    FUN2(NULL, VAR5);
    FUN3(NULL, VAR2, 1);
    if (!(VAR5 = VAR7->VAR5))
        VAR5 = VAR10;
    if (VAR7->VAR11 && !FUN4(VAR4))
    {
        FUN5(VAR2->VAR7, VAR12, "");
        switch (VAR2->VAR13)
        {
        case VAR14:
            VAR9 = FUN6(VAR2, VAR2->VAR15, VAR2->VAR16);
            break;
        case VAR17:
            VAR9 = FUN7(VAR2, VAR4->VAR18);
            break;
        default:
            return FUN8(VAR19);
        }
        if (!VAR9)
        {
            FUN9(&VAR4);
            return FUN8(VAR20);
        }
        FUN10(VAR9, VAR4);
        switch (VAR2->VAR13)
        {
        case VAR14:
            FUN11(VAR9->VAR21, VAR9->VAR22, VAR4->VAR21, VAR4->VAR22, VAR4->VAR23, VAR4->VAR24, VAR4->VAR25);
            break;
        case VAR17:
            FUN12(VAR9->VAR26, VAR4->VAR26, 0, 0, VAR4->VAR18, FUN13(VAR4->VAR27), VAR4->VAR23);
            break;
        default:
            return FUN8(VAR19);
        }
        FUN9(&VAR4);
    }
    else
        VAR9 = VAR4;
    return FUN14(VAR2, VAR9);
}