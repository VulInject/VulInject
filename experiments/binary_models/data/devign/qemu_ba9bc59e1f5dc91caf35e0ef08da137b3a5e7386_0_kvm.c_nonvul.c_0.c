int FUN1(VAR1 *VAR2)
{
    struct
    {
        struct kvm_cpuid2 VAR3;
        struct kvm_cpuid_entry2 VAR4[100];
    } FUN2((VAR5)) VAR6;
    VAR7 *VAR8 = VAR2->VAR9;
    uint32_t VAR10, VAR11, VAR12, VAR13;
    uint32_t VAR14;
    struct VAR15 *VAR16;
    uint32_t VAR17[3];
    VAR2->VAR18 &= FUN3(VAR8, 1, 0, VAR19);
    VAR11 = VAR2->VAR20 & VAR21;
    VAR2->VAR20 &= FUN3(VAR8, 1, 0, VAR22);
    VAR2->VAR20 |= VAR11;
    VAR2->VAR23 &= FUN3(VAR8, 0x80000001, 0, VAR19);
    VAR2->VAR24 &= FUN3(VAR8, 0x80000001, 0, VAR22);
    VAR2->VAR25 &= FUN3(VAR8, 0x8000000A, 0, VAR19);
    VAR13 = 0;
    memcpy(VAR17, "", 12);
    VAR16 = &VAR6.VAR4[VAR13++];
    memset(VAR16, 0, sizeof(*VAR16));
    VAR16->VAR26 = VAR27;
    VAR16->VAR28 = 0;
    VAR16->VAR29 = VAR17[0];
    VAR16->VAR30 = VAR17[1];
    VAR16->VAR31 = VAR17[2];
    VAR16 = &VAR6.VAR4[VAR13++];
    memset(VAR16, 0, sizeof(*VAR16));
    VAR16->VAR26 = VAR32;
    VAR16->VAR28 = VAR2->VAR33 & FUN3(VAR8, VAR32, 0, VAR34);
    VAR35 = VAR16->VAR28 & (1 << VAR36);
    FUN4(VAR2, 0, 0, &VAR10, &VAR14, &VAR14, &VAR14);
    for (VAR11 = 0; VAR11 <= VAR10; VAR11++)
    {
        VAR16 = &VAR6.VAR4[VAR13++];
        switch (VAR11)
        {
        case 2:
        {
            int VAR37;
            VAR16->VAR26 = VAR11;
            VAR16->VAR38 = VAR39 | VAR40;
            FUN4(VAR2, VAR11, 0, &VAR16->VAR28, &VAR16->VAR29, &VAR16->VAR30, &VAR16->VAR31);
            VAR37 = VAR16->VAR28 & 0xff;
            for (VAR12 = 1; VAR12 < VAR37; ++VAR12)
            {
                VAR16 = &VAR6.VAR4[VAR13++];
                VAR16->VAR26 = VAR11;
                VAR16->VAR38 = VAR39;
                FUN4(VAR2, VAR11, 0, &VAR16->VAR28, &VAR16->VAR29, &VAR16->VAR30, &VAR16->VAR31);
            }
            break;
        }
        case 4:
        case 0xb:
        case 0xd:
            for (VAR12 = 0;; VAR12++)
            {
                VAR16->VAR26 = VAR11;
                VAR16->VAR38 = VAR41;
                VAR16->VAR42 = VAR12;
                FUN4(VAR2, VAR11, VAR12, &VAR16->VAR28, &VAR16->VAR29, &VAR16->VAR30, &VAR16->VAR31);
                if (VAR11 == 4 && VAR16->VAR28 == 0)
                {
                    break;
                }
                if (VAR11 == 0xb && !(VAR16->VAR30 & 0xff00))
                {
                    break;
                }
                if (VAR11 == 0xd && VAR16->VAR28 == 0)
                {
                    break;
                }
                VAR16 = &VAR6.VAR4[VAR13++];
            }
            break;
        default:
            VAR16->VAR26 = VAR11;
            VAR16->VAR38 = 0;
            FUN4(VAR2, VAR11, 0, &VAR16->VAR28, &VAR16->VAR29, &VAR16->VAR30, &VAR16->VAR31);
            break;
        }
    }
    FUN4(VAR2, 0x80000000, 0, &VAR10, &VAR14, &VAR14, &VAR14);
    for (VAR11 = 0x80000000; VAR11 <= VAR10; VAR11++)
    {
        VAR16 = &VAR6.VAR4[VAR13++];
        VAR16->VAR26 = VAR11;
        VAR16->VAR38 = 0;
        FUN4(VAR2, VAR11, 0, &VAR16->VAR28, &VAR16->VAR29, &VAR16->VAR30, &VAR16->VAR31);
    }
    if (VAR2->VAR43 > 0)
    {
        VAR2->VAR44 &= FUN3(VAR8, 0xC0000001, 0, VAR19);
        FUN4(VAR2, 0xC0000000, 0, &VAR10, &VAR14, &VAR14, &VAR14);
        for (VAR11 = 0xC0000000; VAR11 <= VAR10; VAR11++)
        {
            VAR16 = &VAR6.VAR4[VAR13++];
            VAR16->VAR26 = VAR11;
            VAR16->VAR38 = 0;
            FUN4(VAR2, VAR11, 0, &VAR16->VAR28, &VAR16->VAR29, &VAR16->VAR30, &VAR16->VAR31);
        }
    }
    VAR6.VAR3.VAR45 = VAR13;
    if (((VAR2->VAR46 >> 8) & 0xF) >= 6 && (VAR2->VAR18 & (VAR47 | VAR48)) == (VAR47 | VAR48) && FUN5(VAR2->VAR9, VAR49) > 0)
    {
        uint64_t VAR50;
        int VAR51;
        int VAR52;
        VAR52 = FUN6(VAR2->VAR9, &VAR50, &VAR51);
        if (VAR52 < 0)
        {
            fprintf(VAR53, "", strerror(-VAR52));
            return VAR52;
        }
        if (VAR51 > VAR54)
        {
            VAR51 = VAR54;
        }
        VAR50 &= VAR55;
        VAR50 |= VAR51;
        VAR52 = FUN7(VAR2, VAR56, &VAR50);
        if (VAR52 < 0)
        {
            fprintf(VAR53, "", strerror(-VAR52));
            return VAR52;
        }
        VAR2->VAR50 = VAR50;
    }
    FUN8(VAR57, VAR2);
    return FUN7(VAR2, VAR58, &VAR6);
}