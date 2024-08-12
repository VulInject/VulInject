static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, int VAR7, int VAR8, int VAR9)
{
    int VAR10, VAR11;
    int VAR12, VAR13, VAR14, VAR15;
    VAR16 *VAR17, *VAR18, *VAR19, *VAR20;
    int VAR21, VAR22[2];
    const VAR16 *VAR23;
    int VAR24, VAR25;
    FUN2(VAR26, VAR27, [64]);
    FUN2(VAR28, VAR29, [64]);
    int VAR30[64];
    int VAR31 = VAR8 ? -15 : 0;
    int VAR32, VAR33, VAR34, VAR35[64];
    const int VAR36 = VAR4->VAR37[VAR7];
    int VAR38 = VAR9 ? (VAR2->VAR39->VAR40 + 15) >> 4 : (VAR2->VAR39->VAR40 + 7) >> 3;
    int VAR41 = VAR9 ? (VAR2->VAR39->VAR42 + 15) >> 4 : (VAR2->VAR39->VAR42 + 7) >> 3;
    FUN3(VAR2);
    VAR19 = VAR4->VAR43[VAR7];
    VAR20 = VAR4->VAR43[VAR7] + (VAR41 * VAR4->VAR37[VAR7] + VAR38) * 8;
    for (VAR12 = 0; VAR12 < 64; VAR12++)
        VAR30[VAR12] = (VAR12 & 7) + (VAR12 >> 3) * VAR36;
    for (VAR15 = 0; VAR15 < VAR41; VAR15++)
    {
        for (VAR12 = 0; VAR12 < VAR44; VAR12++)
        {
            if ((VAR11 = FUN4(VAR2, VAR6, VAR12)) < 0)
                return VAR11;
        }
        VAR17 = VAR4->VAR43[VAR7] + 8 * VAR15 * VAR36;
        for (VAR14 = 0; VAR14 < VAR38; VAR14++, VAR17 += 8)
        {
            VAR10 = FUN5(VAR2, VAR45);
            switch (VAR10)
            {
            case 0:
                break;
            case 1:
                VAR23 = VAR46[FUN6(VAR6, 4)];
                VAR12 = 0;
                do
                {
                    int VAR47 = FUN7(VAR6);
                    int VAR48 = FUN6(VAR6, VAR49[VAR12]) + 1;
                    VAR12 += VAR48;
                    if (VAR12 > 64)
                    {
                        FUN8(VAR2->VAR39, VAR50, "");
                        return VAR51;
                    }
                    if (VAR47)
                    {
                        VAR21 = FUN5(VAR2, VAR52);
                        for (VAR13 = 0; VAR13 < VAR48; VAR13++)
                            VAR17[VAR30[*VAR23++]] = VAR21;
                    }
                    else
                    {
                        for (VAR13 = 0; VAR13 < VAR48; VAR13++)
                            VAR17[VAR30[*VAR23++]] = FUN5(VAR2, VAR52);
                    }
                } while (VAR12 < 63);
                if (VAR12 == 63)
                    VAR17[VAR30[*VAR23++]] = FUN5(VAR2, VAR52);
                break;
            case 2:
                memset(VAR29, 0, sizeof(*VAR29) * 64);
                VAR29[0] = FUN5(VAR2, VAR53);
                VAR32 = FUN5(VAR2, VAR54);
                if ((VAR33 = FUN9(VAR6, VAR29, VAR55, &VAR34, VAR35, VAR32)) < 0)
                    return VAR33;
                FUN10(VAR29, VAR56[VAR33], VAR34, VAR35, VAR55);
                VAR2->VAR57.FUN11(VAR17, VAR36, VAR29);
                break;
            case 3:
                VAR24 = FUN5(VAR2, VAR58);
                VAR25 = FUN5(VAR2, VAR59) + VAR31;
                VAR18 = VAR17 + VAR24 + VAR25 * VAR36;
                if (VAR18 < VAR19 || VAR18 + 8 * VAR36 > VAR20)
                {
                    FUN8(VAR2->VAR39, VAR60, "");
                }
                else if (VAR18 + 8 * VAR36 < VAR17 || VAR18 >= VAR17 + 8 * VAR36)
                {
                    VAR2->VAR61.VAR62[1][0](VAR17, VAR18, VAR36, 8);
                }
                else
                {
                    FUN12(VAR17, VAR18, VAR36);
                }
                VAR2->VAR63.FUN13(VAR27);
                VAR21 = FUN5(VAR2, VAR64);
                FUN14(VAR6, VAR27, VAR21);
                VAR2->VAR57.FUN15(VAR17, VAR27, VAR36);
                break;
            case 4:
                VAR24 = FUN5(VAR2, VAR58);
                VAR25 = FUN5(VAR2, VAR59) + VAR31;
                VAR18 = VAR17 + VAR24 + VAR25 * VAR36;
                if (VAR18 < VAR19 || VAR18 + 8 * VAR36 > VAR20)
                {
                    FUN8(VAR2->VAR39, VAR60, "");
                }
                else if (VAR18 + 8 * VAR36 < VAR17 || VAR18 >= VAR17 + 8 * VAR36)
                {
                    VAR2->VAR61.VAR62[1][0](VAR17, VAR18, VAR36, 8);
                }
                else
                {
                    FUN12(VAR17, VAR18, VAR36);
                }
                memset(VAR29, 0, sizeof(*VAR29) * 64);
                VAR29[0] = FUN5(VAR2, VAR65);
                VAR32 = FUN5(VAR2, VAR66);
                if ((VAR33 = FUN9(VAR6, VAR29, VAR55, &VAR34, VAR35, VAR32)) < 0)
                    return VAR33;
                FUN10(VAR29, VAR67[VAR33], VAR34, VAR35, VAR55);
                VAR2->VAR57.FUN16(VAR17, VAR36, VAR29);
                break;
            case 5:
                VAR21 = FUN5(VAR2, VAR52);
                VAR2->VAR63.VAR68[1](VAR17, VAR21, VAR36, 8);
                break;
            case 6:
                for (VAR12 = 0; VAR12 < 2; VAR12++)
                    VAR22[VAR12] = FUN5(VAR2, VAR52);
                for (VAR12 = 0; VAR12 < 8; VAR12++)
                {
                    VAR21 = FUN5(VAR2, VAR69);
                    for (VAR13 = 0; VAR13 < 8; VAR13++, VAR21 >>= 1)
                        VAR17[VAR12 * VAR36 + VAR13] = VAR22[VAR21 & 1];
                }
                break;
            case 7:
                VAR24 = FUN5(VAR2, VAR58);
                VAR25 = FUN5(VAR2, VAR59) + VAR31;
                VAR18 = VAR17 + VAR24 + VAR25 * VAR36;
                if (VAR18 < VAR19 || VAR18 + 8 * VAR36 > VAR20)
                {
                    FUN8(VAR2->VAR39, VAR60, "");
                }
                else if (VAR18 + 8 * VAR36 < VAR17 || VAR18 >= VAR17 + 8 * VAR36)
                {
                    VAR2->VAR61.VAR62[1][0](VAR17, VAR18, VAR36, 8);
                }
                else
                {
                    FUN12(VAR17, VAR18, VAR36);
                }
                break;
            case 8:
                for (VAR12 = 0; VAR12 < 8; VAR12++)
                    memcpy(VAR17 + VAR12 * VAR36, VAR2->VAR70[VAR52].VAR71 + VAR12 * 8, 8);
                VAR2->VAR70[VAR52].VAR71 += 64;
                break;
            default:
                FUN8(VAR2->VAR39, VAR50, "", VAR10);
                return VAR51;
            }
        }
    }
    if (FUN17(VAR6) & 0x1F)
        FUN18(VAR6, 32 - (FUN17(VAR6) & 0x1F));
    return 0;
}