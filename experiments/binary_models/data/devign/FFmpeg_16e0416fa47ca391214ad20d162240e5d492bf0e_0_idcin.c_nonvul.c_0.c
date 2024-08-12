static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR4;
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9;
    unsigned int VAR10, VAR11;
    unsigned int VAR12, VAR13, VAR14;
    int VAR15;
    VAR10 = FUN2(VAR4);
    VAR11 = FUN2(VAR4);
    VAR12 = FUN2(VAR4);
    VAR13 = FUN2(VAR4);
    VAR14 = FUN2(VAR4);
    if (VAR2->VAR4->VAR16)
    {
        FUN3(VAR2, VAR17, "");
        return VAR2->VAR4->VAR18 ? VAR2->VAR4->VAR18 : VAR19;
    }
    if (FUN4(VAR10, VAR11, 0, VAR2) < 0)
        return VAR20;
    if (VAR12 > 0)
    {
        if (VAR12 < 14 || VAR12 > VAR21)
        {
            FUN3(VAR2, VAR17, "", VAR12);
            return VAR20;
        }
        if (VAR13 < 1 || VAR13 > 2)
        {
            FUN3(VAR2, VAR17, "", VAR13);
            return VAR20;
        }
        if (VAR14 < 1 || VAR14 > 2)
        {
            FUN3(VAR2, VAR17, "", VAR14);
            return VAR20;
        }
        VAR6->VAR22 = 1;
    }
    else
    {
        VAR6->VAR22 = 0;
    }
    VAR9 = FUN5(VAR2, NULL);
    if (!VAR9)
        return FUN6(VAR23);
    FUN7(VAR9, 33, 1, VAR24);
    VAR9->VAR25 = 0;
    VAR6->VAR26 = VAR9->VAR27;
    VAR9->VAR28->VAR29 = VAR30;
    VAR9->VAR28->VAR31 = VAR32;
    VAR9->VAR28->VAR33 = 0;
    VAR9->VAR28->VAR10 = VAR10;
    VAR9->VAR28->VAR11 = VAR11;
    VAR9->VAR28->VAR34 = FUN8(VAR35);
    if (!VAR9->VAR28->VAR34)
        return FUN6(VAR23);
    VAR9->VAR28->VAR36 = VAR35;
    VAR15 = FUN9(VAR4, VAR9->VAR28->VAR34, VAR35);
    if (VAR15 < 0)
    {
        return VAR15;
    }
    else if (VAR15 != VAR35)
    {
        FUN3(VAR2, VAR17, "");
        return FUN6(VAR37);
    }
    if (VAR6->VAR22)
    {
        VAR6->VAR22 = 1;
        VAR9 = FUN5(VAR2, NULL);
        if (!VAR9)
            return FUN6(VAR23);
        FUN7(VAR9, 63, 1, VAR12);
        VAR9->VAR25 = 0;
        VAR6->VAR38 = VAR9->VAR27;
        VAR9->VAR28->VAR29 = VAR39;
        VAR9->VAR28->VAR33 = 1;
        VAR9->VAR28->VAR14 = VAR14;
        VAR9->VAR28->VAR40 = VAR14 > 1 ? VAR41 : VAR42;
        VAR9->VAR28->VAR12 = VAR12;
        VAR9->VAR28->VAR43 = VAR13 * 8;
        VAR9->VAR28->VAR44 = VAR12 * VAR13 * 8 * VAR14;
        VAR9->VAR28->VAR45 = VAR6->VAR45 = VAR13 * VAR14;
        if (VAR13 == 1)
            VAR9->VAR28->VAR31 = VAR46;
        else
            VAR9->VAR28->VAR31 = VAR47;
        if (VAR12 % 14 != 0)
        {
            VAR6->VAR48 = (VAR12 / 14) * VAR13 * VAR14;
            VAR6->VAR49 = (VAR12 / 14 + 1) * VAR13 * VAR14;
        }
        else
        {
            VAR6->VAR48 = VAR6->VAR49 = (VAR12 / 14) * VAR13 * VAR14;
        }
        VAR6->VAR50 = 0;
    }
    VAR6->VAR51 = 1;
    VAR6->VAR52 = FUN10(VAR2->VAR4);
    return 0;
}