static int FUN1(VAR1 *VAR2, const char *VAR3, int VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    int VAR8, VAR9, VAR10, VAR11;
    QCowHeader VAR12;
    VAR11 = FUN2(&VAR6->VAR13, VAR3, VAR4 | VAR14);
    if (VAR11 < 0)
        return VAR11;
    if (FUN3(VAR6->VAR13, 0, &VAR12, sizeof(VAR12)) != sizeof(VAR12))
        goto VAR15;
    FUN4(&VAR12.VAR16);
    FUN4(&VAR12.VAR17);
    FUN5(&VAR12.VAR18);
    FUN4(&VAR12.VAR19);
    FUN5(&VAR12.VAR20);
    FUN4(&VAR12.VAR21);
    FUN4(&VAR12.VAR22);
    FUN5(&VAR12.VAR23);
    FUN4(&VAR12.VAR24);
    FUN5(&VAR12.VAR25);
    FUN4(&VAR12.VAR26);
    FUN5(&VAR12.VAR27);
    FUN4(&VAR12.VAR28);
    if (VAR12.VAR16 != VAR29 || VAR12.VAR17 != VAR30)
        goto VAR15;
    if (VAR12.VAR20 <= 1 || VAR12.VAR21 < 9 || VAR12.VAR21 > 16)
        goto VAR15;
    if (VAR12.VAR22 > VAR31)
        goto VAR15;
    VAR6->VAR32 = VAR12.VAR22;
    if (VAR6->VAR32)
        VAR2->VAR33 = 1;
    VAR6->VAR21 = VAR12.VAR21;
    VAR6->VAR34 = 1 << VAR6->VAR21;
    VAR6->VAR35 = 1 << (VAR6->VAR21 - 9);
    VAR6->VAR36 = VAR6->VAR21 - 3;
    VAR6->VAR37 = 1 << VAR6->VAR36;
    VAR2->VAR38 = VAR12.VAR20 / 512;
    VAR6->VAR39 = (62 - (VAR6->VAR21 - 8));
    VAR6->VAR40 = (1 << (VAR6->VAR21 - 8)) - 1;
    VAR6->VAR41 = (1LL << VAR6->VAR39) - 1;
    VAR6->VAR25 = VAR12.VAR25;
    VAR6->VAR42 = VAR12.VAR26 << (VAR6->VAR21 - 3);
    VAR6->VAR27 = VAR12.VAR27;
    VAR6->VAR28 = VAR12.VAR28;
    VAR6->VAR24 = VAR12.VAR24;
    VAR10 = VAR6->VAR21 + VAR6->VAR36;
    VAR6->VAR43 = (VAR12.VAR20 + (1LL << VAR10) - 1) >> VAR10;
    if (VAR6->VAR24 < VAR6->VAR43)
        goto VAR15;
    VAR6->VAR23 = VAR12.VAR23;
    VAR6->VAR44 = FUN6(VAR6->VAR24 * sizeof(VAR45));
    if (!VAR6->VAR44)
        goto VAR15;
    if (FUN3(VAR6->VAR13, VAR6->VAR23, VAR6->VAR44, VAR6->VAR24 * sizeof(VAR45)) != VAR6->VAR24 * sizeof(VAR45))
        goto VAR15;
    for (VAR9 = 0; VAR9 < VAR6->VAR24; VAR9++)
    {
        FUN5(&VAR6->VAR44[VAR9]);
    }
    VAR6->VAR46 = FUN6(VAR6->VAR37 * VAR47 * sizeof(VAR45));
    if (!VAR6->VAR46)
        goto VAR15;
    VAR6->VAR48 = FUN6(VAR6->VAR34);
    if (!VAR6->VAR48)
        goto VAR15;
    VAR6->VAR49 = FUN6(VAR6->VAR34 + 512);
    if (!VAR6->VAR49)
        goto VAR15;
    VAR6->VAR50 = -1;
    if (FUN7(VAR2) < 0)
        goto VAR15;
    if (VAR12.VAR18 != 0)
    {
        VAR8 = VAR12.VAR19;
        if (VAR8 > 1023)
            VAR8 = 1023;
        if (FUN3(VAR6->VAR13, VAR12.VAR18, VAR2->VAR51, VAR8) != VAR8)
            goto VAR15;
        VAR2->VAR51[VAR8] = '';
    }
    if (FUN8(VAR2) < 0)
        goto VAR15;
    FUN9(VAR2);
    return 0;
VAR15:
    FUN10(VAR2);
    FUN11(VAR2);
    FUN12(VAR6->VAR44);
    FUN12(VAR6->VAR46);
    FUN12(VAR6->VAR48);
    FUN12(VAR6->VAR49);
    FUN13(VAR6->VAR13);
    return -1;
}