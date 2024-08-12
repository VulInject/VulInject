static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    GetBitContext VAR11;
    static int VAR12 = 0;
    FUN2(&VAR11, VAR6, VAR7 * 8);
    if (VAR9->VAR13 && FUN3(&VAR11))
    {
        int VAR14 = FUN4(&VAR11, 7);
        FUN5(&VAR11, 6 * 8);
        switch (VAR14)
        {
        case 1:
            FUN6(VAR2, VAR11);
            break;
        case 2:
            FUN7(VAR2, VAR11);
            FUN8(VAR9);
            break;
        default:
            FUN9(VAR2, VAR15, "", VAR14);
        }
        return VAR7;
    }
    VAR9->VAR16 = !FUN3(&VAR11);
    if (!VAR9->VAR13)
        FUN5(&VAR11, 1);
    VAR9->VAR17 = VAR9->VAR18;
    VAR9->VAR18 = FUN4(&VAR11, 6);
    if (VAR9->VAR13 >= 0x030200)
        FUN10(&VAR11);
    if (VAR9->VAR2->VAR19 & VAR20)
        FUN9(VAR9->VAR2, VAR21, "", VAR9->VAR16 ? "" : "", VAR12, VAR9->VAR18);
    VAR12++;
    if (VAR9->VAR18 != VAR9->VAR17)
        FUN8(VAR9);
    if (VAR9->VAR16)
    {
        if (!VAR9->VAR13)
        {
            FUN5(&VAR11, 4);
            FUN5(&VAR11, 4);
            if (VAR9->VAR22)
            {
                VAR9->VAR22 = FUN4(&VAR11, 5);
                if (VAR12 == 1)
                    FUN9(VAR9->VAR2, VAR23, "", VAR9->VAR22);
            }
        }
        if (VAR9->VAR22 || VAR9->VAR13)
        {
            if (FUN3(&VAR11))
                FUN9(VAR9->VAR2, VAR15, "");
            FUN5(&VAR11, 2);
        }
        if (VAR9->VAR24.VAR3[0] == VAR9->VAR25.VAR3[0])
        {
            if (VAR9->VAR25.VAR3[0])
                VAR2->FUN11(VAR2, &VAR9->VAR25);
            VAR9->VAR24 = VAR9->VAR25;
        }
        else
        {
            if (VAR9->VAR25.VAR3[0])
                VAR2->FUN11(VAR2, &VAR9->VAR25);
            if (VAR9->VAR24.VAR3[0])
                VAR2->FUN11(VAR2, &VAR9->VAR24);
        }
        VAR9->VAR25.VAR26 = 3;
        if (VAR2->FUN12(VAR2, &VAR9->VAR25) < 0)
        {
            FUN9(VAR9->VAR2, VAR15, "");
            return -1;
        }
        memcpy(&VAR9->VAR27, &VAR9->VAR25, sizeof(VAR28));
        if (!VAR9->VAR29)
        {
            if (!VAR9->VAR30)
                FUN13(VAR9);
            else
                FUN14(VAR9);
        }
    }
    else
    {
        VAR9->VAR27.VAR26 = 3;
        if (VAR2->FUN12(VAR2, &VAR9->VAR27) < 0)
        {
            FUN9(VAR9->VAR2, VAR15, "");
            return -1;
        }
    }
    VAR9->VAR27.VAR31 = VAR9->VAR31;
    VAR9->VAR27.VAR32 = 0;
    FUN15(VAR9, &VAR11);
    if (!VAR9->VAR16)
    {
        memcpy(VAR9->VAR27.VAR3[0], VAR9->VAR25.VAR3[0], VAR9->VAR27.VAR33[0] * VAR9->VAR34);
        memcpy(VAR9->VAR27.VAR3[1], VAR9->VAR25.VAR3[1], VAR9->VAR27.VAR33[1] * VAR9->VAR34 / 2);
        memcpy(VAR9->VAR27.VAR3[2], VAR9->VAR25.VAR3[2], VAR9->VAR27.VAR33[2] * VAR9->VAR34 / 2);
    }
    else
    {
        if (FUN16(VAR9, &VAR11) || FUN17(VAR9, &VAR11) || FUN18(VAR9, &VAR11) || FUN19(VAR9, &VAR11))
        {
            FUN9(VAR9->VAR2, VAR15, "");
            return -1;
        }
        FUN20(VAR9, 0, VAR9->VAR35, VAR9->VAR36);
        FUN21(VAR9, 0, VAR9->VAR37, VAR9->VAR34, 0);
        if ((VAR2->VAR38 & VAR39) == 0)
        {
            FUN20(VAR9, VAR9->VAR40, VAR9->VAR35 / 2, VAR9->VAR36 / 2);
            FUN20(VAR9, VAR9->VAR41, VAR9->VAR35 / 2, VAR9->VAR36 / 2);
            FUN21(VAR9, VAR9->VAR40, VAR9->VAR37 / 2, VAR9->VAR34 / 2, 1);
            FUN21(VAR9, VAR9->VAR41, VAR9->VAR37 / 2, VAR9->VAR34 / 2, 2);
        }
        else
        {
            memset(VAR9->VAR27.VAR3[1], 0x80, VAR9->VAR37 * VAR9->VAR34 / 4);
            memset(VAR9->VAR27.VAR3[2], 0x80, VAR9->VAR37 * VAR9->VAR34 / 4);
        }
        FUN22(VAR9);
    }
    *VAR4 = sizeof(VAR28);
    *(VAR28 *)VAR3 = VAR9->VAR27;
    if ((VAR9->VAR24.VAR3[0]) && (VAR9->VAR24.VAR3[0] != VAR9->VAR25.VAR3[0]))
        VAR2->FUN11(VAR2, &VAR9->VAR24);
    memcpy(&VAR9->VAR24, &VAR9->VAR27, sizeof(VAR28));
    VAR9->VAR27.VAR3[0] = NULL;
    return VAR7;
}