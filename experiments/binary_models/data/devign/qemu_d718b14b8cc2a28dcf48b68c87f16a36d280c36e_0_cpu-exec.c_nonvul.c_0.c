static inline void FUN1(VAR1 *VAR2, VAR3 **VAR4)
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
            FUN4(VAR2);
        }
        if (VAR14 == VAR15 && !FUN5())
        {
        }
        else if (VAR7 & VAR16)
        {
            FUN6();
            VAR2->VAR7 &= ~VAR16;
            VAR2->VAR17 = 1;
            VAR2->VAR12 = VAR18;
            FUN4(VAR2);
        }
        else if (VAR7 & VAR19)
        {
            VAR20 *VAR21 = FUN7(VAR2);
            VAR22 *VAR23 = &VAR21->VAR23;
            FUN6();
            FUN8(VAR23, VAR24, 0);
            FUN9(VAR21);
            VAR2->VAR12 = VAR25;
            FUN4(VAR2);
        }
        else if (VAR7 & VAR26)
        {
            FUN6();
            FUN10(VAR2);
            FUN4(VAR2);
        }
        else
        {
            if (VAR6->FUN11(VAR2, VAR7))
            {
                FUN6();
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
    if (FUN3(FUN12(&VAR2->VAR28) || FUN5()))
    {
        FUN13(&VAR2->VAR28, 0);
        VAR2->VAR12 = VAR29;
        FUN4(VAR2);
    }
}