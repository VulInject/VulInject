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
    FUN7(FUN8(), VAR4->VAR22, &VAR4->VAR20);
    if (VAR23)
    {
        sprintf(VAR7, "", VAR4->VAR11);
        FUN9(&VAR4->VAR24, &VAR25, VAR4, VAR7, VAR26 * 0x10000);
        FUN7(FUN8(), VAR4->VAR27, &VAR4->VAR24);
    }
    VAR10 = FUN10(FUN11(VAR2), VAR4->VAR28 ? VAR4->VAR28 : VAR4->VAR11, VAR29, VAR30, VAR4, &VAR4->VAR14, &VAR4->VAR20, FUN12(0, 0), VAR31);
    VAR6->VAR10 = VAR10;
    VAR4->VAR32 = VAR33 | (FUN13(VAR10) << 16);
    VAR4->VAR34 = 0;
    VAR4->VAR35 = 0x40000000;
    VAR4->VAR36 = FUN14(VAR4->VAR32, VAR4->VAR35);
    FUN15(VAR10, VAR37, VAR4);
    FUN16(&VAR38->VAR39, VAR4, VAR40);
    for (VAR8 = 0; VAR8 < VAR31; VAR8++)
    {
        uint32_t VAR41;
        VAR41 = FUN17(0);
        if (!VAR41)
        {
            return -1;
        }
        VAR4->VAR42[VAR8].VAR41 = VAR41;
    }
    return 0;
}