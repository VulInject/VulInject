void FUN1(VAR1 *VAR2)
{
    VAR3 *const VAR4 = &VAR2->VAR5;
    VAR4->VAR6 = VAR2->VAR6;
    FUN2(&VAR2->VAR7, VAR2->VAR7.VAR8, VAR4->VAR6->VAR8);
    FUN2(&VAR2->VAR7, VAR2->VAR7.VAR9, VAR4->VAR6->VAR9);
    FUN2(&VAR2->VAR7, VAR2->VAR7.VAR10, VAR4->VAR6->VAR10);
    FUN2(&VAR2->VAR7, VAR2->VAR7.VAR11, VAR4->VAR6->VAR11);
    VAR4->VAR12 = FUN3(VAR4, 0, VAR4->VAR6->VAR9 & VAR13);
    VAR4->VAR14 = FUN3(VAR4, 0, VAR4->VAR6->VAR10 & VAR13);
    VAR4->VAR15 = FUN3(VAR4, 0, VAR4->VAR6->VAR11 & VAR13);
    if (VAR2->VAR12 & VAR16)
    {
        VAR4->VAR17 = VAR18;
        VAR4->VAR19 = VAR2->VAR7.VAR20;
        if (VAR2->VAR21)
            VAR4->VAR22 = VAR2->VAR7.VAR23;
        else
            VAR4->VAR22 = VAR2->VAR7.VAR24;
    }
    else
    {
        if (VAR4->VAR6->VAR10 & VAR13)
            VAR4->VAR17 = VAR25;
        else if (VAR4->VAR6->VAR10 == VAR26 && VAR4->VAR6->VAR9 == VAR26 && VAR4->VAR6->VAR11 == VAR26)
            VAR4->VAR17 = VAR27;
        else
            VAR4->VAR17 = VAR25;
    }
    VAR4->VAR28 = VAR2->VAR7.VAR29;
    if (VAR2->VAR21)
        VAR4->VAR30 = VAR2->VAR7.VAR31;
    else
        VAR4->VAR30 = VAR2->VAR7.VAR32;
    if (VAR2->VAR33)
    {
        VAR4->VAR34 = VAR2->VAR33;
        VAR4->VAR35 = VAR2->VAR36;
    }
    else
    {
        VAR4->VAR34 = 16 * VAR2->VAR37 + 32;
        VAR4->VAR35 = 8 * VAR2->VAR37 + 16;
    }
    if (VAR2->VAR38 != VAR39)
    {
        if ((VAR4->VAR6->VAR9 & VAR13) && !VAR2->VAR7.VAR9[2])
        {
            VAR2->VAR7.VAR9[2] = VAR40;
        }
        if ((VAR4->VAR6->VAR10 & VAR13) && !VAR2->VAR7.VAR10[2])
        {
            VAR2->VAR7.VAR10[2] = VAR40;
        }
        VAR4->VAR30[2][0] = VAR4->VAR30[2][1] = VAR4->VAR30[2][2] = VAR4->VAR30[2][3] = VAR41;
    }
    VAR4->VAR42 = VAR4->VAR43;
}