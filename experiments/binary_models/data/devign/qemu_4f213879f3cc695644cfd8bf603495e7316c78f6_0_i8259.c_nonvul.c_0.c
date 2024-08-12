int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR3, VAR5.VAR6, VAR2);
    int VAR7, VAR8, VAR9;
    VAR7 = FUN3(VAR4);
    if (VAR7 >= 0)
    {
        if (VAR7 == 2)
        {
            VAR8 = FUN3(VAR10);
            if (VAR8 >= 0)
            {
                FUN4(VAR10, VAR8);
            }
            else
            {
                VAR8 = 7;
            }
            VAR9 = VAR10->VAR11 + VAR8;
        }
        else
        {
            VAR9 = VAR4->VAR11 + VAR7;
        }
        FUN4(VAR4, VAR7);
    }
    else
    {
        VAR7 = 7;
        VAR9 = VAR4->VAR11 + VAR7;
    }
    if (VAR7 == 2)
    {
        VAR7 = VAR8 + 8;
    }
    FUN5("", VAR7, (double)(FUN6(VAR12) - VAR13[VAR7]) * 1000000.0 / FUN7());
    FUN8("", VAR7);
    return VAR9;
}