int FUN1(VAR1 *VAR2)
{
    struct
    {
        struct kvm_cpuid2 VAR3;
        struct kvm_cpuid_entry2 VAR4[100];
    } FUN2((VAR5)) VAR6;
    uint32_t VAR7, VAR8, VAR9, VAR10;
    uint32_t VAR11, VAR12, VAR13, VAR14;
    VAR10 = 0;
    FUN3(VAR2, 0, 0, &VAR11, &VAR12, &VAR13, &VAR14);
    VAR7 = VAR11;
    for (VAR8 = 0; VAR8 <= VAR7; VAR8++)
    {
        struct VAR15 *VAR16 = &VAR6.VAR4[VAR10++];
        switch (VAR8)
        {
        case 2:
        {
            int VAR17;
            FUN3(VAR2, VAR8, 0, &VAR11, &VAR12, &VAR13, &VAR14);
            VAR17 = VAR11 & 0xff;
            VAR16->VAR18 = VAR8;
            VAR16->VAR19 |= VAR20;
            VAR16->VAR19 |= VAR21;
            VAR16->VAR11 = VAR11;
            VAR16->VAR12 = VAR12;
            VAR16->VAR13 = VAR13;
            VAR16->VAR14 = VAR14;
            for (VAR9 = 1; VAR9 < VAR17; ++VAR9)
            {
                FUN3(VAR2, VAR8, 0, &VAR11, &VAR12, &VAR13, &VAR14);
                VAR16->VAR18 = VAR8;
                VAR16->VAR19 |= VAR20;
                VAR16->VAR11 = VAR11;
                VAR16->VAR12 = VAR12;
                VAR16->VAR13 = VAR13;
                VAR16->VAR14 = VAR14;
                VAR16 = &VAR6.VAR4[++VAR10];
            }
            break;
        }
        case 4:
        case 0xb:
        case 0xd:
            for (VAR9 = 0;; VAR9++)
            {
                FUN3(VAR2, VAR8, VAR9, &VAR11, &VAR12, &VAR13, &VAR14);
                VAR16->VAR18 = VAR8;
                VAR16->VAR19 = VAR22;
                VAR16->VAR23 = VAR9;
                VAR16->VAR11 = VAR11;
                VAR16->VAR12 = VAR12;
                VAR16->VAR13 = VAR13;
                VAR16->VAR14 = VAR14;
                VAR16 = &VAR6.VAR4[++VAR10];
                if (VAR8 == 4 && VAR11 == 0)
                    break;
                if (VAR8 == 0xb && !(VAR13 & 0xff00))
                    break;
                if (VAR8 == 0xd && VAR11 == 0)
                    break;
            }
            break;
        default:
            FUN3(VAR2, VAR8, 0, &VAR11, &VAR12, &VAR13, &VAR14);
            VAR16->VAR18 = VAR8;
            VAR16->VAR11 = VAR11;
            VAR16->VAR12 = VAR12;
            VAR16->VAR13 = VAR13;
            VAR16->VAR14 = VAR14;
            break;
        }
    }
    FUN3(VAR2, 0x80000000, 0, &VAR11, &VAR12, &VAR13, &VAR14);
    VAR7 = VAR11;
    for (VAR8 = 0x80000000; VAR8 <= VAR7; VAR8++)
    {
        struct VAR15 *VAR16 = &VAR6.VAR4[VAR10++];
        FUN3(VAR2, VAR8, 0, &VAR11, &VAR12, &VAR13, &VAR14);
        VAR16->VAR18 = VAR8;
        VAR16->VAR11 = VAR11;
        VAR16->VAR12 = VAR12;
        VAR16->VAR13 = VAR13;
        VAR16->VAR14 = VAR14;
    }
    VAR6.VAR3.VAR24 = VAR10;
    return FUN4(VAR2, VAR25, &VAR6);
}