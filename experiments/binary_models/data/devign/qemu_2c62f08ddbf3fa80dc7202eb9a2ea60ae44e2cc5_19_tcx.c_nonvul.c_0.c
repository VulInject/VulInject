static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR3, VAR2);
    ram_addr_t VAR5 = 0;
    int VAR6;
    VAR7 *VAR8;
    FUN3(&VAR4->VAR9, "", VAR4->VAR10 * (1 + 4 + 4));
    FUN4(&VAR4->VAR9);
    VAR8 = FUN5(&VAR4->VAR9);
    VAR4->VAR11 = VAR8;
    VAR6 = VAR4->VAR10;
    FUN6(&VAR4->VAR12, "", &VAR4->VAR9, VAR5, VAR6);
    FUN7(VAR2, &VAR4->VAR12);
    VAR5 += VAR6;
    VAR8 += VAR6;
    FUN8(&VAR4->VAR13, &VAR14, VAR4, "", VAR15);
    FUN7(VAR2, &VAR4->VAR13);
    FUN8(&VAR4->VAR16, &VAR17, VAR4, "", VAR18);
    FUN7(VAR2, &VAR4->VAR16);
    FUN8(&VAR4->VAR19, &VAR17, VAR4, "", VAR20);
    FUN7(VAR2, &VAR4->VAR19);
    if (VAR4->VAR21 == 24)
    {
        VAR6 = VAR4->VAR10 * 4;
        VAR4->VAR22 = (VAR23 *)VAR8;
        VAR4->VAR24 = VAR5;
        FUN6(&VAR4->VAR25, "", &VAR4->VAR9, VAR5, VAR6);
        FUN7(VAR2, &VAR4->VAR25);
        VAR5 += VAR6;
        VAR8 += VAR6;
        VAR6 = VAR4->VAR10 * 4;
        VAR4->VAR26 = (VAR23 *)VAR8;
        VAR4->VAR27 = VAR5;
        FUN6(&VAR4->VAR28, "", &VAR4->VAR9, VAR5, VAR6);
        FUN7(VAR2, &VAR4->VAR28);
        VAR4->VAR29 = FUN9(VAR30, VAR31, NULL, VAR4);
    }
    else
    {
        FUN8(&VAR4->VAR32, &VAR17, VAR4, "", VAR33);
        FUN7(VAR2, &VAR4->VAR32);
        VAR4->VAR29 = FUN9(VAR34, VAR35, NULL, VAR4);
    }
    FUN10(VAR4->VAR29, VAR4->VAR36, VAR4->VAR37);
    return 0;
}