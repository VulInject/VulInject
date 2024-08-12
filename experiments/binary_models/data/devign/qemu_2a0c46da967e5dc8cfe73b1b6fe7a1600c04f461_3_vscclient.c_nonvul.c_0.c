FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = (VAR4->VAR6);
    int VAR7 = 1 + ((VAR2->VAR8 - sizeof(VAR3)) / sizeof(VAR5));
    int VAR9;
    VAR4->VAR10 = FUN2(VAR4->VAR10);
    if (VAR4->VAR10 != VAR11)
    {
        if (VAR12 > 0)
        {
            FUN3("", VAR12, VAR11);
        }
    }
    if (VAR4->VAR13 != VAR14)
    {
        FUN3("", VAR4->VAR13, VAR14);
        return -1;
    }
    for (VAR9 = 0; VAR9 < VAR7; ++VAR9)
    {
        VAR6[VAR9] = FUN2(VAR6[VAR9]);
    }
    FUN4(VAR15, VAR16, NULL, 0);
    FUN5("", VAR17, NULL);
    return 0;
}