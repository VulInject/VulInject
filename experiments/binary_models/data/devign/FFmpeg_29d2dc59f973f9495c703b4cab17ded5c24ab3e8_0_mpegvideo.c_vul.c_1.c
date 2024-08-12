int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    const int VAR6 = VAR2->VAR7 * (VAR2->VAR8 + 1) + 1;
    const int VAR9 = VAR2->VAR7 * VAR2->VAR8;
    const int VAR10 = VAR2->VAR11 * VAR2->VAR8 * 2;
    const int VAR12 = VAR2->VAR13 * VAR2->VAR8 * 4;
    int VAR14;
    if (VAR5)
    {
        assert(VAR4->VAR15[0]);
        assert(VAR4->VAR16 == 0 || VAR4->VAR16 == VAR17);
        VAR4->VAR16 = VAR17;
    }
    else
    {
        int VAR18;
        assert(!VAR4->VAR15[0]);
        VAR18 = VAR2->VAR19->FUN2(VAR2->VAR19, (VAR20 *)VAR4);
        if (VAR18 < 0 || !VAR4->VAR21 || !VAR4->VAR16 || !VAR4->VAR15[0])
        {
            FUN3(VAR2->VAR19, VAR22, "", VAR18, VAR4->VAR21, VAR4->VAR16, VAR4->VAR15[0]);
            return -1;
        }
        if (VAR2->VAR23 && (VAR2->VAR23 != VAR4->VAR23[0] || VAR2->VAR24 != VAR4->VAR23[1]))
        {
            FUN3(VAR2->VAR19, VAR22, "");
            return -1;
        }
        if (VAR4->VAR23[1] != VAR4->VAR23[2])
        {
            FUN3(VAR2->VAR19, VAR22, "");
            return -1;
        }
        VAR2->VAR23 = VAR4->VAR23[0];
        VAR2->VAR24 = VAR4->VAR23[1];
    }
    if (VAR4->VAR25 == NULL)
    {
        if (VAR2->VAR26)
        {
            FUN4(VAR4->VAR27, VAR9 * sizeof(VAR28))
            FUN4(VAR4->VAR29, VAR9 * sizeof(VAR28)) FUN4(VAR4->VAR30, VAR9 * sizeof(VAR31))
        }
        FUN4(VAR4->VAR32, VAR9 * sizeof(VAR33) + 2)
        FUN4(VAR4->VAR25, VAR9 * sizeof(VAR33)) FUN4(VAR4->VAR34, VAR6 * sizeof(VAR35)) VAR4->VAR36 = VAR4->VAR34 + VAR2->VAR7 + 1;
        if (VAR2->VAR37 == VAR38)
        {
            for (VAR14 = 0; VAR14 < 2; VAR14++)
            {
                FUN4(VAR4->VAR39[VAR14], 2 * (VAR12 + 4) * sizeof(VAR28))
                VAR4->VAR40[VAR14] = VAR4->VAR39[VAR14] + 4;
                FUN4(VAR4->VAR41[VAR14], VAR10 * sizeof(VAR33))
            }
            VAR4->VAR42 = 2;
        }
        else if (VAR2->VAR37 == VAR43 || VAR2->VAR26 || (VAR2->VAR19->VAR44 & VAR45) || (VAR2->VAR19->VAR46))
        {
            for (VAR14 = 0; VAR14 < 2; VAR14++)
            {
                FUN4(VAR4->VAR39[VAR14], 2 * (VAR10 + 4) * sizeof(VAR28))
                VAR4->VAR40[VAR14] = VAR4->VAR39[VAR14] + 4;
                FUN4(VAR4->VAR41[VAR14], VAR10 * sizeof(VAR33))
            }
            VAR4->VAR42 = 3;
        }
        if (VAR2->VAR19->VAR44 & VAR47)
        {
            FUN4(VAR4->VAR48, 64 * VAR9 * sizeof(VAR49) * 6)
        }
        VAR4->VAR50 = VAR2->VAR7;
        FUN4(VAR4->VAR51, 1 * sizeof(VAR52))
    }
    memmove(VAR2->VAR53 + 1, VAR2->VAR53, VAR54 - 1);
    VAR2->VAR53[0] = VAR2->VAR55;
    if (VAR4->VAR21 < VAR54 && VAR2->VAR53[VAR4->VAR21] == VAR56)
        VAR4->VAR21 = VAR57;
    return 0;
VAR58:
    return -1;
}