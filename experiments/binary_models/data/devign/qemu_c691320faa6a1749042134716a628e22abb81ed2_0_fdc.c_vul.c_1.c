static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR4;
    const VAR5 *VAR6;
    uint64_t VAR7, VAR8;
    int VAR9;
    int VAR10, VAR11, VAR12;
    bool VAR13 = VAR2->VAR14 == VAR15;
    if (!VAR2->VAR4 || !FUN2(VAR2->VAR4) || VAR2->VAR14 == VAR16)
    {
        return -1;
    }
    FUN3(VAR4, &VAR7);
    VAR10 = VAR11 = VAR12 = -1;
    for (VAR9 = 0;; VAR9++)
    {
        VAR6 = &VAR17[VAR9];
        if (VAR6->VAR14 == VAR16)
        {
            break;
        }
        VAR8 = (VAR6->VAR18 + 1) * VAR6->VAR19 * VAR6->VAR20;
        if (VAR7 == VAR8)
        {
            if (VAR13 || VAR6->VAR14 == VAR2->VAR14)
            {
                goto VAR21;
            }
            else if (FUN4(VAR6->VAR14) == FUN4(VAR2->VAR14))
            {
                VAR10 = (VAR10 == -1) ? VAR9 : VAR10;
            }
            else
            {
                VAR11 = (VAR11 == -1) ? VAR9 : VAR11;
            }
        }
        else if (VAR12 == -1)
        {
            if ((VAR6->VAR14 == VAR2->VAR14) || (VAR13 && (VAR6->VAR14 == FUN5(VAR2))))
            {
                VAR12 = VAR9;
            }
        }
    }
    if (VAR10 == -1)
    {
        if (VAR11 != -1)
        {
            VAR6 = &VAR17[VAR11];
            FUN6(""
                           ""
                           "",
                           VAR22[VAR2->VAR14], VAR7, VAR22[VAR6->VAR14]);
        }
        VAR10 = VAR12;
    }
    if (VAR10 == -1)
    {
        FUN7(&VAR23, ""
                                 "",
                   VAR22[VAR2->VAR14]);
    }
    VAR6 = &(VAR17[VAR10]);
VAR21:
    if (VAR6->VAR18 == 0)
    {
        VAR2->VAR24 &= ~VAR25;
    }
    else
    {
        VAR2->VAR24 |= VAR25;
    }
    VAR2->VAR19 = VAR6->VAR19;
    VAR2->VAR20 = VAR6->VAR20;
    VAR2->VAR26 = VAR6->VAR14;
    VAR2->VAR27 = VAR6->VAR28;
    return 0;
}