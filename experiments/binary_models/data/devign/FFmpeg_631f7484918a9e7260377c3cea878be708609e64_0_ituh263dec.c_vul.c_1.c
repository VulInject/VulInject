static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6)
{
    int VAR7, VAR8, VAR9, VAR10;
    VAR11 *VAR12 = &VAR13;
    const VAR14 *VAR15;
    GetBitContext VAR16 = VAR2->VAR16;
    VAR15 = VAR2->VAR17.VAR18;
    if (VAR2->VAR19 && VAR2->VAR20)
    {
        VAR12 = &VAR21;
        VAR8 = 0;
        if (VAR2->VAR22)
        {
            if (VAR2->VAR23)
                VAR15 = VAR2->VAR24.VAR18;
            else
                VAR15 = VAR2->VAR25.VAR18;
        }
    }
    else if (VAR2->VAR20)
    {
        if (VAR26 && VAR2->VAR27 == VAR28)
        {
            if (VAR2->VAR29 == 3 && VAR2->VAR30 == VAR31)
            {
                int VAR32, VAR33;
                VAR32 = (VAR5 <= 3 ? 0 : VAR5 - 4 + 1);
                VAR7 = VAR2->VAR34[VAR32];
                if (VAR2->VAR35[VAR32])
                {
                    VAR33 = FUN2(VAR2, VAR5);
                    if (VAR33 == 0xffff)
                        return -1;
                    VAR7 += VAR33;
                    VAR7 = VAR7 & 0xff;
                    VAR2->VAR34[VAR32] = VAR7;
                }
                else
                {
                    VAR2->VAR35[VAR32] = 1;
                }
            }
            else
            {
                VAR7 = FUN3(&VAR2->VAR16, 8);
                if (VAR7 == 255)
                    VAR7 = 128;
            }
        }
        else
        {
            VAR7 = FUN3(&VAR2->VAR16, 8);
            if ((VAR7 & 0x7F) == 0)
            {
                FUN4(VAR2->VAR36, VAR37, "", VAR7, VAR2->VAR38, VAR2->VAR39);
                if (VAR2->VAR36->VAR40 & (VAR41 | VAR42))
                    return -1;
            }
            if (VAR7 == 255)
                VAR7 = 128;
        }
        VAR4[0] = VAR7;
        VAR8 = 1;
    }
    else
    {
        VAR8 = 0;
    }
    if (!VAR6)
    {
        if (VAR2->VAR20 && VAR2->VAR19)
            goto VAR43;
        VAR2->VAR44[VAR5] = VAR8 - 1;
        return 0;
    }
VAR45:
{
    FUN5(VAR46, &VAR2->VAR16);
    VAR8--;
    for (;;)
    {
        FUN6(VAR46, &VAR2->VAR16);
        FUN7(VAR7, VAR10, VAR46, &VAR2->VAR16, VAR12->VAR47[0], VAR48, 2, 0);
        if (VAR10 == 66)
        {
            if (VAR7)
            {
                FUN8(VAR46, &VAR2->VAR16);
                FUN4(VAR2->VAR36, VAR37, "", VAR2->VAR38, VAR2->VAR39);
                return -1;
            }
            if (VAR49 && VAR2->VAR50 > 1)
            {
                int VAR51 = FUN9(VAR46, &VAR2->VAR16, 1);
                FUN10(VAR46, &VAR2->VAR16, 1);
                VAR10 = FUN9(VAR46, &VAR2->VAR16, 7) + 1;
                if (VAR51)
                {
                    FUN11(VAR46, &VAR2->VAR16, 1 + 7);
                    FUN6(VAR46, &VAR2->VAR16);
                    VAR7 = FUN12(VAR46, &VAR2->VAR16, 11);
                    FUN11(VAR46, &VAR2->VAR16, 11);
                }
                else
                {
                    FUN10(VAR46, &VAR2->VAR16, 7);
                    VAR7 = FUN12(VAR46, &VAR2->VAR16, 7);
                    FUN11(VAR46, &VAR2->VAR16, 1 + 7 + 7);
                }
            }
            else
            {
                VAR10 = FUN9(VAR46, &VAR2->VAR16, 7) + 1;
                FUN10(VAR46, &VAR2->VAR16, 7);
                VAR7 = (VAR52)FUN9(VAR46, &VAR2->VAR16, 8);
                FUN11(VAR46, &VAR2->VAR16, 7 + 8);
                if (VAR7 == -128)
                {
                    FUN6(VAR46, &VAR2->VAR16);
                    if (VAR2->VAR27 == VAR28)
                    {
                        VAR7 = FUN12(VAR46, &VAR2->VAR16, 12);
                        FUN11(VAR46, &VAR2->VAR16, 12);
                    }
                    else
                    {
                        VAR7 = FUN9(VAR46, &VAR2->VAR16, 5);
                        FUN10(VAR46, &VAR2->VAR16, 5);
                        VAR7 |= FUN12(VAR46, &VAR2->VAR16, 6) << 5;
                        FUN11(VAR46, &VAR2->VAR16, 5 + 6);
                    }
                }
            }
        }
        else
        {
            if (FUN9(VAR46, &VAR2->VAR16, 1))
                VAR7 = -VAR7;
            FUN11(VAR46, &VAR2->VAR16, 1);
        }
        VAR8 += VAR10;
        if (VAR8 >= 64)
        {
            FUN8(VAR46, &VAR2->VAR16);
            VAR8 = VAR8 - VAR10 + ((VAR10 - 1) & 63) + 1;
            if (VAR8 < 64)
            {
                VAR4[VAR15[VAR8]] = VAR7;
                break;
            }
            if (VAR2->VAR53 && VAR12 == &VAR13 && !VAR2->VAR20)
            {
                VAR12 = &VAR21;
                VAR8 = 0;
                VAR2->VAR16 = VAR16;
                VAR2->VAR54.FUN13(VAR4);
                goto VAR45;
            }
            FUN4(VAR2->VAR36, VAR37, "", VAR2->VAR38, VAR2->VAR39, VAR2->VAR20);
            return -1;
        }
        VAR9 = VAR15[VAR8];
        VAR4[VAR9] = VAR7;
    }
}
VAR43:
    if (VAR2->VAR20 && VAR2->VAR19)
    {
        FUN14(VAR2, VAR4, VAR5);
        VAR8 = 63;
    }
    VAR2->VAR44[VAR5] = VAR8;
    return 0;
}