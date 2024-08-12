static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR4;
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9;
    unsigned int VAR10, VAR11;
    unsigned int VAR12, VAR13, VAR14;
    VAR10 = FUN2(VAR4);
    VAR11 = FUN2(VAR4);
    VAR12 = FUN2(VAR4);
    VAR13 = FUN2(VAR4);
    VAR14 = FUN2(VAR4);
    VAR9 = FUN3(VAR2, NULL);
    if (!VAR9)
        return FUN4(VAR15);
    FUN5(VAR9, 33, 1, VAR16);
    VAR6->VAR17 = VAR9->VAR18;
    VAR9->VAR19->VAR20 = VAR21;
    VAR9->VAR19->VAR22 = VAR23;
    VAR9->VAR19->VAR24 = 0;
    VAR9->VAR19->VAR10 = VAR10;
    VAR9->VAR19->VAR11 = VAR11;
    VAR9->VAR19->VAR25 = VAR26;
    VAR9->VAR19->VAR27 = FUN6(VAR26);
    if (FUN7(VAR4, VAR9->VAR19->VAR27, VAR26) != VAR26)
        return FUN4(VAR28);
    if (VAR12)
    {
        VAR6->VAR29 = 1;
        VAR9 = FUN3(VAR2, NULL);
        if (!VAR9)
            return FUN4(VAR15);
        FUN5(VAR9, 33, 1, VAR16);
        VAR6->VAR30 = VAR9->VAR18;
        VAR9->VAR19->VAR20 = VAR31;
        VAR9->VAR19->VAR24 = 1;
        VAR9->VAR19->VAR14 = VAR14;
        VAR9->VAR19->VAR12 = VAR12;
        VAR9->VAR19->VAR32 = VAR13 * 8;
        VAR9->VAR19->VAR33 = VAR12 * VAR13 * 8 * VAR14;
        VAR9->VAR19->VAR34 = VAR13 * VAR14;
        if (VAR13 == 1)
            VAR9->VAR19->VAR22 = VAR35;
        else
            VAR9->VAR19->VAR22 = VAR36;
        if (VAR12 % 14 != 0)
        {
            VAR6->VAR37 = (VAR12 / 14) * VAR13 * VAR14;
            VAR6->VAR38 = (VAR12 / 14 + 1) * VAR13 * VAR14;
        }
        else
        {
            VAR6->VAR37 = VAR6->VAR38 = (VAR12 / 14) * VAR13 * VAR14;
            VAR6->VAR39 = 0;
        }
        else VAR6->VAR29 = 1;
        VAR6->VAR40 = 1;
        VAR6->VAR41 = 0;
        return 0