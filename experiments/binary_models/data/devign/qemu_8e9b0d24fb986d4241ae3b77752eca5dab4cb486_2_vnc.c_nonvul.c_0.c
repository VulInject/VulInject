void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    long VAR4;
    if (VAR3->VAR5.VAR6 && VAR3->VAR5.VAR7)
        VAR4 = FUN2(VAR3);
    else if (VAR3->VAR8)
    {
        VAR4 = FUN3(VAR3);
        if (VAR4 == -1)
        {
            FUN4(VAR3);
            return;
        }
        else if (VAR4 == -2)
        {
            FUN5(VAR3);
            return;
        }
    }
    else
    {
        VAR4 = FUN6(VAR3);
    }
    if (!VAR4)
    {
        if (VAR3->VAR9 == -1)
            FUN7(VAR3);
        return;
    }
    while (VAR3->VAR10 && VAR3->VAR11.VAR12 >= VAR3->VAR13)
    {
        size_t VAR14 = VAR3->VAR13;
        int VAR4;
        VAR4 = VAR3->FUN8(VAR3, VAR3->VAR11.VAR15, VAR14);
        if (VAR3->VAR9 == -1)
        {
            FUN7(VAR3);
            return;
        }
        if (!VAR4)
        {
            FUN9(&VAR3->VAR11, VAR14);
        }
        else
        {
            VAR3->VAR13 = VAR4;
        }
    }
}