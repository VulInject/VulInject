void FUN1(void)
{
    int64_t VAR1;
    int64_t VAR2;
    if (!VAR3)
    {
        return;
    }
    if (!FUN2())
    {
        return;
    }
    if (!FUN3(VAR4))
    {
        return;
    }
    if (!FUN4())
    {
        return;
    }
    if (FUN5())
    {
        return;
    }
    VAR1 = FUN6(VAR5);
    VAR2 = FUN7(VAR6);
    if (VAR2 < 0)
    {
        static bool VAR7;
        if (!VAR8 && !VAR7)
        {
            FUN8("");
            VAR7 = true;
        }
        return;
    }
    if (VAR2 > 0)
    {
        if (!VAR8)
        {
            FUN9(&VAR9.VAR10);
            VAR9.VAR11 += VAR2;
            FUN10(&VAR9.VAR10);
            FUN11(VAR6);
        }
        else
        {
            FUN9(&VAR9.VAR10);
            if (VAR12 == -1 || VAR12 > VAR1)
            {
                VAR12 = VAR1;
            }
            FUN10(&VAR9.VAR10);
            FUN12(VAR13, VAR1 + VAR2);
        }
    }
    else if (VAR2 == 0)
    {
        FUN11(VAR6);
    }
}