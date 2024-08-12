static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, int VAR7)
{
    int VAR8;
    int VAR9 = VAR4->VAR9;
    const VAR10 *VAR11 = VAR4->VAR11;
    const VAR10 *VAR12 = VAR4->VAR12;
    int VAR13 = VAR4->VAR13;
    int VAR14, VAR15, VAR16, VAR17;
    int VAR18;
    FUN2(VAR19, &VAR2->VAR20);
    FUN3("");
    VAR18 = VAR4->VAR18;
    if (VAR18 > 0)
    {
        UINT8 VAR21[4];
        UINT32 VAR22;
        int VAR23, VAR24;
        GetBitContext VAR25;
        VAR23 = 16 - VAR18;
        FUN4(VAR19, &VAR2->VAR20);
        FUN3("", FUN5(VAR19, &VAR2->VAR20, 16));
        VAR22 = (VAR4->VAR26 << VAR23) | FUN5(VAR19, &VAR2->VAR20, VAR23);
        VAR21[0] = VAR22 >> 8;
        VAR21[1] = VAR22;
        FUN3("", VAR22, VAR18, (VAR4->VAR26 << VAR23));
        FUN6(&VAR25, VAR21, 4 * 8);
        {
            FUN2(VAR27, &VAR25);
            FUN4(VAR27, &VAR25);
            FUN7(VAR14, VAR17, VAR27, &VAR25, VAR28[0], VAR29, 2);
            VAR23 = VAR30;
            FUN8(VAR27, &VAR25);
        }
        FUN3("", VAR17, VAR14, VAR23);
        VAR24 = (VAR14 != 256 && VAR14 != 0);
        VAR23 -= VAR18;
        if ((VAR31 + VAR23 + VAR24) > VAR7)
            return;
        VAR8 = 0;
        VAR31 += VAR23;
        VAR4->VAR18 = 0;
        FUN4(VAR19, &VAR2->VAR20);
        goto VAR32;
    }
    for (;;)
    {
        FUN4(VAR19, &VAR2->VAR20);
        FUN3("", VAR13, FUN5(VAR19, &VAR2->VAR20, 16), VAR31);
        VAR8 = VAR31;
        FUN7(VAR14, VAR17, VAR19, &VAR2->VAR20, VAR28[0], VAR29, 2);
    VAR32:
        FUN3("", VAR17, VAR14);
        if (VAR14 == 256)
        {
            if (VAR31 > VAR7)
            {
            VAR33:
                VAR31 = VAR8;
                VAR4->VAR34 = 0;
                break;
            }
            VAR4->VAR34 = 1;
            break;
        }
        else if (VAR14 != 0)
        {
            if ((VAR31 + 1) > VAR7)
                goto VAR33;
            VAR16 = FUN9(VAR19, &VAR2->VAR20, 1);
            VAR14 = (VAR14 ^ VAR16) - VAR16;
            FUN10(VAR19, &VAR2->VAR20, 1);
            VAR13 += VAR17;
            if (VAR13 >= 64)
            {
                goto VAR35;
            }
            VAR15 = VAR11[VAR13];
            VAR14 = VAR14 << (VAR12[VAR15] + VAR9);
            VAR6[VAR15] = VAR14;
        }
        else
        {
            if (VAR31 > VAR7)
                goto VAR33;
            VAR13 += VAR17;
            if (VAR13 >= 64)
            {
            VAR35:
                FUN3("", VAR13);
                VAR4->VAR34 = 1;
                break;
            }
        }
    }
    FUN8(VAR19, &VAR2->VAR20);
    VAR4->VAR13 = VAR13;
}