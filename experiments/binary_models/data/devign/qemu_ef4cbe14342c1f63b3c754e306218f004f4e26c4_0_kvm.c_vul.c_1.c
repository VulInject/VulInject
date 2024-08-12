int FUN1(VAR1 *VAR2)
{
    struct
    {
        struct kvm_cpuid2 VAR3;
        struct kvm_cpuid_entry2 VAR4[VAR5];
    } QEMU_PACKED VAR6;
    VAR7 *VAR8 = FUN2(VAR2);
    VAR9 *VAR10 = &VAR8->VAR10;
    uint32_t VAR11, VAR12, VAR13, VAR14;
    uint32_t VAR15;
    struct VAR16 *VAR17;
    uint32_t VAR18[3];
    int VAR19;
    VAR14 = 0;
    VAR17 = &VAR6.VAR4[VAR14++];
    memset(VAR17, 0, sizeof(*VAR17));
    VAR17->VAR20 = VAR21;
    if (!FUN3(VAR8))
    {
        memcpy(VAR18, "", 12);
        VAR17->VAR22 = 0;
    }
    else
    {
        memcpy(VAR18, "", 12);
        VAR17->VAR22 = VAR23;
    }
    VAR17->VAR24 = VAR18[0];
    VAR17->VAR25 = VAR18[1];
    VAR17->VAR26 = VAR18[2];
    VAR17 = &VAR6.VAR4[VAR14++];
    memset(VAR17, 0, sizeof(*VAR17));
    VAR17->VAR20 = VAR27;
    VAR17->VAR22 = VAR10->VAR28[VAR29];
    if (FUN3(VAR8))
    {
        memcpy(VAR18, "", 12);
        VAR17->VAR22 = VAR18[0];
        VAR17 = &VAR6.VAR4[VAR14++];
        memset(VAR17, 0, sizeof(*VAR17));
        VAR17->VAR20 = VAR30;
        VAR17->VAR22 = 0x00001bbc;
        VAR17->VAR24 = 0x00060001;
        VAR17 = &VAR6.VAR4[VAR14++];
        memset(VAR17, 0, sizeof(*VAR17));
        VAR17->VAR20 = VAR31;
        if (VAR8->VAR32)
        {
            VAR17->VAR22 |= VAR33;
        }
        if (VAR8->VAR34)
        {
            VAR17->VAR22 |= VAR33;
            VAR17->VAR22 |= VAR35;
        }
        VAR17 = &VAR6.VAR4[VAR14++];
        memset(VAR17, 0, sizeof(*VAR17));
        VAR17->VAR20 = VAR36;
        if (VAR8->VAR32)
        {
            VAR17->VAR22 |= VAR37;
        }
        if (VAR8->VAR34)
        {
            VAR17->VAR22 |= VAR38;
        }
        VAR17->VAR24 = VAR8->VAR39;
        VAR17 = &VAR6.VAR4[VAR14++];
        memset(VAR17, 0, sizeof(*VAR17));
        VAR17->VAR20 = VAR40;
        VAR17->VAR22 = 0x40;
        VAR17->VAR24 = 0x40;
        VAR17 = &VAR6.VAR4[VAR14++];
        memset(VAR17, 0, sizeof(*VAR17));
        VAR17->VAR20 = VAR41;
        memcpy(VAR18, "", 12);
        VAR17->VAR22 = 0;
        VAR17->VAR24 = VAR18[0];
        VAR17->VAR25 = VAR18[1];
        VAR17->VAR26 = VAR18[2];
    }
    VAR42 = VAR17->VAR22 & (1 << VAR43);
    VAR44 = VAR17->VAR22 & (1 << VAR45);
    VAR46 = VAR17->VAR22 & (1 << VAR47);
    FUN4(VAR10, 0, 0, &VAR11, &VAR15, &VAR15, &VAR15);
    for (VAR12 = 0; VAR12 <= VAR11; VAR12++)
    {
        if (VAR14 == VAR5)
        {
            fprintf(VAR48, "", VAR11);
            FUN5();
        }
        VAR17 = &VAR6.VAR4[VAR14++];
        switch (VAR12)
        {
        case 2:
        {
            int VAR49;
            VAR17->VAR20 = VAR12;
            VAR17->VAR50 = VAR51 | VAR52;
            FUN4(VAR10, VAR12, 0, &VAR17->VAR22, &VAR17->VAR24, &VAR17->VAR25, &VAR17->VAR26);
            VAR49 = VAR17->VAR22 & 0xff;
            for (VAR13 = 1; VAR13 < VAR49; ++VAR13)
            {
                if (VAR14 == VAR5)
                {
                    fprintf(VAR48, ""
                                    "",
                            VAR49);
                    FUN5();
                }
                VAR17 = &VAR6.VAR4[VAR14++];
                VAR17->VAR20 = VAR12;
                VAR17->VAR50 = VAR51;
                FUN4(VAR10, VAR12, 0, &VAR17->VAR22, &VAR17->VAR24, &VAR17->VAR25, &VAR17->VAR26);
            }
            break;
        }
        case 4:
        case 0xb:
        case 0xd:
            for (VAR13 = 0;; VAR13++)
            {
                if (VAR12 == 0xd && VAR13 == 64)
                {
                    break;
                }
                VAR17->VAR20 = VAR12;
                VAR17->VAR50 = VAR53;
                VAR17->VAR54 = VAR13;
                FUN4(VAR10, VAR12, VAR13, &VAR17->VAR22, &VAR17->VAR24, &VAR17->VAR25, &VAR17->VAR26);
                if (VAR12 == 4 && VAR17->VAR22 == 0)
                {
                    break;
                }
                if (VAR12 == 0xb && !(VAR17->VAR25 & 0xff00))
                {
                    break;
                }
                if (VAR12 == 0xd && VAR17->VAR22 == 0)
                {
                    continue;
                }
                if (VAR14 == VAR5)
                {
                    fprintf(VAR48, ""
                                    "",
                            VAR12, VAR13);
                    FUN5();
                }
                VAR17 = &VAR6.VAR4[VAR14++];
            }
            break;
        default:
            VAR17->VAR20 = VAR12;
            VAR17->VAR50 = 0;
            FUN4(VAR10, VAR12, 0, &VAR17->VAR22, &VAR17->VAR24, &VAR17->VAR25, &VAR17->VAR26);
            break;
        }
    }
    if (VAR11 >= 0x0a)
    {
        uint32_t VAR55;
        FUN4(VAR10, 0x0a, 0, &VAR55, &VAR15, &VAR15, &VAR15);
        if ((VAR55 & 0xff) > 0)
        {
            VAR56 = true;
            VAR57 = (VAR55 & 0xff00) >> 8;
            if (VAR57 > VAR58)
            {
                VAR57 = VAR58;
            }
        }
    }
    FUN4(VAR10, 0x80000000, 0, &VAR11, &VAR15, &VAR15, &VAR15);
    for (VAR12 = 0x80000000; VAR12 <= VAR11; VAR12++)
    {
        if (VAR14 == VAR5)
        {
            fprintf(VAR48, "", VAR11);
            FUN5();
        }
        VAR17 = &VAR6.VAR4[VAR14++];
        VAR17->VAR20 = VAR12;
        VAR17->VAR50 = 0;
        FUN4(VAR10, VAR12, 0, &VAR17->VAR22, &VAR17->VAR24, &VAR17->VAR25, &VAR17->VAR26);
    }
    if (VAR10->VAR59 > 0)
    {
        FUN4(VAR10, 0xC0000000, 0, &VAR11, &VAR15, &VAR15, &VAR15);
        for (VAR12 = 0xC0000000; VAR12 <= VAR11; VAR12++)
        {
            if (VAR14 == VAR5)
            {
                fprintf(VAR48, "", VAR11);
                FUN5();
            }
            VAR17 = &VAR6.VAR4[VAR14++];
            VAR17->VAR20 = VAR12;
            VAR17->VAR50 = 0;
            FUN4(VAR10, VAR12, 0, &VAR17->VAR22, &VAR17->VAR24, &VAR17->VAR25, &VAR17->VAR26);
        }
    }
    VAR6.VAR3.VAR60 = VAR14;
    if (((VAR10->VAR61 >> 8) & 0xF) >= 6 && (VAR10->VAR28[VAR62] & (VAR63 | VAR64)) == (VAR63 | VAR64) && FUN6(VAR2->VAR65, VAR66) > 0)
    {
        uint64_t VAR67;
        int VAR68;
        int VAR69;
        VAR69 = FUN7(VAR2->VAR65, &VAR67, &VAR68);
        if (VAR69 < 0)
        {
            fprintf(VAR48, "", strerror(-VAR69));
            return VAR69;
        }
        if (VAR68 > VAR70)
        {
            VAR68 = VAR70;
        }
        VAR67 &= VAR71;
        VAR67 |= VAR68;
        VAR69 = FUN8(VAR2, VAR72, &VAR67);
        if (VAR69 < 0)
        {
            fprintf(VAR48, "", strerror(-VAR69));
            return VAR69;
        }
        VAR10->VAR67 = VAR67;
    }
    FUN9(VAR73, VAR10);
    VAR17 = FUN10(&VAR6.VAR3, 1, 0);
    if (VAR17)
    {
        VAR74 = !!(VAR17->VAR25 & VAR75) || !!(VAR17->VAR25 & VAR76);
    }
    VAR6.VAR3.VAR77 = 0;
    VAR19 = FUN8(VAR2, VAR78, &VAR6);
    if (VAR19)
    {
        return VAR19;
    }
    VAR19 = FUN6(VAR2->VAR65, VAR79);
    if (VAR19 && VAR10->VAR80)
    {
        VAR19 = FUN8(VAR2, VAR81, VAR10->VAR80);
        if (VAR19 < 0)
        {
            fprintf(VAR48, "");
            return VAR19;
        }
    }
    if (FUN11())
    {
        VAR10->VAR82 = FUN12(4096, sizeof(struct VAR83));
    }
    return 0;
}