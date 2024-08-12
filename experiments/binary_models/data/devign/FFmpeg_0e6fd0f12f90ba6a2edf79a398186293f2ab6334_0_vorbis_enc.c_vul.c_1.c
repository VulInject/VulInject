static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5;
    int VAR6 = 0;
    FUN2(VAR2, 24, 0x564342);
    FUN2(VAR2, 16, VAR4->VAR7);
    FUN2(VAR2, 24, VAR4->VAR8);
    for (VAR5 = 1; VAR5 < VAR4->VAR8; VAR5++)
        if (VAR4->VAR9[VAR5].VAR10 < VAR4->VAR9[VAR5 - 1].VAR10)
            break;
    if (VAR5 == VAR4->VAR8)
        VAR6 = 1;
    FUN2(VAR2, 1, VAR6);
    if (VAR6)
    {
        int VAR10 = VAR4->VAR9[0].VAR10;
        FUN2(VAR2, 5, VAR10);
        VAR5 = 0;
        while (VAR5 < VAR4->VAR8)
        {
            int VAR11;
            for (VAR11 = 0; VAR11 + VAR5 < VAR4->VAR8; VAR11++)
                if (VAR4->VAR9[VAR11 + VAR5].VAR10 != VAR10)
                    break;
            FUN2(VAR2, FUN3(VAR4->VAR8 - VAR5), VAR11);
            VAR5 += VAR11;
            VAR10++;
        }
    }
    else
    {
        int VAR12 = 0;
        for (VAR5 = 0; VAR5 < VAR4->VAR8; VAR5++)
            if (!VAR4->VAR9[VAR5].VAR10)
                break;
        if (VAR5 != VAR4->VAR8)
            VAR12 = 1;
        FUN2(VAR2, 1, VAR12);
        for (VAR5 = 0; VAR5 < VAR4->VAR8; VAR5++)
        {
            if (VAR12)
                FUN2(VAR2, 1, !!VAR4->VAR9[VAR5].VAR10);
            if (VAR4->VAR9[VAR5].VAR10)
                FUN2(VAR2, 5, VAR4->VAR9[VAR5].VAR10 - 1);
        }
    }
    FUN2(VAR2, 4, VAR4->VAR13);
    if (VAR4->VAR13)
    {
        int VAR14 = FUN4(VAR4->VAR13, VAR4->VAR7, VAR4->VAR8);
        int VAR15 = FUN3(VAR4->VAR16[0]);
        for (VAR5 = 1; VAR5 < VAR14; VAR5++)
            VAR15 = FUN5(VAR15, FUN3(VAR4->VAR16[VAR5]));
        FUN6(VAR2, VAR4->VAR17);
        FUN6(VAR2, VAR4->VAR18);
        FUN2(VAR2, 4, VAR15 - 1);
        FUN2(VAR2, 1, VAR4->VAR19);
        for (VAR5 = 0; VAR5 < VAR14; VAR5++)
            FUN2(VAR2, VAR15, VAR4->VAR16[VAR5]);
    }
}