static void FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = &VAR2->VAR6[VAR3];
    uint64_t VAR7 = VAR5->VAR8.VAR7;
    char VAR9[64];
    uint32_t VAR10;
    uint8_t VAR11;
    int VAR12;
    if (!VAR7)
    {
        return;
    }
    snprintf(VAR9, sizeof(VAR9), "", VAR2->VAR13.VAR14, VAR2->VAR13.VAR15, VAR2->VAR13.VAR16, VAR2->VAR13.VAR17, VAR3);
    VAR12 = pread(VAR2->VAR18.VAR19, &VAR10, sizeof(VAR10), VAR2->VAR20 + VAR21 + (4 * VAR3));
    if (VAR12 != sizeof(VAR10))
    {
        FUN2("", VAR3);
        return;
    }
    VAR10 = FUN3(VAR10);
    VAR5->VAR22 = (VAR10 & VAR23);
    VAR5->VAR24 = VAR5->VAR22 ? 0 : (VAR10 & VAR25);
    VAR11 = VAR10 & (VAR5->VAR22 ? ~VAR26 : ~VAR27);
    FUN4(&VAR5->VAR8.VAR28, FUN5(VAR2), &VAR29, VAR5, VAR9, VAR7);
    FUN6(&VAR2->VAR30, VAR3, VAR11, &VAR5->VAR8.VAR28);
    if (VAR2->VAR31 && VAR2->VAR31->VAR32 == VAR3)
    {
        VAR7 = VAR2->VAR31->VAR33 & VAR34;
    }
    strncat(VAR9, "", sizeof(VAR9) - strlen(VAR9) - 1);
    if (FUN7(FUN5(VAR2), &VAR5->VAR8, &VAR5->VAR8.VAR28, &VAR5->VAR8.VAR35, &VAR5->VAR8.VAR36, VAR7, 0, VAR9))
    {
        FUN2("", VAR9);
    }
    if (VAR2->VAR31 && VAR2->VAR31->VAR32 == VAR3)
    {
        uint64_t VAR37;
        VAR37 = FUN8(VAR2->VAR31->VAR33 + (VAR2->VAR31->VAR38 * VAR39));
        VAR7 = VAR37 < VAR5->VAR8.VAR7 ? VAR5->VAR8.VAR7 - VAR37 : 0;
        strncat(VAR9, "", sizeof(VAR9) - strlen(VAR9) - 1);
        if (FUN7(FUN5(VAR2), &VAR5->VAR8, &VAR5->VAR8.VAR28, &VAR2->VAR31->VAR35, &VAR2->VAR31->VAR36, VAR7, VAR37, VAR9))
        {
            FUN2("", VAR9);
        }
    }
    FUN9(VAR2, VAR3);
}