static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = (VAR2 *)VAR1;
    VAR4 *VAR5;
    int VAR6, VAR7;
    hwaddr VAR8, VAR9;
    int VAR10;
    int VAR11 = -1, VAR12 = -1, VAR13;
    bool VAR14 = false;
    VAR15 *VAR16;
    bool VAR17 = false;
    const int VAR18 = (VAR3->VAR19[2] & VAR20) + 1;
    const int VAR21 = ((VAR3->VAR19[2] >> VAR22) & VAR20) + 1;
    if (!VAR3 || !VAR3->VAR23 || !FUN2(VAR3->VAR23) || !VAR3->VAR24)
    {
        return;
    }
    FUN3(VAR3);
    for (VAR6 = 0; VAR6 < VAR25; VAR6++)
    {
        VAR5 = &VAR3->VAR26[VAR6];
        if ((VAR5->VAR27 & VAR28) && VAR5->VAR16)
        {
            VAR10 = VAR5->VAR29 - VAR5->VAR30 + 1;
            VAR13 = VAR5->VAR31;
            VAR9 = VAR13 + VAR5->VAR32;
            FUN4(VAR5->VAR33.VAR34);
            VAR16 = VAR5->VAR16;
            VAR8 = VAR5->VAR33.VAR35;
            for (VAR7 = 0; VAR7 < VAR10; VAR7++)
            {
                VAR17 = FUN5(VAR5->VAR33.VAR34, VAR8, VAR13, VAR36);
                if (VAR3->VAR37 || VAR17)
                {
                    if (VAR11 == -1)
                    {
                        VAR11 = VAR7;
                    }
                    VAR12 = VAR7;
                    VAR5->FUN6(VAR5, VAR16, VAR3->VAR38 + VAR5->VAR39 * VAR40 + (VAR5->VAR30 + VAR7) * VAR18 * VAR40, VAR14);
                }
                VAR16 += VAR9;
                VAR8 += VAR9;
                VAR17 = false;
            }
            FUN7(VAR5->VAR33.VAR34, VAR5->VAR33.VAR35, VAR5->VAR41, VAR36);
            VAR14 = true;
        }
    }
    if (VAR11 >= 0)
    {
        VAR15 *VAR42;
        int VAR43;
        VAR43 = FUN2(VAR3->VAR23);
        FUN8(VAR43);
        VAR43 = (VAR43 + 1) >> 3;
        VAR42 = FUN9(VAR3->VAR23);
        for (VAR7 = VAR11; VAR7 <= VAR12; VAR7++)
        {
            FUN10(VAR18, VAR3->VAR38 + VAR18 * VAR7 * VAR40, VAR42 + VAR18 * VAR7 * VAR43);
        }
        FUN11(VAR3->VAR23, 0, 0, VAR18, VAR21);
    }
    VAR3->VAR37 = false;
    VAR3->VAR44[1] |= VAR45;
    if ((VAR3->VAR46[0] & VAR47) == 0)
    {
        FUN12(VAR3, false);
    }
    FUN13(VAR3);
}