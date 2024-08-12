static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR5.VAR4;
    static const int VAR6[4] = {VAR7, VAR8, VAR9, VAR10};
    int VAR11, VAR12;
    if (VAR2->VAR13)
    {
        VAR2->VAR14 = FUN2(VAR4, 1);
        if (VAR2->VAR14)
            VAR2->VAR14 = 2 + FUN2(VAR4, 1);
    }
    VAR11 = FUN3(VAR4, 0, 4);
    if (VAR11 > 4 || VAR11 < 0)
        return VAR15;
    VAR2->VAR5.VAR16 = VAR6[VAR11];
    FUN4(VAR2->VAR5.VAR17, VAR18, "", VAR2->VAR5.VAR16);
    if (VAR2->VAR19)
        VAR2->VAR20 = FUN2(VAR4, 8);
    if (VAR2->VAR21)
    {
        if (!VAR2->VAR13)
            VAR2->VAR22 = FUN2(VAR4, 2);
        else
        {
            VAR2->VAR23 = FUN2(VAR4, 1);
            VAR2->VAR24 = FUN2(VAR4, 1);
        }
    }
    if (VAR2->VAR25)
    {
        for (VAR12 = 0; VAR12 < VAR2->VAR26; VAR12++)
        {
            VAR2->VAR27[VAR12] = FUN2(VAR4, 16);
            VAR2->VAR28[VAR12] = FUN2(VAR4, 16);
            VAR2->VAR29[VAR12] = FUN2(VAR4, 16);
            VAR2->VAR30[VAR12] = FUN2(VAR4, 16);
        }
        FUN5(VAR4, 16 * 4 * VAR2->VAR26);
    }
    VAR2->VAR5.VAR31 = !FUN2(VAR4, 1);
    VAR2->VAR32 = FUN2(VAR4, 1);
    if (VAR2->VAR33 == 1)
        VAR2->VAR34 = FUN2(VAR4, 1);
    switch (VAR2->VAR5.VAR16)
    {
    case VAR9:
        if (FUN6(VAR2) < 0)
            return -1;
    case VAR7:
        if (FUN7(VAR2) < 0)
            return -1;
    case VAR10:
    case VAR8:
        if (FUN8(VAR2) < 0)
            return VAR15;
    default:
        break;
    }
    return 0;
}