static int FUN1(VAR1 *VAR2, void *VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6;
    VAR7 *VAR8 = VAR3;
    int VAR9, VAR10, VAR11, VAR12, VAR13;
    int VAR14, VAR15, VAR16, VAR17;
    int VAR18, VAR19;
    VAR20 *VAR21, *VAR22;
    int VAR23;
    VAR24 *VAR25;
    const VAR24 *VAR26;
    PutBitContext VAR27, VAR28;
    GetBitContext VAR29;
    BlockInfo VAR30[5 * VAR31], *VAR32, *VAR33;
    FUN2(VAR20, VAR34, [5 * VAR31], [64]);
    FUN2(VAR24, VAR35, [80 + VAR36]);
    FUN2(VAR24, VAR37, [5 * 80 + VAR36]);
    const int VAR38 = 3 - VAR5->VAR2->VAR39;
    int VAR40[5];
    assert((((int)VAR35) & 7) == 0);
    assert((((int)VAR37) & 7) == 0);
    memset(VAR34, 0, 5 * VAR31 * sizeof(*VAR34));
    VAR26 = &VAR5->VAR41[VAR8->VAR42 * 80];
    VAR22 = &VAR34[0][0];
    VAR33 = VAR30;
    FUN3(&VAR28, VAR37, 5 * 80);
    for (VAR14 = 0; VAR14 < 5; VAR14++, VAR33 += VAR5->VAR43->VAR44, VAR22 += VAR5->VAR43->VAR44 * 64)
    {
        VAR9 = VAR26[3] & 0x0f;
        VAR26 += 4;
        FUN3(&VAR27, VAR35, 80);
        VAR32 = VAR33;
        VAR21 = VAR22;
        VAR40[VAR14] = 0;
        for (VAR13 = 0; VAR13 < VAR5->VAR43->VAR44; VAR13++)
        {
            VAR17 = VAR5->VAR43->VAR45[VAR13];
            FUN4(&VAR29, VAR26, VAR17);
            VAR10 = FUN5(&VAR29, 9);
            VAR11 = FUN6(&VAR29);
            VAR12 = FUN7(&VAR29, 2);
            if (FUN8(VAR5->VAR43))
            {
                VAR32->VAR46 = VAR5->VAR46[0];
                VAR32->VAR47 = VAR5->VAR48[0];
                VAR32->VAR49 = &VAR5->VAR43->VAR50[(VAR13 >= 4) * 4 * 16 * 64 + VAR12 * 16 * 64 + VAR9 * 64];
                VAR40[VAR14] |= !VAR13 && VAR11;
            }
            else
            {
                VAR32->VAR46 = VAR5->VAR46[VAR11 && VAR38 == 3];
                VAR32->VAR47 = VAR5->VAR48[VAR11];
                VAR32->VAR49 = &VAR5->VAR43->VAR50[(VAR12 == 3) * 2 * 22 * 64 + VAR11 * 22 * 64 + (VAR9 + VAR51[VAR12]) * 64];
            }
            VAR10 = VAR10 << 2;
            VAR10 += 1024;
            VAR21[0] = VAR10;
            VAR26 += VAR17 >> 3;
            VAR32->VAR52 = 0;
            VAR32->VAR53 = 0;
            FUN9(VAR2, "", VAR14, VAR13);
            FUN10(&VAR29, VAR32, VAR21);
            if (VAR32->VAR52 >= 64)
                FUN11(&VAR27, &VAR29);
            VAR21 += 64;
            VAR32++;
        }
        FUN9(VAR2, "", FUN12(&VAR27), VAR14);
        VAR21 = VAR22;
        VAR32 = VAR33;
        FUN4(&VAR29, VAR35, FUN12(&VAR27));
        FUN13(&VAR27, 0);
        FUN14(&VAR27);
        for (VAR13 = 0; VAR13 < VAR5->VAR43->VAR44; VAR13++, VAR21 += 64, VAR32++)
        {
            if (VAR32->VAR52 < 64 && FUN15(&VAR29) > 0)
            {
                FUN10(&VAR29, VAR32, VAR21);
                if (VAR32->VAR52 < 64)
                    break;
            }
        }
        if (VAR13 >= VAR5->VAR43->VAR44)
            FUN11(&VAR28, &VAR29);
    }
    FUN9(VAR2, "", FUN12(&VAR28));
    VAR21 = &VAR34[0][0];
    VAR32 = VAR30;
    FUN4(&VAR29, VAR37, FUN12(&VAR28));
    FUN13(&VAR28, 0);
    FUN14(&VAR28);
    for (VAR14 = 0; VAR14 < 5; VAR14++)
    {
        for (VAR13 = 0; VAR13 < VAR5->VAR43->VAR44; VAR13++)
        {
            if (VAR32->VAR52 < 64)
            {
                FUN9(VAR2, "", VAR14, VAR13);
                FUN10(&VAR29, VAR32, VAR21);
            }
            if (VAR32->VAR52 >= 64 && VAR32->VAR52 < 127)
                FUN16(VAR2, VAR54, "", VAR32->VAR52);
            VAR21 += 64;
            VAR32++;
        }
    }
    VAR21 = &VAR34[0][0];
    VAR32 = VAR30;
    for (VAR14 = 0; VAR14 < 5; VAR14++)
    {
        FUN17(VAR5, VAR8, VAR14, &VAR15, &VAR16);
        if ((VAR5->VAR43->VAR55 == VAR56) || (VAR5->VAR43->VAR55 == VAR57 && VAR15 >= (704 / 8)) || (VAR5->VAR43->VAR58 >= 720 && VAR16 != 134))
        {
            VAR18 = (VAR5->VAR59.VAR19[0] << ((!VAR40[VAR14]) * VAR38));
        }
        else
        {
            VAR18 = (2 << VAR38);
        }
        VAR25 = VAR5->VAR59.VAR60[0] + ((VAR16 * VAR5->VAR59.VAR19[0] + VAR15) << VAR38);
        VAR19 = VAR5->VAR59.VAR19[0] << VAR40[VAR14];
        VAR32[0].FUN18(VAR25, VAR19, VAR21 + 0 * 64);
        if (VAR5->VAR43->VAR61 == 4)
        {
            VAR32[2].FUN18(VAR25 + (1 << VAR38), VAR19, VAR21 + 2 * 64);
        }
        else
        {
            VAR32[1].FUN18(VAR25 + (1 << VAR38), VAR19, VAR21 + 1 * 64);
            VAR32[2].FUN18(VAR25 + VAR18, VAR19, VAR21 + 2 * 64);
            VAR32[3].FUN18(VAR25 + (1 << VAR38) + VAR18, VAR19, VAR21 + 3 * 64);
        }
        VAR32 += 4;
        VAR21 += 4 * 64;
        VAR23 = (((VAR16 >> (VAR5->VAR43->VAR55 == VAR56)) * VAR5->VAR59.VAR19[1] + (VAR15 >> ((VAR5->VAR43->VAR55 == VAR57) ? 2 : 1))) << VAR38);
        for (VAR13 = 2; VAR13; VAR13--)
        {
            VAR24 *VAR62 = VAR5->VAR59.VAR60[VAR13] + VAR23;
            if (VAR5->VAR43->VAR55 == VAR57 && VAR15 >= (704 / 8))
            {
                uint64_t VAR63[64 / 8];
                VAR24 *VAR64 = (VAR24 *)VAR63;
                VAR24 *VAR65, *VAR66;
                int VAR67, VAR68;
                VAR32->FUN18(VAR64, 8, VAR21);
                for (VAR68 = 0; VAR68 < (1 << VAR38); VAR68++, VAR62 += VAR5->VAR59.VAR19[VAR13], VAR64 += 8)
                {
                    VAR66 = VAR64 + (1 << (VAR38 - 1));
                    VAR65 = VAR62 + (VAR5->VAR59.VAR19[VAR13] << VAR38);
                    for (VAR67 = 0; VAR67 < (1 << (VAR38 - 1)); VAR67++)
                    {
                        VAR62[VAR67] = VAR64[VAR67];
                        VAR65[VAR67] = VAR66[VAR67];
                    }
                }
                VAR21 += 64;
                VAR32++;
            }
            else
            {
                VAR18 = (VAR16 == 134) ? (1 << VAR38) : VAR5->VAR59.VAR19[VAR13] << ((!VAR40[VAR14]) * VAR38);
                VAR19 = VAR5->VAR59.VAR19[VAR13] << VAR40[VAR14];
                (VAR32++)->FUN18(VAR62, VAR19, VAR21);
                VAR21 += 64;
                if (VAR5->VAR43->VAR44 == 8)
                {
                    (VAR32++)->FUN18(VAR62 + VAR18, VAR19, VAR21);
                    VAR21 += 64;
                }
            }
        }
    }
    return 0;
}