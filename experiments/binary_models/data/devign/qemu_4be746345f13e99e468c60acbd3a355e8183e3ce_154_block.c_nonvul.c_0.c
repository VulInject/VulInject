void FUN1(VAR1 *VAR2, int *VAR3, unsigned VAR4, unsigned VAR5, unsigned VAR6, VAR7 **VAR8)
{
    VAR9 *VAR10;
    if (!VAR2->VAR11 && !VAR2->VAR12 && !VAR2->VAR13)
    {
        VAR10 = FUN2(VAR2->VAR14);
        VAR2->VAR11 = VAR10->VAR11;
        VAR2->VAR12 = VAR10->VAR12;
        VAR2->VAR13 = VAR10->VAR13;
        if (VAR3)
        {
            *VAR3 = VAR10->VAR15;
        }
    }
    if (!VAR2->VAR11 && !VAR2->VAR12 && !VAR2->VAR13)
    {
        FUN3(VAR2->VAR14, &VAR2->VAR11, &VAR2->VAR12, &VAR2->VAR13, VAR3);
    }
    else if (VAR3 && *VAR3 == VAR16)
    {
        *VAR3 = FUN4(VAR2->VAR11, VAR2->VAR12, VAR2->VAR13);
    }
    if (VAR2->VAR11 || VAR2->VAR12 || VAR2->VAR13)
    {
        if (VAR2->VAR11 < 1 || VAR2->VAR11 > VAR4)
        {
            FUN5(VAR8, "", VAR4);
            return;
        }
        if (VAR2->VAR12 < 1 || VAR2->VAR12 > VAR5)
        {
            FUN5(VAR8, "", VAR5);
            return;
        }
        if (VAR2->VAR13 < 1 || VAR2->VAR13 > VAR6)
        {
            FUN5(VAR8, "", VAR6);
            return;
        }
    }
}