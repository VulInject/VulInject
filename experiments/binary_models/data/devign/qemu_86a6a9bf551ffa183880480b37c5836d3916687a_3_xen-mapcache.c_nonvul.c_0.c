void FUN1(void)
{
    unsigned long VAR1;
    VAR2 *VAR3;
    FUN2();
    FUN3();
    FUN4(VAR3, &VAR4->VAR5, VAR6) { FUN5(""
                                                                        "" VAR7 "",
                                                                        VAR3->VAR8, VAR3->VAR9); }
    for (VAR1 = 0; VAR1 < VAR4->VAR10; VAR1++)
    {
        VAR11 *VAR12 = &VAR4->VAR12[VAR1];
        if (VAR12->VAR13 == NULL)
        {
            continue;
        }
        if (VAR12->VAR14 > 0)
        {
            continue;
        }
        if (FUN6(VAR12->VAR13, VAR12->VAR15) != 0)
        {
            FUN7("");
            FUN8(-1);
        }
        VAR12->VAR8 = 0;
        VAR12->VAR13 = NULL;
        VAR12->VAR15 = 0;
        FUN9(VAR12->VAR16);
        VAR12->VAR16 = NULL;
    }
    VAR4->VAR17 = NULL;
    FUN10();
}