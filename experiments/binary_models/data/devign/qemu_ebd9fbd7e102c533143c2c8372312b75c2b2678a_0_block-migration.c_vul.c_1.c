static int FUN1(VAR1 *VAR2, void *VAR3)
{
    int VAR4;
    int64_t VAR5 = FUN2(VAR2);
    FUN3("", VAR6.VAR7, VAR6.VAR8);
    VAR4 = FUN4(VAR2);
    if (VAR4)
    {
        return VAR4;
    }
    FUN5();
    FUN6();
    while ((VAR6.VAR7 + VAR6.VAR9) * VAR10 < FUN7(VAR2))
    {
        FUN8();
        if (VAR6.VAR11 == 0)
        {
            if (FUN9(VAR2) == 0)
            {
                VAR6.VAR11 = 1;
            }
            VAR4 = 0;
        }
        else
        {
            FUN10();
            VAR4 = FUN11(VAR2, 1);
            FUN12();
        }
        if (VAR4 < 0)
        {
            return VAR4;
        }
        FUN6();
        if (VAR4 != 0)
        {
            break;
        }
    }
    FUN8();
    VAR4 = FUN4(VAR2);
    if (VAR4)
    {
        return VAR4;
    }
    FUN13(VAR2, VAR12);
    return FUN2(VAR2) - VAR5;
}