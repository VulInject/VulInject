static int FUN1(VAR1 *VAR2, const char *VAR3, int VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    int VAR8, VAR9;
    struct bochs_header VAR10;
    struct bochs_header_v1 VAR11;
    VAR8 = open(VAR3, VAR12 | VAR13);
    if (VAR8 < 0)
    {
        VAR8 = open(VAR3, VAR14 | VAR13);
        if (VAR8 < 0)
            return -1;
    }
    VAR2->VAR15 = 1;
    VAR6->VAR8 = VAR8;
    if (read(VAR8, &VAR10, sizeof(VAR10)) != sizeof(VAR10))
    {
        goto VAR16;
    }
    if (strcmp(VAR10.VAR17, VAR18) || strcmp(VAR10.VAR19, VAR20) || strcmp(VAR10.VAR21, VAR22) || ((FUN2(VAR10.VAR23) != VAR24) && (FUN2(VAR10.VAR23) != VAR25)))
    {
        goto VAR16;
    }
    if (FUN2(VAR10.VAR23) == VAR25)
    {
        memcpy(&VAR11, &VAR10, sizeof(VAR10));
        VAR2->VAR26 = FUN3(VAR11.VAR27.VAR28.VAR29) / 512;
    }
    else
    {
        VAR2->VAR26 = FUN3(VAR10.VAR27.VAR28.VAR29) / 512;
    }
    if (FUN4(VAR6->VAR8, FUN2(VAR10.VAR30), VAR31) == (VAR32)-1)
    {
        goto VAR16;
    }
    VAR6->VAR33 = FUN2(VAR10.VAR27.VAR28.VAR34);
    VAR6->VAR35 = FUN5(VAR6->VAR33 * 4);
    if (read(VAR6->VAR8, VAR6->VAR35, VAR6->VAR33 * 4) != VAR6->VAR33 * 4)
        goto VAR16;
    for (VAR9 = 0; VAR9 < VAR6->VAR33; VAR9++)
        FUN6(&VAR6->VAR35[VAR9]);
    VAR6->VAR36 = FUN2(VAR10.VAR30) + (VAR6->VAR33 * 4);
    VAR6->VAR37 = 1 + (FUN2(VAR10.VAR27.VAR28.VAR38) - 1) / 512;
    VAR6->VAR39 = 1 + (FUN2(VAR10.VAR27.VAR28.VAR40) - 1) / 512;
    VAR6->VAR41 = FUN2(VAR10.VAR27.VAR28.VAR40);
    return 0;
VAR16:
    close(VAR8);
    return -1;
}