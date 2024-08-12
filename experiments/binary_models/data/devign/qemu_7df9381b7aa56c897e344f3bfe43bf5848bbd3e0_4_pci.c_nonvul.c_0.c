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
    snprintf(VAR9, sizeof(VAR9), "", VAR2->VAR13.VAR9, VAR3);
    VAR12 = pread(VAR2->VAR13.VAR14, &VAR10, sizeof(VAR10), VAR2->VAR15 + VAR16 + (4 * VAR3));
    if (VAR12 != sizeof(VAR10))
    {
        FUN2("", VAR3);
        return;
    }
    VAR10 = FUN3(VAR10);
    VAR5->VAR17 = (VAR10 & VAR18);
    VAR5->VAR19 = VAR5->VAR17 ? 0 : (VAR10 & VAR20);
    VAR11 = VAR10 & (VAR5->VAR17 ? ~VAR21 : ~VAR22);
    FUN4(&VAR5->VAR8.VAR23, FUN5(VAR2), &VAR24, VAR5, VAR9, VAR7);
    FUN6(&VAR2->VAR25, VAR3, VAR11, &VAR5->VAR8.VAR23);
    if (VAR2->VAR26 && VAR2->VAR26->VAR27 == VAR3)
    {
        VAR7 = VAR2->VAR26->VAR28 & VAR29;
    }
    strncat(VAR9, "", sizeof(VAR9) - strlen(VAR9) - 1);
    if (FUN7(FUN5(VAR2), &VAR5->VAR8, &VAR5->VAR8.VAR23, &VAR5->VAR8.VAR30, &VAR5->VAR8.VAR31, VAR7, 0, VAR9))
    {
        FUN2("", VAR9);
    }
    if (VAR2->VAR26 && VAR2->VAR26->VAR27 == VAR3)
    {
        uint64_t VAR32;
        VAR32 = FUN8((VAR33)VAR2->VAR26->VAR28 + (VAR2->VAR26->VAR34 * VAR35));
        VAR7 = VAR32 < VAR5->VAR8.VAR7 ? VAR5->VAR8.VAR7 - VAR32 : 0;
        strncat(VAR9, "", sizeof(VAR9) - strlen(VAR9) - 1);
        if (FUN7(FUN5(VAR2), &VAR5->VAR8, &VAR5->VAR8.VAR23, &VAR2->VAR26->VAR30, &VAR2->VAR26->VAR31, VAR7, VAR32, VAR9))
        {
            FUN2("", VAR9);
        }
    }
    FUN9(VAR2, VAR3);
}