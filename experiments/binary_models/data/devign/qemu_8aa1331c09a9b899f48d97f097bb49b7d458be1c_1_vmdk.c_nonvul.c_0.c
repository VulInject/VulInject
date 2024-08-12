static int FUN1(VAR1 *VAR2, VAR1 *VAR3, int VAR4)
{
    int VAR5;
    uint32_t VAR6;
    uint32_t VAR7, VAR8;
    VMDK4Header VAR9;
    VAR10 *VAR11;
    int64_t VAR12 = 0;
    VAR5 = FUN2(VAR3, sizeof(VAR6), &VAR9, sizeof(VAR9));
    if (VAR5 < 0)
    {
        return VAR5;
    }
    if (VAR9.VAR13 == 0)
    {
        uint64_t VAR14 = FUN3(VAR9.VAR14);
        if (VAR14)
        {
            return FUN4(VAR2, VAR4, VAR14 << 9);
        }
    }
    if (FUN3(VAR9.VAR15) == VAR16)
    {
        struct
        {
            struct
            {
                uint64_t VAR17;
                uint32_t VAR18;
                uint32_t VAR19;
                uint8_t VAR20[512 - 16];
            } QEMU_PACKED VAR21;
            uint32_t VAR6;
            VMDK4Header VAR9;
            uint8_t VAR20[512 - 4 - sizeof(VAR22)];
            struct
            {
                uint64_t VAR17;
                uint32_t VAR18;
                uint32_t VAR19;
                uint8_t VAR20[512 - 16];
            } QEMU_PACKED VAR23;
        } QEMU_PACKED VAR24;
        VAR5 = FUN2(VAR3, VAR2->VAR3->VAR25 * 512 - 1536, &VAR24, sizeof(VAR24));
        if (VAR5 < 0)
        {
            return VAR5;
        }
        if (FUN5(VAR24.VAR6) != VAR26 || FUN6(VAR24.VAR21.VAR18) != 0 || FUN6(VAR24.VAR21.VAR19) != VAR27 || FUN3(VAR24.VAR23.VAR17) != 0 || FUN6(VAR24.VAR23.VAR18) != 0 || FUN6(VAR24.VAR23.VAR19) != VAR28)
        {
            return -VAR29;
        }
        VAR9 = VAR24.VAR9;
    }
    if (FUN6(VAR9.VAR30) >= 3)
    {
        char VAR31[64];
        snprintf(VAR31, sizeof(VAR31), "", FUN6(VAR9.VAR30));
        FUN7(VAR32, VAR2->VAR33, "", VAR31);
        return -VAR34;
    }
    VAR8 = FUN6(VAR9.VAR35) * FUN3(VAR9.VAR36);
    if (VAR8 == 0)
    {
        return -VAR29;
    }
    VAR7 = (FUN3(VAR9.VAR13) + VAR8 - 1) / VAR8;
    if (FUN6(VAR9.VAR4) & VAR37)
    {
        VAR12 = FUN3(VAR9.VAR38) << 9;
    }
    VAR5 = FUN8(VAR2, VAR3, false, FUN3(VAR9.VAR13), FUN3(VAR9.VAR15) << 9, VAR12, VAR7, FUN6(VAR9.VAR35), FUN3(VAR9.VAR36), &VAR11);
    if (VAR5 < 0)
    {
        return VAR5;
    }
    VAR11->VAR39 = FUN9(VAR9.VAR40) == VAR41;
    VAR11->VAR42 = FUN6(VAR9.VAR4) & VAR43;
    VAR11->VAR30 = FUN6(VAR9.VAR30);
    VAR11->VAR44 = FUN6(VAR9.VAR4) & VAR45;
    VAR5 = FUN10(VAR2, VAR11);
    if (VAR5)
    {
        FUN11(VAR2);
    }
    return VAR5;
}