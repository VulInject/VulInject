static void FUN1(int VAR1, struct VAR2 *VAR3, VAR4 *VAR5, VAR6 *VAR7, VAR8 *VAR9)
{
    struct VAR10 *VAR11;
    int VAR12 = 0;
    VAR11 = FUN2(VAR3, VAR9, sizeof(*VAR11));
    if (!FUN3(VAR13, VAR11, sizeof(*VAR11)))
        goto VAR14;
    VAR12 |= FUN4((VAR1), &VAR11->VAR1);
    VAR12 |= FUN4((VAR15)&VAR11->VAR5, &VAR11->VAR16);
    VAR12 |= FUN4((VAR15)&VAR11->VAR17, &VAR11->VAR18);
    VAR12 |= FUN5(&VAR11->VAR5, VAR5);
    if (VAR12)
        goto VAR14;
    VAR12 |= FUN4(0, &VAR11->VAR17.VAR19);
    VAR12 |= FUN4(0, &VAR11->VAR17.VAR20);
    VAR12 |= FUN4(0, &VAR11->VAR17.VAR21.VAR22);
    VAR12 |= FUN4(0, &VAR11->VAR17.VAR21.VAR23);
    VAR12 |= FUN4(0, &VAR11->VAR17.VAR21.VAR24);
    VAR12 |= FUN6(&VAR11->VAR17.VAR25, &VAR11->VAR26, VAR9, VAR7->VAR1[0]);
    VAR12 |= FUN7(&VAR11->VAR17.VAR27, VAR7, sizeof(*VAR7));
    if (VAR12)
        goto VAR14;
    if (VAR3->VAR28.VAR29 & VAR30)
    {
        VAR12 |= FUN4(VAR3->VAR28.VAR31, &VAR11->VAR32);
    }
    else
    {
        VAR12 |= FUN4(VAR11->VAR33, &VAR11->VAR32);
        VAR12 |= FUN4(0xb8, (char *)(VAR11->VAR33 + 0));
        VAR12 |= FUN4(VAR34, (int *)(VAR11->VAR33 + 1));
        VAR12 |= FUN4(0x80cd, (short *)(VAR11->VAR33 + 5));
    }
    if (VAR12)
        goto VAR14;
    VAR9->VAR35[VAR36] = (unsigned long)VAR11;
    VAR9->VAR37 = (unsigned long)VAR3->VAR28.VAR38;
    FUN8(VAR9, VAR39, VAR40);
    FUN8(VAR9, VAR41, VAR40);
    FUN8(VAR9, VAR42, VAR40);
    FUN8(VAR9, VAR43, VAR44);
    VAR9->VAR45 &= ~VAR46;
    return;
VAR14:
    if (VAR1 == VAR47)
        VAR3->VAR28.VAR38 = VAR48;
    FUN9(VAR47);
}