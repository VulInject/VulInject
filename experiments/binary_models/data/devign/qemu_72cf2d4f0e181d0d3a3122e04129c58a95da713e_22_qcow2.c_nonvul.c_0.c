static int FUN1(VAR1 *VAR2, const char *VAR3, int VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    int VAR8, VAR9, VAR10, VAR11;
    QCowHeader VAR12;
    uint64_t VAR13;
    VAR11 = FUN2(&VAR6->VAR14, VAR3, VAR4);
    if (VAR11 < 0)
        return VAR11;
    if (FUN3(VAR6->VAR14, 0, &VAR12, sizeof(VAR12)) != sizeof(VAR12))
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
    if (VAR12.VAR20 <= 1 || VAR12.VAR21 < VAR31 || VAR12.VAR21 > VAR32)
        goto VAR15;
    if (VAR12.VAR22 > VAR33)
        goto VAR15;
    VAR6->VAR34 = VAR12.VAR22;
    if (VAR6->VAR34)
        VAR2->VAR35 = 1;
    VAR6->VAR21 = VAR12.VAR21;
    VAR6->VAR36 = 1 << VAR6->VAR21;
    VAR6->VAR37 = 1 << (VAR6->VAR21 - 9);
    VAR6->VAR38 = VAR6->VAR21 - 3;
    VAR6->VAR39 = 1 << VAR6->VAR38;
    VAR2->VAR40 = VAR12.VAR20 / 512;
    VAR6->VAR41 = (62 - (VAR6->VAR21 - 8));
    VAR6->VAR42 = (1 << (VAR6->VAR21 - 8)) - 1;
    VAR6->VAR43 = (1LL << VAR6->VAR41) - 1;
    VAR6->VAR25 = VAR12.VAR25;
    VAR6->VAR44 = VAR12.VAR26 << (VAR6->VAR21 - 3);
    VAR6->VAR27 = VAR12.VAR27;
    VAR6->VAR28 = VAR12.VAR28;
    VAR6->VAR24 = VAR12.VAR24;
    VAR10 = VAR6->VAR21 + VAR6->VAR38;
    VAR6->VAR45 = (VAR12.VAR20 + (1LL << VAR10) - 1) >> VAR10;
    if (VAR6->VAR24 < VAR6->VAR45)
        goto VAR15;
    VAR6->VAR23 = VAR12.VAR23;
    VAR6->VAR46 = FUN6(FUN7(VAR6->VAR24 * sizeof(VAR47), 512));
    if (FUN3(VAR6->VAR14, VAR6->VAR23, VAR6->VAR46, VAR6->VAR24 * sizeof(VAR47)) != VAR6->VAR24 * sizeof(VAR47))
        goto VAR15;
    for (VAR9 = 0; VAR9 < VAR6->VAR24; VAR9++)
    {
        FUN5(&VAR6->VAR46[VAR9]);
    }
    VAR6->VAR48 = FUN8(VAR6->VAR39 * VAR49 * sizeof(VAR47));
    VAR6->VAR50 = FUN8(VAR6->VAR36);
    VAR6->VAR51 = FUN8(VAR52 * VAR6->VAR36 + 512);
    VAR6->VAR53 = -1;
    if (FUN9(VAR2) < 0)
        goto VAR15;
    FUN10(&VAR6->VAR54);
    if (VAR12.VAR18)
        VAR13 = VAR12.VAR18;
    else
        VAR13 = VAR6->VAR36;
    if (FUN11(VAR2, sizeof(VAR12), VAR13))
        goto VAR15;
    if (VAR12.VAR18 != 0)
    {
        VAR8 = VAR12.VAR19;
        if (VAR8 > 1023)
            VAR8 = 1023;
        if (FUN3(VAR6->VAR14, VAR12.VAR18, VAR2->VAR55, VAR8) != VAR8)
            goto VAR15;
        VAR2->VAR55[VAR8] = '';
    }
    if (FUN12(VAR2) < 0)
        goto VAR15;
    FUN13(VAR2);
    return 0;
VAR15:
    FUN14(VAR2);
    FUN15(VAR2);
    FUN16(VAR6->VAR46);
    FUN16(VAR6->VAR48);
    FUN16(VAR6->VAR50);
    FUN16(VAR6->VAR51);
    FUN17(VAR6->VAR14);
    return -1;
}