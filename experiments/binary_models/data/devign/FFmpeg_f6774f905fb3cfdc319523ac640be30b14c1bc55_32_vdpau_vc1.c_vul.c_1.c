static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, uint32_t VAR5)
{
    VAR6 *const VAR7 = VAR2->VAR8;
    VAR9 *const VAR10 = &VAR7->VAR10;
    VAR11 *VAR12 = VAR10->VAR13;
    struct VAR14 *VAR15 = VAR12->VAR16;
    VAR17 *VAR18 = &VAR15->VAR18.VAR19;
    VdpVideoSurface VAR20;
    VAR18->VAR21 = VAR22;
    VAR18->VAR23 = VAR22;
    switch (VAR10->VAR24)
    {
    case VAR25:
        VAR20 = FUN2(&VAR10->VAR26.VAR27);
        assert(VAR20 != VAR22);
        VAR18->VAR23 = VAR20;
    case VAR28:
        VAR20 = FUN2(&VAR10->VAR29.VAR27);
        assert(VAR20 != VAR22);
        VAR18->VAR21 = VAR20;
    }
    VAR18->VAR30 = 0;
    if (VAR7->VAR31)
        VAR18->VAR32 = 4;
    else
        VAR18->VAR32 = VAR10->VAR24 - 1 + VAR10->VAR24 / 3;
    VAR18->VAR33 = VAR7->VAR34 ? (VAR7->VAR34 + 1) : 0;
    VAR18->VAR35 = VAR7->VAR35;
    VAR18->VAR36 = VAR7->VAR37;
    VAR18->VAR38 = VAR7->VAR38;
    VAR18->VAR39 = VAR7->VAR39;
    VAR18->VAR40 = VAR7->VAR40;
    VAR18->VAR41 = VAR7->VAR41;
    VAR18->VAR42 = VAR7->VAR42;
    VAR18->VAR43 = VAR7->VAR44;
    VAR18->VAR45 = VAR7->VAR45;
    VAR18->VAR46 = VAR7->VAR47;
    VAR18->VAR48 = VAR7->VAR48;
    VAR18->VAR49 = VAR7->VAR49;
    VAR18->VAR50 = VAR7->VAR50;
    VAR18->VAR51 = VAR7->VAR51;
    VAR18->VAR52 = VAR7->VAR10.VAR53;
    VAR18->VAR54 = VAR7->VAR54;
    VAR18->VAR55 = VAR7->VAR55;
    VAR18->VAR56 = VAR7->VAR56;
    VAR18->VAR57 = VAR7->VAR57;
    VAR18->VAR58 = VAR7->VAR58;
    VAR18->VAR59 = VAR7->VAR59;
    VAR18->VAR60 = VAR7->VAR61;
    VAR18->VAR62 = VAR7->VAR62 | (VAR7->VAR63 << 1);
    VAR18->VAR64 = VAR7->VAR10.VAR65;
    VAR18->VAR66 = VAR7->VAR35 & 1;
    VAR18->VAR67 = VAR7->VAR68;
    return FUN3(VAR15, VAR4, VAR5);
}