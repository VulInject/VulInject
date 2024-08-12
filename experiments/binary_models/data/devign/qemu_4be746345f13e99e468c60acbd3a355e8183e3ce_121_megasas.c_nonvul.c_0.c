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
        VAR29 *VAR30 = FUN3(VAR29, VAR31, VAR12->VAR32);
        uint16_t VAR33 = ((VAR30->VAR34 & 0xFF) >> 8) | (VAR30->VAR35 & 0xFF);
        struct VAR21 *VAR36;
        struct VAR24 *VAR37;
        uint64_t VAR38;
        int VAR39;
        VAR36 = (struct VAR21 *)(VAR5 + VAR9);
        FUN4(VAR30->VAR40.VAR41, &VAR38);
        VAR36->VAR28 = FUN5(VAR38);
        VAR36->VAR42 = 1;
        VAR36->VAR43 = FUN6(VAR33);
        VAR36->VAR44[0].VAR45.VAR46.VAR47 = FUN6(VAR33);
        VAR36->VAR44[0].VAR45.VAR46.VAR48 = 0;
        VAR36->VAR44[0].VAR49 = VAR50;
        VAR36->VAR44[0].VAR51.VAR44 = 0xFF;
        VAR36->VAR44[0].VAR51.VAR52 = (VAR30->VAR34 & 0xFF);
        for (VAR39 = 1; VAR39 < VAR53; VAR39++)
        {
            VAR36->VAR44[VAR39].VAR45.VAR46.VAR47 = 0xFFFF;
            VAR36->VAR44[VAR39].VAR45.VAR46.VAR48 = 0;
            VAR36->VAR44[VAR39].VAR49 = VAR54;
            VAR36->VAR44[VAR39].VAR51.VAR44 = 0xFF;
            VAR36->VAR44[VAR39].VAR51.VAR52 = 0xFF;
        }
        VAR9 += sizeof(struct VAR21);
        VAR37 = (struct VAR24 *)(VAR5 + VAR10);
        memset(VAR37, 0, sizeof(struct VAR24));
        VAR37->VAR55.VAR37.VAR46.VAR56 = (VAR30->VAR34 & 0xFF);
        VAR37->VAR55.VAR57 = VAR58 | VAR59;
        VAR37->VAR55.VAR60 = VAR58 | VAR59;
        VAR37->VAR61.VAR62 = VAR63;
        VAR37->VAR61.VAR64 = 3;
        VAR37->VAR61.VAR42 = 1;
        VAR37->VAR61.VAR65 = 1;
        VAR37->VAR61.VAR66 = 1;
        VAR37->VAR67[0].VAR68 = 0;
        VAR37->VAR67[0].VAR69 = FUN5(VAR38);
        VAR37->VAR67[0].VAR43 = FUN6(VAR33);
        VAR10 += sizeof(struct VAR24);
    }
    VAR4->VAR13 -= FUN7((VAR70 *)VAR5, VAR7->VAR28, &VAR4->VAR71);
    return VAR72;
}