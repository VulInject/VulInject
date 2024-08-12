static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    uint8_t VAR5[4096];
    struct VAR6 *VAR7;
    int VAR8 = 0, VAR9, VAR10;
    VAR11 *VAR12;
    if (VAR4->VAR13 > 4096)
    {
        return VAR14;
    }
    FUN2(VAR12, &VAR2->VAR15.VAR16.VAR17, VAR18) { VAR8++; }
    VAR7 = (struct VAR6 *)&VAR5;
    VAR7->VAR19 = VAR8;
    VAR7->VAR20 = sizeof(struct VAR21) * VAR8;
    VAR7->VAR22 = VAR8;
    VAR7->VAR23 = sizeof(struct VAR24) * VAR8;
    VAR7->VAR25 = 0;
    VAR7->VAR26 = sizeof(struct VAR27);
    VAR7->VAR28 = sizeof(struct VAR6) + VAR7->VAR20 + VAR7->VAR23;
    if (VAR7->VAR28 > 4096)
    {
        return VAR14;
    }
    VAR9 = sizeof(struct VAR6);
    VAR10 = VAR9 + sizeof(struct VAR21) * VAR8;
    FUN2(VAR12, &VAR2->VAR15.VAR16.VAR17, VAR18)
    {
        VAR29 *VAR30 = FUN3(VAR12->VAR31);
        uint16_t VAR32 = ((VAR30->VAR33 & 0xFF) << 8) | (VAR30->VAR34 & 0xFF);
        struct VAR21 *VAR35;
        struct VAR24 *VAR36;
        uint64_t VAR37;
        int VAR38;
        VAR35 = (struct VAR21 *)(VAR5 + VAR9);
        FUN4(VAR30->VAR39.VAR40, &VAR37);
        VAR35->VAR28 = FUN5(VAR37);
        VAR35->VAR41 = 1;
        VAR35->VAR42 = FUN6(VAR32);
        VAR35->VAR43[0].VAR44.VAR45.VAR46 = FUN6(VAR32);
        VAR35->VAR43[0].VAR44.VAR45.VAR47 = 0;
        VAR35->VAR43[0].VAR48 = VAR49;
        VAR35->VAR43[0].VAR50.VAR43 = 0xFF;
        VAR35->VAR43[0].VAR50.VAR51 = (VAR30->VAR33 & 0xFF);
        for (VAR38 = 1; VAR38 < VAR52; VAR38++)
        {
            VAR35->VAR43[VAR38].VAR44.VAR45.VAR46 = 0xFFFF;
            VAR35->VAR43[VAR38].VAR44.VAR45.VAR47 = 0;
            VAR35->VAR43[VAR38].VAR48 = VAR53;
            VAR35->VAR43[VAR38].VAR50.VAR43 = 0xFF;
            VAR35->VAR43[VAR38].VAR50.VAR51 = 0xFF;
        }
        VAR9 += sizeof(struct VAR21);
        VAR36 = (struct VAR24 *)(VAR5 + VAR10);
        memset(VAR36, 0, sizeof(struct VAR24));
        VAR36->VAR54.VAR36.VAR45.VAR55 = VAR30->VAR33;
        VAR36->VAR54.VAR56 = VAR57 | VAR58;
        VAR36->VAR54.VAR59 = VAR57 | VAR58;
        VAR36->VAR60.VAR61 = VAR62;
        VAR36->VAR60.VAR63 = 3;
        VAR36->VAR60.VAR41 = 1;
        VAR36->VAR60.VAR64 = 1;
        VAR36->VAR60.VAR65 = 1;
        VAR36->VAR66[0].VAR67 = 0;
        VAR36->VAR66[0].VAR68 = FUN5(VAR37);
        VAR36->VAR66[0].VAR42 = FUN6(VAR32);
        VAR10 += sizeof(struct VAR24);
    }
    VAR4->VAR13 -= FUN7((VAR69 *)VAR5, VAR7->VAR28, &VAR4->VAR70);
    return VAR71;
}