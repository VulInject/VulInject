static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR4;
    int VAR5;
    switch (VAR2->VAR6)
    {
    case 0:
        VAR2->VAR7 = (VAR2->VAR8 <= 8) ? VAR9 : VAR10;
        break;
    case 1:
        VAR2->VAR7 = VAR11;
        break;
    case 2:
        VAR2->VAR7 = VAR12;
        break;
    }
    switch (VAR2->VAR6)
    {
    case 0:
        VAR2->VAR13 = (VAR2->VAR8 <= 8) ? VAR14 : VAR15;
        break;
    case 1:
        VAR2->VAR13 = VAR16;
        break;
    case 2:
        VAR2->VAR13 = VAR17;
        break;
    }
    VAR5 = VAR4->VAR18 && !(VAR4->VAR19->VAR20 >= VAR21);
    VAR4->VAR22 = 1;
    memset(VAR2->VAR23, 0, sizeof(VAR2->VAR23[0]) * 2 * VAR4->VAR24);
    for (VAR4->VAR25 = VAR4->VAR26; VAR4->VAR25 < VAR4->VAR27; VAR4->VAR25++)
    {
        VAR4->VAR28 = 0;
        FUN2(VAR4);
        for (; VAR4->VAR28 < VAR4->VAR29; VAR4->VAR28++)
        {
            FUN3(VAR4);
            if (VAR2->VAR30 == VAR31)
                FUN4(VAR2);
            else if (VAR2->VAR30 == VAR32)
                FUN5(VAR2);
            else
                FUN6(VAR2);
            if (VAR4->VAR25 != VAR4->VAR26 && VAR5 && VAR2->VAR30 == VAR33)
                FUN7(VAR2);
            if (FUN8(&VAR4->VAR34) > VAR2->VAR35 || FUN8(&VAR4->VAR34) < 0)
            {
                FUN9(VAR4, 0, VAR4->VAR26, VAR4->VAR28, VAR4->VAR25, VAR36);
                FUN10(VAR4->VAR19, VAR37, "", FUN8(&VAR4->VAR34), VAR2->VAR35, VAR4->VAR28, VAR4->VAR25);
                return;
            }
        }
        memmove(VAR2->VAR23, VAR2->VAR38, sizeof(VAR2->VAR23[0]) * VAR4->VAR24);
        memmove(VAR2->VAR39, VAR2->VAR40, sizeof(VAR2->VAR39[0]) * VAR4->VAR24);
        memmove(VAR2->VAR41, VAR2->VAR42, sizeof(VAR2->VAR41[0]) * VAR4->VAR24);
        memmove(VAR2->VAR43, VAR2->VAR44, sizeof(VAR2->VAR43[0]) * VAR4->VAR24);
        if (VAR4->VAR25 != VAR4->VAR26)
            FUN11(VAR4, (VAR4->VAR25 - 1) * 16, 16);
        VAR4->VAR22 = 0;
    }
    if (VAR5)
    {
        VAR4->VAR28 = 0;
        FUN2(VAR4);
        for (; VAR4->VAR28 < VAR4->VAR29; VAR4->VAR28++)
        {
            FUN3(VAR4);
            FUN7(VAR2);
        }
    }
    if (VAR4->VAR27 >= VAR4->VAR26)
        FUN11(VAR4, (VAR4->VAR27 - 1) * 16, 16);
    FUN9(VAR4, 0, VAR4->VAR26 << VAR2->VAR45, VAR4->VAR29 - 1, (VAR4->VAR27 << VAR2->VAR45) - 1, VAR46);
}