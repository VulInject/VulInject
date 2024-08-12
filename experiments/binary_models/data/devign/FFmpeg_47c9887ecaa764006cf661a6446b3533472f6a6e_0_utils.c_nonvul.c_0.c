int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    if (VAR4->VAR5 < 0)
    {
        FUN2(VAR2, VAR6, "", VAR4->VAR5);
        return FUN3(VAR7);
    }
    if (VAR5 < 0 || VAR5 > VAR8 - VAR9)
    {
        FUN2(VAR2, VAR6, "", VAR5, VAR8 - VAR9);
        return FUN3(VAR7);
    }
    if (VAR2)
    {
        FUN4(!VAR4->VAR10 || VAR4->VAR10 != VAR2->VAR11->VAR12);
        if (!VAR4->VAR10 || VAR4->VAR5 < VAR5)
        {
            FUN5(&VAR2->VAR11->VAR12, &VAR2->VAR11->VAR13, VAR5);
            VAR4->VAR10 = VAR2->VAR11->VAR12;
            VAR4->VAR5 = VAR2->VAR11->VAR13;
            VAR4->VAR14 = NULL;
        }
    }
    if (VAR4->VAR10)
    {
        VAR15 *VAR16 = VAR4->VAR16;
        void *VAR14 = VAR4->VAR14;
        if (VAR4->VAR5 < VAR5)
        {
            FUN2(VAR2, VAR6, "", VAR4->VAR5, VAR5);
            return FUN3(VAR7);
        }
        FUN6(VAR4);
        VAR4->VAR14 = VAR14;
        VAR4->VAR16 = VAR16;
        VAR4->VAR5 = VAR5;
        return 0;
    }
    else
    {
        int VAR17 = FUN7(VAR4, VAR5);
        if (VAR17 < 0)
            FUN2(VAR2, VAR6, "", VAR5);
        return VAR17;
    }
}