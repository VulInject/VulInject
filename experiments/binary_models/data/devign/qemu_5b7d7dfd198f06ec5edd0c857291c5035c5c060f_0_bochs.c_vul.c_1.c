static int FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6;
    int VAR7;
    struct bochs_header VAR8;
    struct bochs_header_v1 VAR9;
    VAR2->VAR10 = 1;
    if (FUN2(VAR2->VAR11, 0, &VAR8, sizeof(VAR8)) != sizeof(VAR8))
    {
        goto VAR12;
    }
    if (strcmp(VAR8.VAR13, VAR14) || strcmp(VAR8.VAR15, VAR16) || strcmp(VAR8.VAR17, VAR18) || ((FUN3(VAR8.VAR19) != VAR20) && (FUN3(VAR8.VAR19) != VAR21)))
    {
        return -VAR22;
    }
    if (FUN3(VAR8.VAR19) == VAR21)
    {
        memcpy(&VAR9, &VAR8, sizeof(VAR8));
        VAR2->VAR23 = FUN4(VAR9.VAR24.VAR25.VAR26) / 512;
    }
    else
    {
        VAR2->VAR23 = FUN4(VAR8.VAR24.VAR25.VAR26) / 512;
    }
    VAR5->VAR27 = FUN3(VAR8.VAR24.VAR25.VAR28);
    VAR5->VAR29 = FUN5(VAR5->VAR27 * 4);
    if (FUN2(VAR2->VAR11, FUN3(VAR8.VAR30), VAR5->VAR29, VAR5->VAR27 * 4) != VAR5->VAR27 * 4)
        goto VAR12;
    for (VAR7 = 0; VAR7 < VAR5->VAR27; VAR7++)
        FUN6(&VAR5->VAR29[VAR7]);
    VAR5->VAR31 = FUN3(VAR8.VAR30) + (VAR5->VAR27 * 4);
    VAR5->VAR32 = 1 + (FUN3(VAR8.VAR24.VAR25.VAR33) - 1) / 512;
    VAR5->VAR34 = 1 + (FUN3(VAR8.VAR24.VAR25.VAR35) - 1) / 512;
    VAR5->VAR36 = FUN3(VAR8.VAR24.VAR25.VAR35);
    FUN7(&VAR5->VAR37);
    return 0;
VAR12:
    return -1;
}