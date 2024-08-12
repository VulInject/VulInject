static inline bool FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    int VAR7 = VAR2->VAR7;
    if (FUN3(VAR7))
    {
        if (FUN3(VAR2->VAR8 & VAR9))
        {
            VAR7 &= ~VAR10;
        }
        if (VAR7 & VAR11)
        {
            VAR2->VAR7 &= ~VAR11;
            VAR2->VAR12 = VAR13;
            return true;
        }
        if (VAR14 == VAR15 && !FUN4())
        {
        }
        else if (VAR7 & VAR16)
        {
            FUN5();
            VAR2->VAR7 &= ~VAR16;
            VAR2->VAR17 = 1;
            VAR2->VAR12 = VAR18;
            return true;
        }
        else if (VAR7 & VAR19)
        {
            VAR20 *VAR21 = FUN6(VAR2);
            VAR22 *VAR23 = &VAR21->VAR23;
            FUN5();
            FUN7(VAR23, VAR24, 0, 0);
            FUN8(VAR21);
            VAR2->VAR12 = VAR25;
            return true;
        }
        else if (VAR7 & VAR26)
        {
            FUN5();
            FUN9(VAR2);
            return true;
        }
        else
        {
            if (VAR6->FUN10(VAR2, VAR7))
            {
                FUN5();
                *VAR4 = NULL;
            }
            VAR7 = VAR2->VAR7;
        }
        if (VAR7 & VAR27)
        {
            VAR2->VAR7 &= ~VAR27;
            *VAR4 = NULL;
        }
    }
    if (FUN3(FUN11(&VAR2->VAR28) || (VAR29 && VAR2->VAR30.VAR31.VAR32 + VAR2->VAR33 == 0)))
    {
        FUN12(&VAR2->VAR28, 0);
        VAR2->VAR12 = VAR34;
        return true;
    }
    return false;
}