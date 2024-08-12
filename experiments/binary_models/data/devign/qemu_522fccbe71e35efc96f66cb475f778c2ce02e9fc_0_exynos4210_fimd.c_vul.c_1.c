static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = (VAR2 *)VAR1;
    VAR4 *VAR5 = FUN2(VAR3->VAR6);
    VAR7 *VAR8;
    int VAR9, VAR10;
    hwaddr VAR11, VAR12;
    int VAR13;
    int VAR14 = -1, VAR15 = -1, VAR16;
    bool VAR17 = false;
    VAR18 *VAR19;
    bool VAR20 = false;
    const int VAR21 = (VAR3->VAR22[2] & VAR23) + 1;
    const int VAR24 = ((VAR3->VAR22[2] >> VAR25) & VAR23) + 1;
    if (!VAR3 || !VAR3->VAR6 || !FUN3(VAR5) || !VAR3->VAR26)
    {
        return;
    }
    FUN4(VAR3);
    for (VAR9 = 0; VAR9 < VAR27; VAR9++)
    {
        VAR8 = &VAR3->VAR28[VAR9];
        if ((VAR8->VAR29 & VAR30) && VAR8->VAR19)
        {
            VAR13 = VAR8->VAR31 - VAR8->VAR32 + 1;
            VAR16 = VAR8->VAR33;
            VAR12 = VAR16 + VAR8->VAR34;
            FUN5(VAR8->VAR35.VAR36);
            VAR19 = VAR8->VAR19;
            VAR11 = VAR8->VAR35.VAR37;
            for (VAR10 = 0; VAR10 < VAR13; VAR10++)
            {
                VAR20 = FUN6(VAR8->VAR35.VAR36, VAR11, VAR16, VAR38);
                if (VAR3->VAR39 || VAR20)
                {
                    if (VAR14 == -1)
                    {
                        VAR14 = VAR10;
                    }
                    VAR15 = VAR10;
                    VAR8->FUN7(VAR8, VAR19, VAR3->VAR40 + VAR8->VAR41 * VAR42 + (VAR8->VAR32 + VAR10) * VAR21 * VAR42, VAR17);
                }
                VAR19 += VAR12;
                VAR11 += VAR12;
                VAR20 = false;
            }
            FUN8(VAR8->VAR35.VAR36, VAR8->VAR35.VAR37, VAR8->VAR43, VAR38);
            VAR17 = true;
        }
    }
    if (VAR14 >= 0)
    {
        VAR18 *VAR44;
        int VAR45;
        VAR45 = FUN3(VAR5);
        FUN9(VAR45);
        VAR45 = (VAR45 + 1) >> 3;
        VAR44 = FUN10(VAR5);
        for (VAR10 = VAR14; VAR10 <= VAR15; VAR10++)
        {
            FUN11(VAR21, VAR3->VAR40 + VAR21 * VAR10 * VAR42, VAR44 + VAR21 * VAR10 * VAR45);
        }
        FUN12(VAR3->VAR6, 0, 0, VAR21, VAR24);
    }
    VAR3->VAR39 = false;
    VAR3->VAR46[1] |= VAR47;
    if ((VAR3->VAR48[0] & VAR49) == 0)
    {
        FUN13(VAR3, false);
    }
    FUN14(VAR3);
}