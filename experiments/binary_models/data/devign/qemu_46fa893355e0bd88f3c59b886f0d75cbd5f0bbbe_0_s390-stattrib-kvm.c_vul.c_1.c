static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6 = FUN3(FUN4());
    unsigned long VAR7 = VAR6->VAR8 / VAR9;
    unsigned long VAR10, VAR11 = 1 << 19;
    int VAR12;
    struct kvm_s390_cmma_log VAR13 = {
        .VAR14 = 0,
        .VAR15 = ~0ULL,
    };
    if (VAR4->VAR16)
    {
        for (VAR10 = 0; VAR10 + VAR11 <= VAR7; VAR10 += VAR11)
        {
            VAR13.VAR17 = VAR10;
            VAR13.VAR18 = VAR11;
            VAR13.VAR19 = (VAR20)(VAR4->VAR16 + VAR10 * VAR11);
            VAR12 = FUN5(VAR21, VAR22, &VAR13);
            if (VAR12)
            {
                FUN6("", strerror(-VAR12));
                return;
            }
        }
        if (VAR10 < VAR7)
        {
            VAR13.VAR17 = VAR10;
            VAR13.VAR18 = VAR7 - VAR10;
            VAR13.VAR19 = (VAR20)(VAR4->VAR16 + VAR10 * VAR11);
            VAR12 = FUN5(VAR21, VAR22, &VAR13);
            if (VAR12)
            {
                FUN6("", strerror(-VAR12));
            }
        }
        FUN7(VAR4->VAR16);
        VAR4->VAR16 = NULL;
    }
}