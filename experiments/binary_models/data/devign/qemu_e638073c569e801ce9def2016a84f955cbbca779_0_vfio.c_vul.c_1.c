static void FUN1(VAR1 *VAR2)
{
    uint32_t VAR3, VAR4 = FUN2((VAR5)VAR6);
    off_t VAR7 = VAR2->VAR8 + VAR9;
    char VAR10[32];
    if (VAR2->VAR11.VAR12 || !VAR2->VAR11.VAR13)
    {
        return;
    }
    if (pread(VAR2->VAR14, &VAR3, 4, VAR7) != 4 || FUN3(VAR2->VAR14, &VAR4, 4, VAR7) != 4 || pread(VAR2->VAR14, &VAR4, 4, VAR7) != 4 || FUN3(VAR2->VAR14, &VAR3, 4, VAR7) != 4)
    {
        FUN4("", VAR15, VAR2->VAR16.VAR17, VAR2->VAR16.VAR18, VAR2->VAR16.VAR19, VAR2->VAR16.VAR20);
        return;
    }
    VAR4 = ~(FUN5(VAR4) & VAR6) + 1;
    if (!VAR4)
    {
        return;
    }
    FUN6("", VAR2->VAR16.VAR17, VAR2->VAR16.VAR18, VAR2->VAR16.VAR19, VAR2->VAR16.VAR20, VAR4);
    snprintf(VAR10, sizeof(VAR10), "", VAR2->VAR16.VAR17, VAR2->VAR16.VAR18, VAR2->VAR16.VAR19, VAR2->VAR16.VAR20);
    FUN7(&VAR2->VAR11.VAR21, FUN8(VAR2), &VAR22, VAR2, VAR10, VAR4);
    FUN9(&VAR2->VAR11, VAR23, VAR24, &VAR2->VAR11.VAR21);
    VAR2->VAR11.VAR25 = true;