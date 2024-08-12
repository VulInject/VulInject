static inline VAR1 *FUN1(VAR2 *VAR3, VAR1 *VAR4)
{
    unsigned int VAR5 = VAR3->VAR6 & VAR7;
    int VAR8 = 0;
    if (VAR3->VAR9 == 1 && VAR3->VAR10->VAR11.VAR8)
    {
        VAR8 = 1;
    }
    if (!VAR3->VAR12)
    {
        if (VAR3->VAR9 == 0)
        {
            return &VAR13[VAR3->VAR14];
        }
        else if (VAR3->VAR14 == 0)
        {
            return &VAR13[VAR3->VAR9];
        }
        if (VAR3->VAR14 == 1 && VAR3->VAR10->VAR11.VAR8)
        {
            VAR8 = 1;
        }
        *VAR4 = FUN2();
        FUN3(*VAR4, VAR13[VAR3->VAR9], VAR13[VAR3->VAR14]);
        if (VAR8)
        {
            FUN4(VAR15, *VAR4);
        }
        return VAR4;
    }
    if (!VAR5)
    {
        if (VAR3->VAR16 == 0)
        {
            return &VAR13[VAR3->VAR9];
        }
        *VAR4 = FUN2();
        FUN5(*VAR4, (VAR17)((VAR18)VAR3->VAR16));
        FUN3(*VAR4, VAR13[VAR3->VAR9], *VAR4);
    }
    else
    {
        *VAR4 = FUN2();
        FUN3(*VAR4, VAR13[VAR3->VAR9], *(FUN6(VAR3)));
    }
    if (VAR8)
    {
        FUN4(VAR15, *VAR4);
    }
    return VAR4;
}