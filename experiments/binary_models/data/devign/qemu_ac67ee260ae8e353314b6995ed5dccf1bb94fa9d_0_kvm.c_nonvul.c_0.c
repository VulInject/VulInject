int FUN1(VAR1 *VAR2)
{
    struct
    {
        struct kvm_cpuid2 VAR3;
        struct kvm_cpuid_entry2 VAR4[100];
    } QEMU_PACKED VAR5;
    VAR6 *VAR7 = VAR2->VAR8;
    uint32_t VAR9, VAR10, VAR11, VAR12;
    uint32_t VAR13;
    struct VAR14 *VAR15;
    uint32_t VAR16[3];
    int VAR17;
    VAR2->VAR18 &= FUN2(VAR7, 1, 0, VAR19);
    VAR2->VAR20 &= FUN2(VAR7, 1, 0, VAR21);
    VAR2->VAR22 &= FUN2(VAR7, 0x80000001, 0, VAR19);
    VAR2->VAR23 &= FUN2(VAR7, 0x80000001, 0, VAR21);
    VAR2->VAR24 &= FUN2(VAR7, 0x8000000A, 0, VAR19);
    VAR12 = 0;
    VAR15 = &VAR5.VAR4[VAR12++];
    memset(VAR15, 0, sizeof(*VAR15));
    VAR15->VAR25 = VAR26;
    if (!FUN3())
    {
        memcpy(VAR16, "", 12);
        VAR15->VAR27 = 0;
    }
    else
    {
        memcpy(VAR16, "", 12);
        VAR15->VAR27 = VAR28;
    }
    VAR15->VAR29 = VAR16[0];
    VAR15->VAR30 = VAR16[1];
    VAR15->VAR31 = VAR16[2];
    VAR15 = &VAR5.VAR4[VAR12++];
    memset(VAR15, 0, sizeof(*VAR15));
    VAR15->VAR25 = VAR32;
    VAR15->VAR27 = VAR2->VAR33 & FUN2(VAR7, VAR32, 0, VAR34);
    if (FUN3())
    {
        memcpy(VAR16, "", 12);
        VAR15->VAR27 = VAR16[0];
        VAR15 = &VAR5.VAR4[VAR12++];
        memset(VAR15, 0, sizeof(*VAR15));
        VAR15->VAR25 = VAR35;
        VAR15->VAR27 = 0x00001bbc;
        VAR15->VAR29 = 0x00060001;
        VAR15 = &VAR5.VAR4[VAR12++];
        memset(VAR15, 0, sizeof(*VAR15));
        VAR15->VAR25 = VAR36;
        if (FUN4())
        {
            VAR15->VAR27 |= VAR37;
        }
        if (FUN5())
        {
            VAR15->VAR27 |= VAR37;
            VAR15->VAR27 |= VAR38;
        }
        VAR15 = &VAR5.VAR4[VAR12++];
        memset(VAR15, 0, sizeof(*VAR15));
        VAR15->VAR25 = VAR39;
        if (FUN4())
        {
            VAR15->VAR27 |= VAR40;
        }
        if (FUN5())
        {
            VAR15->VAR27 |= VAR41;
        }
        VAR15->VAR29 = FUN6();
        VAR15 = &VAR5.VAR4[VAR12++];
        memset(VAR15, 0, sizeof(*VAR15));
        VAR15->VAR25 = VAR42;
        VAR15->VAR27 = 0x40;
        VAR15->VAR29 = 0x40;
        VAR15 = &VAR5.VAR4[VAR12++];
        memset(VAR15, 0, sizeof(*VAR15));
        VAR15->VAR25 = VAR43;
        memcpy(VAR16, "", 12);
        VAR15->VAR27 = 0;
        VAR15->VAR29 = VAR16[0];
        VAR15->VAR30 = VAR16[1];
        VAR15->VAR31 = VAR16[2];
    }
    VAR44 = VAR15->VAR27 & (1 << VAR45);
    VAR46 = VAR15->VAR27 & (1 << VAR47);
    FUN7(VAR2, 0, 0, &VAR9, &VAR13, &VAR13, &VAR13);
    for (VAR10 = 0; VAR10 <= VAR9; VAR10++)
    {
        VAR15 = &VAR5.VAR4[VAR12++];
        switch (VAR10)
        {
        case 2:
        {
            int VAR48;
            VAR15->VAR25 = VAR10;
            VAR15->VAR49 = VAR50 | VAR51;
            FUN7(VAR2, VAR10, 0, &VAR15->VAR27, &VAR15->VAR29, &VAR15->VAR30, &VAR15->VAR31);
            VAR48 = VAR15->VAR27 & 0xff;
            for (VAR11 = 1; VAR11 < VAR48; ++VAR11)
            {
                VAR15 = &VAR5.VAR4[VAR12++];
                VAR15->VAR25 = VAR10;
                VAR15->VAR49 = VAR50;
                FUN7(VAR2, VAR10, 0, &VAR15->VAR27, &VAR15->VAR29, &VAR15->VAR30, &VAR15->VAR31);
            }
            break;
        }
        case 4:
        case 0xb:
        case 0xd:
            for (VAR11 = 0;; VAR11++)
            {
                if (VAR10 == 0xd && VAR11 == 64)
                {
                    break;
                }
                VAR15->VAR25 = VAR10;
                VAR15->VAR49 = VAR52;
                VAR15->VAR53 = VAR11;
                FUN7(VAR2, VAR10, VAR11, &VAR15->VAR27, &VAR15->VAR29, &VAR15->VAR30, &VAR15->VAR31);
                if (VAR10 == 4 && VAR15->VAR27 == 0)
                {
                    break;
                }
                if (VAR10 == 0xb && !(VAR15->VAR30 & 0xff00))
                {
                    break;
                }
                if (VAR10 == 0xd && VAR15->VAR27 == 0)
                {
                    continue;
                }
                VAR15 = &VAR5.VAR4[VAR12++];
            }
            break;
        default:
            VAR15->VAR25 = VAR10;
            VAR15->VAR49 = 0;
            FUN7(VAR2, VAR10, 0, &VAR15->VAR27, &VAR15->VAR29, &VAR15->VAR30, &VAR15->VAR31);
            break;
        }
    }
    FUN7(VAR2, 0x80000000, 0, &VAR9, &VAR13, &VAR13, &VAR13);
    for (VAR10 = 0x80000000; VAR10 <= VAR9; VAR10++)
    {
        VAR15 = &VAR5.VAR4[VAR12++];
        VAR15->VAR25 = VAR10;
        VAR15->VAR49 = 0;
        FUN7(VAR2, VAR10, 0, &VAR15->VAR27, &VAR15->VAR29, &VAR15->VAR30, &VAR15->VAR31);
    }
    if (VAR2->VAR54 > 0)
    {
        VAR2->VAR55 &= FUN2(VAR7, 0xC0000001, 0, VAR19);
        FUN7(VAR2, 0xC0000000, 0, &VAR9, &VAR13, &VAR13, &VAR13);
        for (VAR10 = 0xC0000000; VAR10 <= VAR9; VAR10++)
        {
            VAR15 = &VAR5.VAR4[VAR12++];
            VAR15->VAR25 = VAR10;
            VAR15->VAR49 = 0;
            FUN7(VAR2, VAR10, 0, &VAR15->VAR27, &VAR15->VAR29, &VAR15->VAR30, &VAR15->VAR31);
        }
    }
    VAR5.VAR3.VAR56 = VAR12;
    if (((VAR2->VAR57 >> 8) & 0xF) >= 6 && (VAR2->VAR18 & (VAR58 | VAR59)) == (VAR58 | VAR59) && FUN8(VAR2->VAR8, VAR60) > 0)
    {
        uint64_t VAR61;
        int VAR62;
        int VAR63;
        VAR63 = FUN9(VAR2->VAR8, &VAR61, &VAR62);
        if (VAR63 < 0)
        {
            fprintf(VAR64, "", strerror(-VAR63));
            return VAR63;
        }
        if (VAR62 > VAR65)
        {
            VAR62 = VAR65;
        }
        VAR61 &= VAR66;
        VAR61 |= VAR62;
        VAR63 = FUN10(VAR2, VAR67, &VAR61);
        if (VAR63 < 0)
        {
            fprintf(VAR64, "", strerror(-VAR63));
            return VAR63;
        }
        VAR2->VAR61 = VAR61;
    }
    FUN11(VAR68, VAR2);
    VAR5.VAR3.VAR69 = 0;
    VAR17 = FUN10(VAR2, VAR70, &VAR5);
    if (VAR17)
    {
        return VAR17;
    }
    VAR17 = FUN8(VAR2->VAR8, VAR71);
    if (VAR17 && VAR2->VAR72)
    {
        VAR17 = FUN10(VAR2, VAR73, VAR2->VAR72);
        if (VAR17 < 0)
        {
            fprintf(VAR64, "");
            return VAR17;
        }
    }
    if (FUN12())
    {
        VAR2->VAR74 = FUN13(4096, sizeof(struct VAR75));
    }
    return 0;
}