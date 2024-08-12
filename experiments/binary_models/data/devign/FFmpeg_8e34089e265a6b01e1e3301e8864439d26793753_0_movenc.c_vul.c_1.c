static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6)
{
    int64_t VAR7 = FUN2(VAR2), VAR8, VAR9;
    int64_t VAR10, VAR11, VAR12;
    int VAR13, VAR14, VAR15;
    if (VAR4->VAR16)
    {
        VAR15 = 1;
        VAR10 = VAR4->VAR17 + VAR4->VAR18 + VAR4->VAR19[0].VAR20;
        VAR11 = VAR4->VAR21 - (VAR4->VAR19[0].VAR22 + VAR4->VAR19[0].VAR20);
        VAR13 = VAR4->VAR19[0].VAR23 & VAR24;
        if (VAR10 < 0)
        {
            VAR11 += VAR10;
            VAR10 = 0;
        }
    }
    else
    {
        VAR15 = VAR4->VAR25;
        VAR10 = VAR4->VAR26[0].VAR27;
    }
    FUN3(VAR2, 0);
    FUN4(VAR2, "");
    FUN5(VAR2, 1);
    FUN6(VAR2, 0);
    FUN3(VAR2, VAR4->VAR28);
    FUN3(VAR2, VAR4->VAR29);
    FUN7(VAR2, VAR10);
    VAR8 = FUN2(VAR2);
    FUN7(VAR2, 0);
    FUN8(VAR2, 0);
    FUN8(VAR2, VAR15);
    for (VAR14 = 0; VAR14 < VAR15; VAR14++)
    {
        if (!VAR4->VAR16)
        {
            if (VAR14 > 1 && VAR4->VAR26[VAR14].VAR12 != VAR4->VAR26[VAR14 - 1].VAR12 + VAR4->VAR26[VAR14 - 1].VAR30)
            {
                FUN9(NULL, VAR31, "");
            }
            VAR11 = VAR4->VAR26[VAR14].VAR11;
            VAR5 = VAR4->VAR26[VAR14].VAR30;
            VAR13 = 1;
        }
        FUN3(VAR2, (0 << 31) | (VAR5 & 0x7fffffff));
        FUN3(VAR2, VAR11);
        FUN3(VAR2, (VAR13 << 31) | (0 << 28) | 0);
    }
    VAR9 = FUN2(VAR2);
    VAR12 = VAR7 + VAR6 - VAR9;
    FUN10(VAR2, VAR8, VAR32);
    FUN7(VAR2, VAR12);
    FUN10(VAR2, VAR9, VAR32);
    return FUN11(VAR2, VAR7);