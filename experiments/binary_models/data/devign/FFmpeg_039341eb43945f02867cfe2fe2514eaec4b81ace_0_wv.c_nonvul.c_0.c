static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR4;
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9;
    int VAR10;
    VAR6->VAR11 = 0;
    for (;;)
    {
        if ((VAR10 = FUN2(VAR2, VAR4, 0)) < 0)
            return VAR10;
        if (!FUN3(VAR6->VAR12))
            FUN4(VAR4, VAR6->VAR13 - 24);
        else
            break;
    }
    VAR9 = FUN5(VAR2, NULL);
    if (!VAR9)
        return FUN6(VAR14);
    VAR9->VAR15->VAR16 = VAR17;
    VAR9->VAR15->VAR18 = VAR19;
    VAR9->VAR15->VAR20 = VAR6->VAR21;
    VAR9->VAR15->VAR22 = VAR6->VAR23;
    VAR9->VAR15->VAR24 = VAR6->VAR25;
    VAR9->VAR15->VAR26 = VAR6->VAR27;
    FUN7(VAR9, 64, 1, VAR6->VAR25);
    VAR9->VAR28 = 0;
    if (VAR6->VAR29 != 0xFFFFFFFFu)
        VAR9->VAR30 = VAR6->VAR29;
    if (VAR2->VAR4->VAR31)
    {
        int64_t VAR32 = FUN8(VAR2->VAR4);
        VAR6->VAR33 = FUN9(VAR2);
        if (!FUN10(VAR2->VAR34, "", NULL, VAR35))
            FUN11(VAR2);
        FUN12(VAR2->VAR4, VAR32, VAR36);
    }
    return 0;
}