static void FUN1(int VAR1, struct VAR2 *VAR3, VAR4 *VAR5, VAR6 *VAR7)
{
    struct VAR8 *VAR9;
    int VAR10 = 0;
    VAR9 = FUN2(VAR3, VAR7, sizeof(*VAR9));
    if (!FUN3(VAR11, VAR9, sizeof(*VAR9)))
        goto VAR12;
    VAR10 |= FUN4((VAR1), &VAR9->VAR1);
    if (VAR10)
        goto VAR12;
    FUN5(&VAR9->VAR13, &VAR9->VAR14, VAR7, VAR5->VAR1[0]);
    if (VAR10)
        goto VAR12;
    if (VAR15 > 1)
    {
        VAR10 |= FUN6(VAR9->VAR16, &VAR5->VAR1[1], sizeof(VAR9->VAR16));
    }
    if (VAR10)
        goto VAR12;
    if (VAR3->VAR17.VAR18 & VAR19)
    {
        VAR10 |= FUN4(VAR3->VAR17.VAR20, &VAR9->VAR21);
    }
    else
    {
        VAR10 |= FUN4(VAR9->VAR22, &VAR9->VAR21);
        VAR10 |= FUN4(0xb858, (short *)(VAR9->VAR22 + 0));
        VAR10 |= FUN4(VAR23, (int *)(VAR9->VAR22 + 2));
        VAR10 |= FUN4(0x80cd, (short *)(VAR9->VAR22 + 6));
    }
    if (VAR10)
        goto VAR12;
    VAR7->VAR24[VAR25] = (unsigned long)VAR9;
    VAR7->VAR26 = (unsigned long)VAR3->VAR17.VAR27;
    FUN7(VAR7, VAR28, VAR29);
    FUN7(VAR7, VAR30, VAR29);
    FUN7(VAR7, VAR31, VAR29);
    FUN7(VAR7, VAR32, VAR33);
    VAR7->VAR34 &= ~VAR35;
    return;
VAR12:
    if (VAR1 == VAR36)
        VAR3->VAR17.VAR27 = VAR37;
    FUN8(VAR36);
}