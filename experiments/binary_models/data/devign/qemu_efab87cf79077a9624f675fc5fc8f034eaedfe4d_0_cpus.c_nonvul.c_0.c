void FUN1(QEMUClockType VAR1)
{
    int64_t VAR2;
    int64_t VAR3;
    if (VAR1 != VAR4 || !VAR5)
    {
        return;
    }
    if (VAR6)
    {
        FUN2();
        FUN3(VAR7);
    }
    if (!FUN4())
    {
        return;
    }
    if (FUN5())
    {
        return;
    }
    VAR2 = FUN6(VAR8);
    VAR3 = FUN7(VAR4);
    if (VAR3 < 0)
    {
        static bool VAR9;
        if (!VAR6 && !VAR9)
        {
            FUN8("");
            VAR9 = true;
        }
        return;
    }
    if (VAR3 > 0)
    {
        if (!VAR6)
        {
            FUN9(&VAR10.VAR11);
            VAR10.VAR12 += VAR3;
            FUN10(&VAR10.VAR11);
            FUN11(VAR4);
        }
        else
        {
            FUN9(&VAR10.VAR11);
            if (VAR13 == -1 || VAR13 > VAR2)
            {
                VAR13 = VAR2;
            }
            FUN10(&VAR10.VAR11);
            FUN12(VAR7, VAR2 + VAR3);
        }
    }
    else if (VAR3 == 0)
    {
        FUN11(VAR4);
    }
}