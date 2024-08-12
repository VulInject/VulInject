static VAR1 FUN1(VAR2 *VAR3, int64_t VAR4)
{
    VAR5 *VAR6 = VAR3->VAR7;
    unsigned int VAR8;
    int VAR9;
    FUN2(VAR3->VAR10, VAR11);
    VAR8 = VAR4 >> (VAR6->VAR12 - VAR13);
    if (VAR8 < VAR6->VAR14)
    {
        uint64_t VAR15 = VAR6->VAR16[VAR8];
        if (VAR15)
        {
            if (VAR15 != VAR6->VAR17)
            {
                VAR9 = FUN3(VAR3, VAR15);
                if (VAR9 < 0)
                {
                    return VAR9;
                }
            }
            return VAR15;
        }
    }
    if (VAR18)
    {
        VAR9 = FUN4(VAR3);
        if (VAR9 < 0)
        {
            return VAR9;
        }
    }
    uint64_t VAR19 = FUN5(VAR3, VAR6->VAR20);
    memset(VAR6->VAR21, 0, VAR6->VAR20);
    VAR6->VAR17 = VAR19;
    fprintf(VAR22, "" VAR23 "" VAR23 "", VAR8, VAR4 << VAR6->VAR12, VAR19);
    if (FUN6(VAR6, VAR19, VAR4 << VAR6->VAR12))
    {
        int VAR24 = (VAR19 >> VAR6->VAR12) & ((1 << (VAR6->VAR12 - VAR13)) - 1);
        VAR6->VAR21[VAR24] = FUN7(1);
    }
    else
    {
        VAR9 = FUN8(VAR3, VAR19, VAR6->VAR20, 1);
        if (VAR9 < 0)
        {
            goto VAR25;
        }
    }
    FUN2(VAR3->VAR10, VAR26);
    VAR9 = FUN9(VAR3->VAR10, VAR19, VAR6->VAR21, VAR6->VAR20);
    if (VAR9 < 0)
    {
        goto VAR25;
    }
    if (VAR8 < VAR6->VAR14)
    {
        uint64_t VAR27 = FUN10(VAR19);
        FUN2(VAR3->VAR10, VAR28);
        VAR9 = FUN9(VAR3->VAR10, VAR6->VAR29 + VAR8 * sizeof(VAR30), &VAR27, sizeof(VAR27));
        if (VAR9 < 0)
        {
            goto VAR25;
        }
        VAR6->VAR16[VAR8] = VAR19;
        return VAR19;
    }
    FUN2(VAR3->VAR10, VAR31);
    uint64_t VAR32 = 1 << (VAR6->VAR12 - VAR13);
    uint64_t VAR33 = (VAR6->VAR34 + VAR32 - 1) / VAR32;
    uint64_t VAR35 = FUN11(VAR6, VAR33 + 1);
    uint64_t VAR36;
    uint64_t VAR37;
    do
    {
        uint64_t VAR38 = FUN12(VAR6, VAR35);
        VAR37 = 1 + ((VAR38 + VAR32 - 1) / VAR32);
        uint64_t VAR39 = VAR38 + VAR37;
        VAR36 = VAR35;
        VAR35 = FUN11(VAR6, VAR33 + ((VAR39 + VAR32 - 1) / VAR32));
    } while (VAR36 != VAR35);
    fprintf(VAR22, "" VAR40 "" VAR41 "", VAR6->VAR14, VAR35);
    uint64_t VAR42 = (VAR33 * VAR32) * VAR6->VAR20;
    uint64_t VAR43 = VAR42 + VAR37 * VAR6->VAR20;
    VAR44 *VAR45 = FUN13(VAR37 * VAR6->VAR20);
    VAR30 *VAR46 = FUN13(VAR35 * sizeof(VAR30));
    assert(VAR42 >= (VAR6->VAR34 * VAR6->VAR20));
    memcpy(VAR46, VAR6->VAR16, VAR6->VAR14 * sizeof(VAR30));
    VAR46[VAR8] = VAR19;
    int VAR47;
    for (VAR47 = 0; VAR47 < VAR37; VAR47++)
    {
        VAR46[VAR33 + VAR47] = VAR42 + (VAR47 * VAR6->VAR20);
    }
    uint64_t VAR38 = FUN12(VAR6, VAR35 * sizeof(VAR30));
    int VAR48 = 0;
    for (VAR47 = 0; VAR47 < VAR38 + VAR37; VAR47++)
    {
        VAR45[VAR48++] = FUN7(1);
    }
    FUN2(VAR3->VAR10, VAR49);
    VAR9 = FUN9(VAR3->VAR10, VAR42, VAR45, VAR37 * VAR6->VAR20);
    FUN14(VAR45);
    if (VAR9 < 0)
    {
        goto VAR50;
    }
    for (VAR47 = 0; VAR47 < VAR35; VAR47++)
    {
        FUN15(&VAR46[VAR47]);
    }
    FUN2(VAR3->VAR10, VAR51);
    VAR9 = FUN9(VAR3->VAR10, VAR43, VAR46, VAR35 * sizeof(VAR30));
    if (VAR9 < 0)
    {
        goto VAR50;
    }
    for (VAR47 = 0; VAR47 < VAR35; VAR47++)
    {
        FUN15(&VAR46[VAR47]);
    }
    uint8_t VAR52[12];
    FUN16((VAR30 *)VAR52, VAR43);
    FUN17((VAR53 *)(VAR52 + 8), VAR38);
    FUN2(VAR3->VAR10, VAR54);
    VAR9 = FUN9(VAR3->VAR10, FUN18(VAR55, VAR29), VAR52, sizeof(VAR52));
    if (VAR9 < 0)
    {
        goto VAR50;
    }
    uint64_t VAR56 = VAR6->VAR29;
    uint64_t VAR57 = VAR6->VAR14;
    FUN14(VAR6->VAR16);
    VAR6->VAR16 = VAR46;
    VAR6->VAR14 = VAR35;
    VAR6->VAR29 = VAR43;
    uint64_t VAR58 = VAR6->VAR34;
    FUN19(VAR3, VAR56, VAR57 * sizeof(VAR30));
    VAR6->VAR34 = VAR58;
    VAR9 = FUN3(VAR3, VAR19);
    if (VAR9 < 0)
    {
        goto VAR25;
    }
    return VAR19;
VAR50:
    FUN14(VAR46);
VAR25:
    VAR6->VAR17 = 0;
    return VAR9;
}