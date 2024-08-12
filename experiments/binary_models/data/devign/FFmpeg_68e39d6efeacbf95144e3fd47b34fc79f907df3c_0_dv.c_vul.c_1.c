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
    FUN2(VAR24, VAR35, [80 + 4]);
    FUN2(VAR24, VAR36, [5 * 80 + 4]);
    const int VAR37 = 3 - VAR5->VAR2->VAR38;
    int VAR39[5];
    assert((((int)VAR35) & 7) == 0);
    assert((((int)VAR36) & 7) == 0);
    memset(VAR34, 0, 5 * VAR31 * sizeof(*VAR34));
    VAR26 = &VAR5->VAR40[VAR8->VAR41 * 80];
    VAR22 = &VAR34[0][0];
    VAR33 = VAR30;
    FUN3(&VAR28, VAR36, 5 * 80);
    for (VAR14 = 0; VAR14 < 5; VAR14++, VAR33 += VAR5->VAR42->VAR43, VAR22 += VAR5->VAR42->VAR43 * 64)
    {
        VAR9 = VAR26[3] & 0x0f;
        VAR26 += 4;
        FUN3(&VAR27, VAR35, 80);
        VAR32 = VAR33;
        VAR21 = VAR22;
        VAR39[VAR14] = 0;
        for (VAR13 = 0; VAR13 < VAR5->VAR42->VAR43; VAR13++)
        {
            VAR17 = VAR5->VAR42->VAR44[VAR13];
            FUN4(&VAR29, VAR26, VAR17);
            VAR10 = FUN5(&VAR29, 9);
            VAR11 = FUN6(&VAR29);
            VAR12 = FUN7(&VAR29, 2);
            if (FUN8(VAR5->VAR42))
            {
                VAR32->VAR45 = VAR5->VAR45[0];
                VAR32->VAR46 = VAR5->VAR47[0];
                VAR32->VAR48 = &VAR5->VAR42->VAR49[(VAR13 >= 4) * 4 * 16 * 64 + VAR12 * 16 * 64 + VAR9 * 64];
                VAR39[VAR14] |= !VAR13 && VAR11;
            }
            else
            {
                VAR32->VAR45 = VAR5->VAR45[VAR11 && VAR37 == 3];
                VAR32->VAR46 = VAR5->VAR47[VAR11];
                VAR32->VAR48 = &VAR5->VAR42->VAR49[(VAR12 == 3) * 2 * 22 * 64 + VAR11 * 22 * 64 + (VAR9 + VAR50[VAR12]) * 64];
            }
            VAR10 = VAR10 << 2;
            VAR10 += 1024;
            VAR21[0] = VAR10;
            VAR26 += VAR17 >> 3;
            VAR32->VAR51 = 0;
            VAR32->VAR52 = 0;
            FUN9(VAR2, "", VAR14, VAR13);
            FUN10(&VAR29, VAR32, VAR21);
            if (VAR32->VAR51 >= 64)
                FUN11(&VAR27, &VAR29);
            VAR21 += 64;
            VAR32++;
        }
        FUN9(VAR2, "", FUN12(&VAR27), VAR14);
        VAR21 = VAR22;
        VAR32 = VAR33;
        FUN4(&VAR29, VAR35, FUN12(&VAR27));
        FUN13(&VAR27);
        for (VAR13 = 0; VAR13 < VAR5->VAR42->VAR43; VAR13++, VAR21 += 64, VAR32++)
        {
            if (VAR32->VAR51 < 64 && FUN14(&VAR29) > 0)
            {
                FUN10(&VAR29, VAR32, VAR21);
                if (VAR32->VAR51 < 64)
                    break;
            }
        }
        if (VAR13 >= VAR5->VAR42->VAR43)
            FUN11(&VAR28, &VAR29);
    }
    FUN9(VAR2, "", FUN12(&VAR28));
    VAR21 = &VAR34[0][0];
    VAR32 = VAR30;
    FUN4(&VAR29, VAR36, FUN12(&VAR28));
    FUN13(&VAR28);
    for (VAR14 = 0; VAR14 < 5; VAR14++)
    {
        for (VAR13 = 0; VAR13 < VAR5->VAR42->VAR43; VAR13++)
        {
            if (VAR32->VAR51 < 64)
            {
                FUN9(VAR2, "", VAR14, VAR13);
                FUN10(&VAR29, VAR32, VAR21);
            }
            if (VAR32->VAR51 >= 64 && VAR32->VAR51 < 127)
                FUN15(VAR2, VAR53, "", VAR32->VAR51);
            VAR21 += 64;
            VAR32++;
        }
    }
    VAR21 = &VAR34[0][0];
    VAR32 = VAR30;
    for (VAR14 = 0; VAR14 < 5; VAR14++)
    {
        FUN16(VAR5, VAR8, VAR14, &VAR15, &VAR16);
        if ((VAR5->VAR42->VAR54 == VAR55) || (VAR5->VAR42->VAR54 == VAR56 && VAR15 >= (704 / 8)) || (VAR5->VAR42->VAR57 >= 720 && VAR16 != 134))
        {
            VAR18 = (VAR5->VAR58.VAR19[0] << ((!VAR39[VAR14]) * VAR37));
        }
        else
        {
            VAR18 = (2 << VAR37);
        }
        VAR25 = VAR5->VAR58.VAR59[0] + ((VAR16 * VAR5->VAR58.VAR19[0] + VAR15) << VAR37);
        VAR19 = VAR5->VAR58.VAR19[0] << VAR39[VAR14];
        VAR32[0].FUN17(VAR25, VAR19, VAR21 + 0 * 64);
        if (VAR5->VAR42->VAR60 == 4)
        {
            VAR32[2].FUN17(VAR25 + (1 << VAR37), VAR19, VAR21 + 2 * 64);
        }
        else
        {
            VAR32[1].FUN17(VAR25 + (1 << VAR37), VAR19, VAR21 + 1 * 64);
            VAR32[2].FUN17(VAR25 + VAR18, VAR19, VAR21 + 2 * 64);
            VAR32[3].FUN17(VAR25 + (1 << VAR37) + VAR18, VAR19, VAR21 + 3 * 64);
        }
        VAR32 += 4;
        VAR21 += 4 * 64;
        VAR23 = (((VAR16 >> (VAR5->VAR42->VAR54 == VAR55)) * VAR5->VAR58.VAR19[1] + (VAR15 >> ((VAR5->VAR42->VAR54 == VAR56) ? 2 : 1))) << VAR37);
        for (VAR13 = 2; VAR13; VAR13--)
        {
            VAR24 *VAR61 = VAR5->VAR58.VAR59[VAR13] + VAR23;
            if (VAR5->VAR42->VAR54 == VAR56 && VAR15 >= (704 / 8))
            {
                uint64_t VAR62[64 / 8];
                VAR24 *VAR63 = (VAR24 *)VAR62;
                VAR24 *VAR64, *VAR65;
                int VAR66, VAR67;
                VAR32->FUN17(VAR63, 8, VAR21);
                for (VAR67 = 0; VAR67 < (1 << VAR37); VAR67++, VAR61 += VAR5->VAR58.VAR19[VAR13], VAR63 += 8)
                {
                    VAR65 = VAR63 + (1 << (VAR37 - 1));
                    VAR64 = VAR61 + (VAR5->VAR58.VAR19[VAR13] << VAR37);
                    for (VAR66 = 0; VAR66 < (1 << (VAR37 - 1)); VAR66++)
                    {
                        VAR61[VAR66] = VAR63[VAR66];
                        VAR64[VAR66] = VAR65[VAR66];
                    }
                }
                VAR21 += 64;
                VAR32++;
            }
            else
            {
                VAR18 = (VAR16 == 134) ? (1 << VAR37) : VAR5->VAR58.VAR19[VAR13] << ((!VAR39[VAR14]) * VAR37);
                VAR19 = VAR5->VAR58.VAR19[VAR13] << VAR39[VAR14];
                (VAR32++)->FUN17(VAR61, VAR19, VAR21);
                VAR21 += 64;
                if (VAR5->VAR42->VAR43 == 8)
                {
                    (VAR32++)->FUN17(VAR61 + VAR18, VAR19, VAR21);
                    VAR21 += 64;
                }
            }
        }
    }
    return 0;
}