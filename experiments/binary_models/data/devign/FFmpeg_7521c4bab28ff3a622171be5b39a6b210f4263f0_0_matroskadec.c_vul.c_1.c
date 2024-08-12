static int FUN1(VAR1 *VAR2, int VAR3, int64_t VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    VAR9 *VAR10 = VAR7->VAR10.VAR11;
    VAR12 *VAR13 = VAR2->VAR14[VAR3];
    int VAR15, VAR16, VAR17, VAR18;
    if (VAR7->VAR19)
    {
        FUN2(VAR7);
        VAR7->VAR19 = 0;
    }
    if (!VAR13->VAR20)
        return 0;
    VAR4 = FUN3(VAR4, VAR13->VAR21[0].VAR4);
    if ((VAR16 = FUN4(VAR13, VAR4, VAR5)) < 0)
    {
        FUN5(VAR2->VAR22, VAR13->VAR21[VAR13->VAR20 - 1].VAR23, VAR24);
        VAR7->VAR25 = 0;
        while ((VAR16 = FUN4(VAR13, VAR4, VAR5)) < 0)
        {
            FUN6(VAR7);
            if (FUN7(VAR7) < 0)
                break;
        }
    }
    FUN6(VAR7);
    if (VAR16 < 0)
        return 0;
    VAR18 = VAR16;
    for (VAR15 = 0; VAR15 < VAR7->VAR10.VAR26; VAR15++)
    {
        VAR10[VAR15].VAR27.VAR28 = 0;
        VAR10[VAR15].VAR27.VAR29 = 0;
        VAR10[VAR15].VAR27.VAR30 = VAR31;
        VAR10[VAR15].VAR32 = 0;
        if (VAR10[VAR15].VAR33 == VAR34 && !VAR10[VAR15].VAR35->VAR36 != VAR37)
        {
            VAR17 = FUN4(VAR10[VAR15].VAR35, VAR13->VAR21[VAR16].VAR4, VAR38);
            if (VAR17 >= 0 && VAR13->VAR21[VAR17].VAR23 < VAR13->VAR21[VAR18].VAR23 && VAR13->VAR21[VAR16].VAR4 - VAR13->VAR21[VAR17].VAR4 < 30000000000 / VAR7->VAR39)
                VAR18 = VAR17;
        }
    }
    FUN5(VAR2->VAR22, VAR13->VAR21[VAR18].VAR23, VAR24);
    VAR7->VAR25 = 0;
    VAR7->VAR40 = !(VAR5 & VAR41);
    VAR7->VAR42 = VAR13->VAR21[VAR16].VAR4;
    VAR7->VAR43 = 0;
    FUN8(VAR2, VAR13, VAR13->VAR21[VAR16].VAR4);
    return 0;