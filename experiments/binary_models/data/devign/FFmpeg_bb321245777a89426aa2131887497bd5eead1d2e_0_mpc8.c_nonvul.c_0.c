static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    GetBitContext VAR14, *VAR15 = &VAR14;
    int VAR16, VAR17, VAR18, VAR19, VAR20, VAR21, VAR22;
    VAR23 *VAR24 = VAR12->VAR24;
    int VAR25;
    int VAR26, VAR27;
    int VAR28[2];
    VAR12->VAR29.VAR30 = VAR31;
    if ((VAR21 = VAR2->FUN2(VAR2, &VAR12->VAR29)) < 0)
    {
        FUN3(VAR2, VAR32, "");
        return VAR21;
    }
    VAR27 = VAR12->VAR33 == 0;
    if (VAR27)
    {
        memset(VAR12->VAR34, 0, sizeof(VAR12->VAR34));
        VAR12->VAR35 = 0;
    }
    FUN4(VAR15, VAR8, VAR9 * 8);
    FUN5(VAR15, VAR12->VAR35 & 7);
    if (VAR27)
        VAR26 = FUN6(VAR15, VAR12->VAR36 + 1);
    else
    {
        VAR26 = VAR12->VAR37 + FUN7(VAR15, VAR38.VAR39, VAR40, 2);
        if (VAR26 > 32)
            VAR26 -= 33;
    }
    if (VAR26 > VAR12->VAR36 + 1)
    {
        FUN3(VAR2, VAR32, "", VAR26);
        return VAR41;
    }
    VAR12->VAR37 = VAR26;
    if (VAR26)
    {
        VAR28[0] = VAR28[1] = 0;
        for (VAR16 = VAR26 - 1; VAR16 >= 0; VAR16--)
        {
            for (VAR19 = 0; VAR19 < 2; VAR19++)
            {
                VAR28[VAR19] = FUN7(VAR15, VAR42[VAR28[VAR19] > 2].VAR39, VAR43, 2) + VAR28[VAR19];
                if (VAR28[VAR19] > 15)
                    VAR28[VAR19] -= 17;
                VAR24[VAR16].VAR21[VAR19] = VAR28[VAR19];
            }
        }
        if (VAR12->VAR44)
        {
            int VAR45;
            VAR20 = 0;
            for (VAR16 = 0; VAR16 < VAR26; VAR16++)
                if (VAR24[VAR16].VAR21[0] || VAR24[VAR16].VAR21[1])
                    VAR20++;
            VAR22 = FUN6(VAR15, VAR20);
            VAR45 = FUN8(VAR15, VAR20, VAR22);
            for (VAR16 = VAR26 - 1; VAR16 >= 0; VAR16--)
                if (VAR24[VAR16].VAR21[0] || VAR24[VAR16].VAR21[1])
                {
                    VAR24[VAR16].VAR46 = VAR45 & 1;
                    VAR45 >>= 1;
                }
        }
    }
    for (VAR16 = VAR26; VAR16 < VAR12->VAR36; VAR16++)
        VAR24[VAR16].VAR21[0] = VAR24[VAR16].VAR21[1] = 0;
    if (VAR27)
    {
        for (VAR16 = 0; VAR16 < 32; VAR16++)
            VAR12->VAR47[0][VAR16] = VAR12->VAR47[1][VAR16] = 1;
    }
    for (VAR16 = 0; VAR16 < VAR26; VAR16++)
    {
        if (VAR24[VAR16].VAR21[0] || VAR24[VAR16].VAR21[1])
        {
            VAR20 = !!VAR24[VAR16].VAR21[0] + !!VAR24[VAR16].VAR21[1] - 1;
            if (VAR20 >= 0)
            {
                VAR22 = FUN7(VAR15, VAR48[VAR20].VAR39, VAR48[VAR20].VAR49, 1);
                if (VAR24[VAR16].VAR21[0])
                    VAR24[VAR16].VAR50[0] = VAR22 >> (2 * VAR20);
                if (VAR24[VAR16].VAR21[1])
                    VAR24[VAR16].VAR50[1] = VAR22 & 3;
            }
        }
    }
    for (VAR16 = 0; VAR16 < VAR26; VAR16++)
    {
        for (VAR19 = 0; VAR19 < 2; VAR19++)
        {
            if (!VAR24[VAR16].VAR21[VAR19])
                continue;
            if (VAR12->VAR47[VAR19][VAR16])
            {
                VAR24[VAR16].VAR51[VAR19][0] = FUN9(VAR15, 7) - 6;
                VAR12->VAR47[VAR19][VAR16] = 0;
            }
            else
            {
                VAR22 = FUN7(VAR15, VAR52[1].VAR39, VAR53, 2);
                if (VAR22 == 64)
                    VAR22 += FUN9(VAR15, 6);
                VAR24[VAR16].VAR51[VAR19][0] = ((VAR24[VAR16].VAR51[VAR19][2] + VAR22 - 25) & 0x7F) - 6;
            }
            for (VAR17 = 0; VAR17 < 2; VAR17++)
            {
                if ((VAR24[VAR16].VAR50[VAR19] << VAR17) & 2)
                    VAR24[VAR16].VAR51[VAR19][VAR17 + 1] = VAR24[VAR16].VAR51[VAR19][VAR17];
                else
                {
                    VAR22 = FUN7(VAR15, VAR52[0].VAR39, VAR54, 2);
                    if (VAR22 == 31)
                        VAR22 = 64 + FUN9(VAR15, 6);
                    VAR24[VAR16].VAR51[VAR19][VAR17 + 1] = ((VAR24[VAR16].VAR51[VAR19][VAR17] + VAR22 - 25) & 0x7F) - 6;
                }
            }
        }
    }
    for (VAR16 = 0, VAR25 = 0; VAR16 < VAR26; VAR16++, VAR25 += VAR55)
    {
        for (VAR19 = 0; VAR19 < 2; VAR19++)
        {
            VAR21 = VAR24[VAR16].VAR21[VAR19];
            switch (VAR21)
            {
            case -1:
                for (VAR17 = 0; VAR17 < VAR55; VAR17++)
                    VAR12->VAR34[VAR19][VAR25 + VAR17] = (FUN10(&VAR12->VAR56) & 0x3FC) - 510;
                break;
            case 0:
                break;
            case 1:
                for (VAR17 = 0; VAR17 < VAR55; VAR17 += VAR55 / 2)
                {
                    VAR20 = FUN7(VAR15, VAR57.VAR39, VAR58, 2);
                    VAR22 = FUN8(VAR15, 18, VAR20);
                    for (VAR18 = 0; VAR18 < VAR55 / 2; VAR18++, VAR22 <<= 1)
                        VAR12->VAR34[VAR19][VAR25 + VAR17 + VAR18] = (VAR22 & 0x20000) ? (FUN11(VAR15) << 1) - 1 : 0;
                }
                break;
            case 2:
                VAR20 = 6;
                for (VAR17 = 0; VAR17 < VAR55; VAR17 += 3)
                {
                    VAR22 = FUN7(VAR15, VAR59[VAR20 > 3].VAR39, VAR60, 2);
                    VAR12->VAR34[VAR19][VAR25 + VAR17 + 0] = VAR61[VAR22];
                    VAR12->VAR34[VAR19][VAR25 + VAR17 + 1] = VAR62[VAR22];
                    VAR12->VAR34[VAR19][VAR25 + VAR17 + 2] = VAR63[VAR22];
                    VAR20 = (VAR20 >> 1) + VAR64[VAR22];
                }
                break;
            case 3:
            case 4:
                for (VAR17 = 0; VAR17 < VAR55; VAR17 += 2)
                {
                    VAR22 = FUN7(VAR15, VAR65[VAR21 - 3].VAR39, VAR66, 2) + VAR67[VAR21 - 3];
                    VAR12->VAR34[VAR19][VAR25 + VAR17 + 1] = VAR22 >> 4;
                    VAR12->VAR34[VAR19][VAR25 + VAR17 + 0] = (VAR22 & 8) ? (VAR22 & 0xF) - 16 : (VAR22 & 0xF);
                }
                break;
            case 5:
            case 6:
            case 7:
            case 8:
                VAR20 = 2 * VAR68[VAR21];
                for (VAR17 = 0; VAR17 < VAR55; VAR17++)
                {
                    VAR22 = FUN7(VAR15, VAR69[VAR21 - 5][VAR20 > VAR68[VAR21]].VAR39, VAR69[VAR21 - 5][VAR20 > VAR68[VAR21]].VAR49, 2) + VAR70[VAR21 - 5];
                    VAR12->VAR34[VAR19][VAR25 + VAR17] = VAR22;
                    VAR20 = (VAR20 >> 1) + FUN12(VAR12->VAR34[VAR19][VAR25 + VAR17]);
                }
                break;
            default:
                for (VAR17 = 0; VAR17 < VAR55; VAR17++)
                {
                    VAR12->VAR34[VAR19][VAR25 + VAR17] = FUN7(VAR15, VAR71.VAR39, VAR72, 2);
                    if (VAR21 != 9)
                    {
                        VAR12->VAR34[VAR19][VAR25 + VAR17] <<= VAR21 - 9;
                        VAR12->VAR34[VAR19][VAR25 + VAR17] |= FUN9(VAR15, VAR21 - 9);
                    }
                    VAR12->VAR34[VAR19][VAR25 + VAR17] -= (1 << (VAR21 - 2)) - 1;
                }
            }
        }
    }
    FUN13(VAR12, VAR26 - 1, VAR12->VAR29.VAR3[0], VAR2->VAR73);
    VAR12->VAR33++;
    VAR12->VAR35 = FUN14(VAR15);
    if (VAR12->VAR33 >= VAR12->VAR74)
        VAR12->VAR33 = 0;
    *VAR4 = 1;
    *(VAR75 *)VAR3 = VAR12->VAR29;
    return VAR12->VAR33 ? VAR12->VAR35 >> 3 : VAR9;
}