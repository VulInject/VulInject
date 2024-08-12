static int FUN1(VAR1 *VAR2, VAR1 *VAR3, int VAR4, VAR5 *VAR6, VAR7 **VAR8)
{
    int VAR9;
    uint32_t VAR10;
    uint32_t VAR11, VAR12;
    VMDK4Header VAR13;
    VAR14 *VAR15;
    VAR16 *VAR17 = VAR2->VAR18;
    int64_t VAR19 = 0;
    VAR9 = FUN2(VAR3, sizeof(VAR10), &VAR13, sizeof(VAR13));
    if (VAR9 < 0)
    {
        FUN3(VAR8, -VAR9, "", VAR3->VAR20);
        return -VAR21;
    }
    if (VAR13.VAR22 == 0)
    {
        uint64_t VAR23 = FUN4(VAR13.VAR23);
        if (VAR23)
        {
            char *VAR24 = FUN5(VAR3, VAR23 << 9, VAR8);
            if (!VAR24)
            {
                return -VAR21;
            }
            VAR9 = FUN6(VAR2, VAR4, VAR24, VAR6, VAR8);
            FUN7(VAR24);
            return VAR9;
        }
    }
    if (!VAR17->VAR25)
    {
        VAR17->VAR25 = FUN8("");
    }
    if (FUN4(VAR13.VAR26) == VAR27)
    {
        struct
        {
            struct
            {
                uint64_t VAR28;
                uint32_t VAR29;
                uint32_t VAR30;
                uint8_t VAR31[512 - 16];
            } QEMU_PACKED VAR32;
            uint32_t VAR10;
            VMDK4Header VAR13;
            uint8_t VAR31[512 - 4 - sizeof(VAR33)];
            struct
            {
                uint64_t VAR28;
                uint32_t VAR29;
                uint32_t VAR30;
                uint8_t VAR31[512 - 16];
            } QEMU_PACKED VAR34;
        } QEMU_PACKED VAR35;
        VAR9 = FUN2(VAR3, VAR2->VAR3->VAR36 * 512 - 1536, &VAR35, sizeof(VAR35));
        if (VAR9 < 0)
        {
            FUN3(VAR8, -VAR9, "");
            return VAR9;
        }
        if (FUN9(VAR35.VAR10) != VAR37 || FUN10(VAR35.VAR32.VAR29) != 0 || FUN10(VAR35.VAR32.VAR30) != VAR38 || FUN4(VAR35.VAR34.VAR28) != 0 || FUN10(VAR35.VAR34.VAR29) != 0 || FUN10(VAR35.VAR34.VAR30) != VAR39)
        {
            FUN11(VAR8, "");
            return -VAR21;
        }
        VAR13 = VAR35.VAR13;
    }
    if (FUN10(VAR13.VAR40) > 3)
    {
        char VAR24[64];
        snprintf(VAR24, sizeof(VAR24), "" VAR41, FUN10(VAR13.VAR40));
        FUN12(VAR8, VAR42, FUN13(VAR2), "", VAR24);
        return -VAR43;
    }
    else if (FUN10(VAR13.VAR40) == 3 && (VAR4 & VAR44))
    {
        FUN11(VAR8, "");
        return -VAR21;
    }
    if (FUN10(VAR13.VAR45) > 512)
    {
        FUN11(VAR8, "");
        return -VAR21;
    }
    VAR12 = FUN10(VAR13.VAR45) * FUN4(VAR13.VAR46);
    if (VAR12 == 0)
    {
        FUN11(VAR8, "");
        return -VAR21;
    }
    VAR11 = (FUN4(VAR13.VAR22) + VAR12 - 1) / VAR12;
    if (FUN10(VAR13.VAR4) & VAR47)
    {
        VAR19 = FUN4(VAR13.VAR48) << 9;
    }
    if (FUN14(VAR3) < FUN4(VAR13.VAR49))
    {
        FUN11(VAR8, "" VAR50 "", (VAR51)(FUN4(VAR13.VAR49) * VAR52));
        return -VAR21;
    }
    VAR9 = FUN15(VAR2, VAR3, false, FUN4(VAR13.VAR22), FUN4(VAR13.VAR26) << 9, VAR19, VAR11, FUN10(VAR13.VAR45), FUN4(VAR13.VAR46), &VAR15, VAR8);
    if (VAR9 < 0)
    {
        return VAR9;
    }
    VAR15->VAR53 = FUN16(VAR13.VAR54) == VAR55;
    if (VAR15->VAR53)
    {
        FUN7(VAR17->VAR25);
        VAR17->VAR25 = FUN8("");
    }
    VAR15->VAR56 = FUN10(VAR13.VAR4) & VAR57;
    VAR15->VAR40 = FUN10(VAR13.VAR40);
    VAR15->VAR58 = FUN10(VAR13.VAR4) & VAR59;
    VAR9 = FUN17(VAR2, VAR15, VAR8);
    if (VAR9)
    {
        FUN18(VAR2);
    }
    return VAR9;
}