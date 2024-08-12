static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6, int VAR7)
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
        int VAR16 = FUN5(&VAR11, 7);
        FUN6(&VAR11, 6 * 8);
        switch (VAR16)
        {
        case 1:
            FUN7(VAR2, &VAR11);
            break;
        case 2:
            FUN8(VAR2, &VAR11);
            FUN9(VAR9);
            break;
        default:
            FUN4(VAR2, VAR15, "", VAR16);
        }
        return VAR7;
    }
    VAR9->VAR17 = !FUN3(&VAR11);
    if (!VAR9->VAR14)
        FUN6(&VAR11, 1);
    VAR9->VAR18 = VAR9->VAR19;
    VAR9->VAR19 = FUN5(&VAR11, 6);
    if (VAR9->VAR14 >= 0x030200)
        FUN10(&VAR11);
    if (VAR9->VAR2->VAR20 & VAR21)
        FUN4(VAR9->VAR2, VAR22, "", VAR9->VAR17 ? "" : "", VAR12, VAR9->VAR19);
    VAR12++;
    if (VAR9->VAR19 != VAR9->VAR18)
    {
        FUN9(VAR9);
        FUN11(VAR9);
    }
    if (VAR9->VAR17)
    {
        if (!VAR9->VAR14)
        {
            FUN6(&VAR11, 4);
            FUN6(&VAR11, 4);
            if (VAR9->VAR23)
            {
                VAR9->VAR23 = FUN5(&VAR11, 5);
                if (VAR12 == 1)
                    FUN4(VAR9->VAR2, VAR24, "", VAR9->VAR23);
            }
        }
        if (VAR9->VAR23 || VAR9->VAR14)
        {
            if (FUN3(&VAR11))
                FUN4(VAR9->VAR2, VAR15, "");
            FUN6(&VAR11, 2);
        }
        if (VAR9->VAR25.VAR3[0] == VAR9->VAR26.VAR3[0])
        {
            if (VAR9->VAR26.VAR3[0])
                VAR2->FUN12(VAR2, &VAR9->VAR26);
            VAR9->VAR25 = VAR9->VAR26;
        }
        else
        {
            if (VAR9->VAR26.VAR3[0])
                VAR2->FUN12(VAR2, &VAR9->VAR26);
            if (VAR9->VAR25.VAR3[0])
                VAR2->FUN12(VAR2, &VAR9->VAR25);
        }
        VAR9->VAR26.VAR27 = 3;
        if (VAR2->FUN13(VAR2, &VAR9->VAR26) < 0)
        {
            FUN4(VAR9->VAR2, VAR15, "");
            return -1;
        }
        memcpy(&VAR9->VAR28, &VAR9->VAR26, sizeof(VAR29));
        if (!VAR9->VAR30)
        {
            if (!VAR9->VAR31)
                FUN14(VAR9);
            else
                FUN15(VAR9);
        }
    }
    else
    {
        VAR9->VAR28.VAR27 = 3;
        if (VAR2->FUN13(VAR2, &VAR9->VAR28) < 0)
        {
            FUN4(VAR9->VAR2, VAR15, "");
            return -1;
        }
    }
    VAR9->VAR28.VAR32 = VAR9->VAR32;
    VAR9->VAR28.VAR33 = 0;
    {
        VAR34 FUN16(VAR9, &VAR11);
        FUN17("")
    }
    if (!VAR9->VAR17)
    {
        memcpy(VAR9->VAR28.VAR3[0], VAR9->VAR26.VAR3[0], VAR9->VAR28.VAR35[0] * VAR9->VAR36);
        memcpy(VAR9->VAR28.VAR3[1], VAR9->VAR26.VAR3[1], VAR9->VAR28.VAR35[1] * VAR9->VAR36 / 2);
        memcpy(VAR9->VAR28.VAR3[2], VAR9->VAR26.VAR3[2], VAR9->VAR28.VAR35[2] * VAR9->VAR36 / 2);
    }
    else
    {
        {
            START_TIMER if (FUN18(VAR9, &VAR11))
            {
                FUN4(VAR9->VAR2, VAR15, "");
                return -1;
            }
            FUN17("")
        }
        {
            START_TIMER if (FUN19(VAR9, &VAR11))
            {
                FUN4(VAR9->VAR2, VAR15, "");
                return -1;
            }
            FUN17("")
        }
        {
            START_TIMER if (FUN20(VAR9, &VAR11))
            {
                FUN4(VAR9->VAR2, VAR15, "");
                return -1;
            }
            FUN17("")
        }
        {
            START_TIMER if (FUN21(VAR9, &VAR11))
            {
                FUN4(VAR9->VAR2, VAR15, "");
                return -1;
            }
            FUN17("")
        }
        {
            VAR34 FUN22(VAR9, 0, VAR9->VAR37, VAR9->VAR38);
            if ((VAR2->VAR39 & VAR40) == 0)
            {
                FUN22(VAR9, VAR9->VAR41, VAR9->VAR37 / 2, VAR9->VAR38 / 2);
                FUN22(VAR9, VAR9->VAR42, VAR9->VAR37 / 2, VAR9->VAR38 / 2);
            }
            FUN17("")
        }
        {
            START_TIMER for (VAR13 = 0; VAR13 < VAR9->VAR43; VAR13++) FUN23(VAR9, VAR13);
            FUN17("")
        }
        {
            VAR34 FUN24(VAR9);
            FUN17("")
        }
    }
    *VAR4 = sizeof(VAR29);
    *(VAR29 *)VAR3 = VAR9->VAR28;
    if ((VAR9->VAR25.VAR3[0]) && (VAR9->VAR25.VAR3[0] != VAR9->VAR26.VAR3[0]))
        VAR2->FUN12(VAR2, &VAR9->VAR25);
    memcpy(&VAR9->VAR25, &VAR9->VAR28, sizeof(VAR29));
    VAR9->VAR28.VAR3[0] = NULL;
    return VAR7;
}