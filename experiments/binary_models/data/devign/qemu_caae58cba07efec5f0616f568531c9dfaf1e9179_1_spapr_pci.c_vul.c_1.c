static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6 = FUN3(VAR2);
    char *VAR7;
    int VAR8;
    VAR9 *VAR10;
    VAR4->VAR11 = FUN4("" VAR12, VAR4->VAR13);
    VAR7 = alloca(strlen(VAR4->VAR11) + 32);
    sprintf(VAR7, "", VAR4->VAR11);
    FUN5(&VAR4->VAR14, VAR7, VAR15);
    sprintf(VAR7, "", VAR4->VAR11);
    FUN6(&VAR4->VAR16, VAR7, &VAR4->VAR14, VAR17, VAR4->VAR18);
    FUN7(FUN8(), VAR4->VAR19, &VAR4->VAR16);
    sprintf(VAR7, "", VAR4->VAR11);
    FUN5(&VAR4->VAR20, VAR7, VAR21);
    FUN7(FUN9(), 0, &VAR4->VAR20);
    sprintf(VAR7, "", VAR4->VAR11);
    FUN10(&VAR4->VAR22, &VAR23, VAR4, VAR7, VAR21);
    FUN7(FUN8(), VAR4->VAR24, &VAR4->VAR22);
    if (VAR25)
    {
        sprintf(VAR7, "", VAR4->VAR11);
        FUN10(&VAR4->VAR26, &VAR27, VAR4, VAR7, VAR28 * 0x10000);
        FUN7(FUN8(), VAR4->VAR29, &VAR4->VAR26);
    }
    VAR10 = FUN11(FUN12(VAR2), VAR4->VAR30 ? VAR4->VAR30 : VAR4->VAR11, VAR31, VAR32, VAR4, &VAR4->VAR14, &VAR4->VAR20, FUN13(0, 0), VAR33);
    VAR6->VAR10 = VAR10;
    VAR4->VAR34 = VAR35 | (FUN14(VAR10) << 16);
    VAR4->VAR36 = 0;
    VAR4->VAR37 = 0x40000000;
    VAR4->VAR38 = FUN15(VAR4->VAR34, VAR4->VAR37);
    FUN16(VAR10, VAR39, VAR4);
    FUN17(&VAR40->VAR41, VAR4, VAR42);
    for (VAR8 = 0; VAR8 < VAR33; VAR8++)
    {
        uint32_t VAR43;
        VAR43 = FUN18(0);
        if (!VAR43)
        {
            return -1;
        }
        VAR4->VAR44[VAR8].VAR43 = VAR43;
    }
    return 0;
}