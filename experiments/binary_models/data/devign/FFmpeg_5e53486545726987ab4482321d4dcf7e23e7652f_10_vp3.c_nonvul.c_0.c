static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, const VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    GetBitContext VAR11;
    static int VAR12 = 0;
    int VAR13;
    FUN2(&VAR11, VAR6, VAR7 * 8);
    if (VAR9->VAR14 && FUN3(&VAR11))
    {
        FUN4(VAR2, VAR15, "");
        return -1;
    }
    VAR9->VAR16 = !FUN3(&VAR11);
    if (!VAR9->VAR14)
        FUN5(&VAR11, 1);
    VAR9->VAR17 = VAR9->VAR18;
    VAR9->VAR19 = 0;
    do
    {
        VAR9->VAR20[VAR9->VAR19++] = FUN6(&VAR11, 6);
    } while (VAR9->VAR14 >= 0x030200 && VAR9->VAR19 < 3 && FUN3(&VAR11));
    VAR9->VAR18 = VAR9->VAR20[0];
    if (VAR9->VAR2->VAR21 & VAR22)
        FUN4(VAR9->VAR2, VAR23, "", VAR9->VAR16 ? "" : "", VAR12, VAR9->VAR18);
    VAR12++;
    if (VAR9->VAR18 != VAR9->VAR17)
    {
        FUN7(VAR9);
        FUN8(VAR9);
    }
    if (VAR9->VAR16)
    {
        if (!VAR9->VAR14)
        {
            FUN5(&VAR11, 4);
            FUN5(&VAR11, 4);
            if (VAR9->VAR24)
            {
                VAR9->VAR24 = FUN6(&VAR11, 5);
                if (VAR12 == 1)
                    FUN4(VAR9->VAR2, VAR25, "", VAR9->VAR24);
            }
        }
        if (VAR9->VAR24 || VAR9->VAR14)
        {
            if (FUN3(&VAR11))
                FUN4(VAR9->VAR2, VAR15, "");
            FUN5(&VAR11, 2);
        }
        if (VAR9->VAR26.VAR3[0] == VAR9->VAR27.VAR3[0])
        {
            if (VAR9->VAR27.VAR3[0])
                VAR2->FUN9(VAR2, &VAR9->VAR27);
            VAR9->VAR26 = VAR9->VAR27;
        }
        else
        {
            if (VAR9->VAR27.VAR3[0])
                VAR2->FUN9(VAR2, &VAR9->VAR27);
            if (VAR9->VAR26.VAR3[0])
                VAR2->FUN9(VAR2, &VAR9->VAR26);
        }
        VAR9->VAR27.VAR28 = 3;
        if (VAR2->FUN10(VAR2, &VAR9->VAR27) < 0)
        {
            FUN4(VAR9->VAR2, VAR15, "");
            return -1;
        }
        VAR9->VAR29 = VAR9->VAR27;
        if (!VAR9->VAR30)
        {
            if (!VAR9->VAR31)
                FUN11(VAR9);
            else
                FUN12(VAR9);
            VAR9->VAR30 = 1;
        }
    }
    else
    {
        VAR9->VAR29.VAR28 = 3;
        if (!VAR9->VAR30)
        {
            FUN4(VAR9->VAR2, VAR15, "");
            return -1;
        }
        if (VAR2->FUN10(VAR2, &VAR9->VAR29) < 0)
        {
            FUN4(VAR9->VAR2, VAR15, "");
            return -1;
        }
    }
    VAR9->VAR29.VAR32 = VAR9->VAR32;
    VAR9->VAR29.VAR33 = 0;
    {
        VAR34 FUN13(VAR9, &VAR11);
        FUN14("")
    }
    if (!VAR9->VAR16)
    {
        memcpy(VAR9->VAR29.VAR3[0], VAR9->VAR27.VAR3[0], VAR9->VAR29.VAR35[0] * VAR9->VAR36);
        memcpy(VAR9->VAR29.VAR3[1], VAR9->VAR27.VAR3[1], VAR9->VAR29.VAR35[1] * VAR9->VAR36 / 2);
        memcpy(VAR9->VAR29.VAR3[2], VAR9->VAR27.VAR3[2], VAR9->VAR29.VAR35[2] * VAR9->VAR36 / 2);
    }
    else
    {
        {
            START_TIMER if (FUN15(VAR9, &VAR11))
            {
                FUN4(VAR9->VAR2, VAR15, "");
                return -1;
            }
            FUN14("")
        }
        {
            START_TIMER if (FUN16(VAR9, &VAR11))
            {
                FUN4(VAR9->VAR2, VAR15, "");
                return -1;
            }
            FUN14("")
        }
        {
            START_TIMER if (FUN17(VAR9, &VAR11))
            {
                FUN4(VAR9->VAR2, VAR15, "");
                return -1;
            }
            FUN14("")
        }
        {
            START_TIMER if (FUN18(VAR9, &VAR11))
            {
                FUN4(VAR9->VAR2, VAR15, "");
                return -1;
            }
            FUN14("")
        }
        {
            VAR34 FUN19(VAR9, 0, VAR9->VAR37, VAR9->VAR38);
            if ((VAR2->VAR39 & VAR40) == 0)
            {
                FUN19(VAR9, VAR9->VAR41[1], VAR9->VAR37 / 2, VAR9->VAR38 / 2);
                FUN19(VAR9, VAR9->VAR41[2], VAR9->VAR37 / 2, VAR9->VAR38 / 2);
            }
            FUN14("")
        }
        {
            START_TIMER for (VAR13 = 0; VAR13 < VAR9->VAR42; VAR13++) FUN20(VAR9, VAR13);
            FUN14("")
        }
        {
            VAR34 FUN21(VAR9);
            FUN14("")
        }
    }
    *VAR4 = sizeof(VAR43);
    *(VAR43 *)VAR3 = VAR9->VAR29;
    if ((VAR9->VAR26.VAR3[0]) && (VAR9->VAR26.VAR3[0] != VAR9->VAR27.VAR3[0]))
        VAR2->FUN9(VAR2, &VAR9->VAR26);
    VAR9->VAR26 = VAR9->VAR29;
    VAR9->VAR29.VAR3[0] = NULL;
    return VAR7;
}