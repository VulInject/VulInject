static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6;
    int VAR7;
    VAR8 *VAR9 = VAR2->VAR10;
    uint64_t VAR11 = VAR4->VAR12;
    uint64_t VAR13;
    FUN2(&VAR9->mutex);
    if (FUN3(VAR9, VAR11, VAR4->VAR14, VAR4))
    {
        goto VAR15;
    }
    for (;;)
    {
        VAR6 = FUN4(VAR9);
        if (VAR6)
        {
            break;
        }
        FUN5(&VAR9->VAR16, VAR4, VAR17);
        FUN6(&VAR9->mutex);
        FUN7();
        FUN2(&VAR9->mutex);
    }
    if (FUN8(VAR9, VAR6) < 0)
    {
        FUN9(VAR6);
        VAR4->VAR18 = -VAR19;
        goto VAR15;
    }
    VAR4->VAR11 = 0;
    VAR4->VAR13 = FUN10(VAR4->VAR14, VAR9->VAR20 - VAR11);
    VAR6->VAR21 = 0;
    FUN11(VAR6->VAR22);
    VAR6->VAR23 = VAR11;
    VAR6->VAR24 = FUN10(VAR4->VAR13 + VAR9->VAR25, VAR9->VAR20 - VAR11);
    VAR13 = VAR11 + VAR6->VAR24 - 1;
    VAR6->VAR22 = FUN12(VAR6->VAR24);
    if (VAR6->VAR24 && VAR6->VAR22 == NULL)
    {
        FUN9(VAR6);
        VAR4->VAR18 = -VAR26;
        goto VAR15;
    }
    VAR6->VAR4[0] = VAR4;
    snprintf(VAR6->VAR27, 127, "" VAR28 "" VAR28, VAR11, VAR13);
    FUN13("" VAR28 "" VAR28 "", VAR4->VAR14, VAR11, VAR6->VAR27);
    FUN14(VAR6->VAR29, VAR30, VAR6->VAR27);
    FUN15(VAR9->VAR31, VAR6->VAR29);
    FUN16(VAR9->VAR31, VAR32, 0, &VAR7);
VAR15:
    FUN6(&VAR9->mutex);
}