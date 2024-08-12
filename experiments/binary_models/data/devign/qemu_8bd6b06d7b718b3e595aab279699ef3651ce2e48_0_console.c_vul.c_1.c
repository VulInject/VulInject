void FUN1(unsigned int VAR1)
{
    VAR2 *VAR3;
    if (VAR1 >= VAR4)
        return;
    if (VAR5)
    {
        VAR5->VAR6 = FUN2(VAR5->VAR7);
        VAR5->VAR8 = FUN3(VAR5->VAR7);
    }
    VAR3 = VAR9[VAR1];
    if (VAR3)
    {
        VAR10 *VAR7 = VAR3->VAR7;
        if (VAR5->VAR11)
        {
            FUN4(VAR5->VAR11);
        }
        VAR5 = VAR3;
        if (FUN5(VAR3->VAR7))
        {
            VAR7->VAR12 = FUN6(VAR7, VAR3->VAR6, VAR3->VAR8);
        }
        else
        {
            VAR3->VAR7->VAR12->VAR13 = VAR3->VAR13;
            VAR3->VAR7->VAR12->VAR14 = VAR3->VAR14;
        }
        if (VAR3->VAR11)
        {
            FUN7(VAR3->VAR11, FUN8(VAR15) + VAR16 / 2);
        }
        FUN9(VAR3->VAR7);
        FUN10();
    }
}