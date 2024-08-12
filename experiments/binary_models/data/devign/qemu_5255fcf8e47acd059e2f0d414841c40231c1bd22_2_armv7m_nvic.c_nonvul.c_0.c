static void FUN1(VAR1 *VAR2)
{
    int VAR3;
    int VAR4 = VAR5;
    int VAR6 = VAR5;
    int VAR7 = 0;
    for (VAR3 = 1; VAR3 < VAR2->VAR8; VAR3++)
    {
        VAR9 *VAR10 = &VAR2->VAR11[VAR3];
        if (VAR10->VAR12 && VAR10->VAR13 && VAR10->VAR14 < VAR4)
        {
            VAR4 = VAR10->VAR14;
            VAR7 = VAR3;
        }
        if (VAR10->VAR15 && VAR10->VAR14 < VAR6)
        {
            VAR6 = VAR10->VAR14;
        }
    }
    if (VAR6 > 0)
    {
        VAR6 &= FUN2(VAR2);
    }
    if (VAR4 > 0)
    {
        VAR4 &= FUN2(VAR2);
    }
    VAR2->VAR16 = VAR7;
    VAR2->VAR17 = VAR4;
    VAR2->VAR18 = VAR6;
    FUN3(VAR2->VAR16, VAR2->VAR17, VAR2->VAR18);
}