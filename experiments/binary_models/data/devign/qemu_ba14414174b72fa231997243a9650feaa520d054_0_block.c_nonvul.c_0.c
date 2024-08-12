void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR3 *VAR5;
    VAR6 *VAR7;
    VAR8 *VAR9;
    VAR7 = FUN2();
    for (VAR9 = VAR10; VAR9 != NULL; VAR9 = VAR9->VAR11)
    {
        VAR5 = FUN3(""
                                 "" VAR12 ""
                                 "" VAR12 ""
                                 "" VAR12 ""
                                 "" VAR12 "",
                                 VAR9->VAR13, VAR9->VAR14, VAR9->VAR15, VAR9->VAR16, VAR9->VAR17);
        FUN4(VAR7, VAR5);
    }
    *VAR4 = FUN5(VAR7);
}