FUN1(VAR1 *VAR2, VAR1 *VAR3, VAR4 *VAR5)
{
    VAR6 *VAR7 = FUN2(FUN3());
    int VAR8 = VAR2->VAR9;
    VAR10 *VAR11;
    VAR12 *VAR13;
    VAR14 *VAR15;
    VAR16 *VAR17;
    int VAR18;
    VAR11 = FUN4(VAR2, sizeof *VAR11);
    VAR11->VAR19 = FUN5(VAR20);
    VAR11->VAR21 = FUN5(1);
    for (VAR18 = 0; VAR18 < VAR7->VAR22; VAR18++)
    {
        VAR23 *VAR24 = FUN4(VAR2, sizeof *VAR24);
        VAR24->VAR25 = VAR26;
        VAR24->VAR27 = sizeof(*VAR24);
        VAR24->VAR28 = VAR18;
        VAR24->VAR29 = VAR18;
        if (FUN6(VAR18, VAR5->VAR30))
        {
            VAR24->VAR21 = FUN5(1);
        }
        else
        {
            VAR24->VAR21 = FUN5(0);
        }
    }
    VAR13 = FUN4(VAR2, sizeof *VAR13);
    VAR13->VAR25 = VAR31;
    VAR13->VAR27 = sizeof(*VAR13);
    VAR13->VAR32 = VAR33;
    VAR13->VAR34 = FUN5(VAR35);
    VAR13->VAR36 = FUN5(0);
    if (VAR7->VAR37)
    {
        VAR15 = FUN4(VAR2, sizeof *VAR15);
        VAR15->VAR25 = VAR38;
        VAR15->VAR27 = sizeof(*VAR15);
        VAR15->VAR39 = 0;
        VAR15->VAR40 = FUN5(2);
        VAR15->VAR21 = FUN7(0);
    }
    for (VAR18 = 1; VAR18 < 16; VAR18++)
    {
        if (!(VAR41 & (1 << VAR18)))
        {
            continue;
        }
        VAR15 = FUN4(VAR2, sizeof *VAR15);
        VAR15->VAR25 = VAR38;
        VAR15->VAR27 = sizeof(*VAR15);
        VAR15->VAR39 = VAR18;
        VAR15->VAR40 = FUN5(VAR18);
        VAR15->VAR21 = FUN7(0xd);
    }
    VAR17 = FUN4(VAR2, sizeof *VAR17);
    VAR17->VAR25 = VAR42;
    VAR17->VAR27 = sizeof(*VAR17);
    VAR17->VAR28 = 0xff;
    VAR17->VAR21 = FUN7(0);
    VAR17->VAR43 = 1;
    FUN8(VAR3, VAR2, (void *)(VAR2->VAR44 + VAR8), "", VAR2->VAR9 - VAR8, 1, NULL, NULL);
}