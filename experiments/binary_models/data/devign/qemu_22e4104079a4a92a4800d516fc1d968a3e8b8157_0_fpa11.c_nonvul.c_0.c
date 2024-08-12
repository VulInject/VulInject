unsigned int FUN1(unsigned int VAR1, VAR2 *VAR3, VAR4 *VAR5)
{
    unsigned int VAR6 = 0;
    VAR2 *VAR7;
    VAR8 = VAR3;
    VAR9 = VAR5;
    fprintf(VAR10, "", VAR1, VAR5[VAR11]);
    VAR7 = FUN2();
    if (VAR7->VAR12 == 0)
    {
        FUN3();
        FUN4(VAR13);
        FUN5(VAR14);
        VAR7->VAR12 = 1;
    }
    FUN6(0, &VAR7->VAR15);
    if (FUN7(VAR1, VAR16))
    {
        VAR6 = FUN8(VAR1);
    }
    else if (FUN7(VAR1, VAR17))
    {
        VAR6 = FUN9(VAR1);
    }
    else if (FUN7(VAR1, VAR18))
    {
        VAR6 = FUN10(VAR1);
    }
    else
    {
        VAR6 = 0;
    }
    if (VAR6 == 1 && FUN11(&VAR7->VAR15))
    {
        VAR6 = -FUN11(&VAR7->VAR15);
    }
    return (VAR6);
}