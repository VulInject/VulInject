static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    bool VAR5 = (VAR4->VAR6[VAR7] & VAR8);
    uint32_t VAR9;
    if (VAR4->VAR6[VAR10] & VAR11)
    {
        VAR4->VAR6[VAR10] &= ~VAR12;
        VAR4->VAR13[VAR10] = VAR14;
        VAR4->VAR13[VAR7] = VAR15;
    }
    FUN3();
    if (VAR4->VAR6[VAR10] & VAR16)
    {
        FUN4(&VAR2->VAR17, VAR5);
        FUN4(&VAR2->VAR18, VAR5);
    }
    else
    {
        FUN4(&VAR2->VAR17, true);
        FUN4(&VAR2->VAR18, false);
    }
    if (VAR4->VAR6[VAR10] & VAR19)
    {
        FUN4(&VAR2->VAR20, !VAR5);
        FUN4(&VAR2->VAR21, VAR5);
    }
    else
    {
        FUN4(&VAR2->VAR20, false);
        FUN4(&VAR2->VAR21, false);
    }
    if (VAR4->VAR6[VAR7] & VAR22)
    {
        switch (VAR4->VAR6[VAR7] & VAR23)
        {
        case VAR24:
            VAR9 = 1024 * 1024;
            break;
        case VAR25:
            VAR9 = 1024 * 1024 * 2;
            break;
        case VAR26:
            VAR9 = 1024 * 1024 * 8;
            break;
        default:
            VAR9 = 0;
            break;
        }
    }
    else
    {
        VAR9 = 0;
    }
    FUN5(VAR2->VAR27, &VAR2->VAR28);
    FUN4(&VAR2->VAR28, VAR9);
    FUN6(&VAR2->VAR28, VAR9);
    FUN7(VAR2->VAR27, VAR2->VAR29 - VAR9, &VAR2->VAR28, 1);
    FUN4(&VAR2->VAR30, VAR9);
    FUN6(&VAR2->VAR30, VAR9);
    FUN8(&VAR2->VAR30, VAR2->VAR29 - VAR9);
    FUN9(&VAR2->VAR30, VAR2->VAR29 - VAR9);
    FUN10();
}