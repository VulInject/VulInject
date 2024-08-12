int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = NULL;
    int VAR10 = VAR6->VAR10;
    if (VAR10 < 0)
    {
        if (VAR6->VAR11 == VAR12 || !VAR2->VAR13)
            VAR10 = 0;
        else
            VAR10 = VAR14;
    }
    if (VAR4->VAR15 >= 0)
        VAR9 = VAR2->VAR16[VAR4->VAR15];
    if (!VAR9)
        VAR2->VAR17 |= VAR18;
    if (VAR19 && VAR2->VAR20 && VAR9)
    {
        int VAR21 = FUN2((VAR1 **)&VAR4->VAR22, VAR2, VAR9, VAR4->VAR23, VAR24, VAR4->VAR15);
        VAR4->VAR23 = NULL;
        if (VAR21 < 0)
            return VAR21;
        VAR9->VAR25 = ((VAR1 *)VAR4->VAR22)->VAR16[0]->VAR25;
    }
    else if (VAR6->VAR26 == VAR27)
    {
        return 0;
    }
    else if (VAR28 && VAR6->VAR26 == VAR29 && VAR9)
        VAR4->VAR22 = FUN3(VAR2, VAR9->VAR30, VAR4->VAR31, VAR4->VAR32);
    else if (VAR28)
        VAR4->VAR22 = FUN4(VAR2, VAR9, VAR4->VAR33, VAR10);
    if (!VAR4->VAR22)
    {
        return FUN5(VAR34);
    }
    else if (VAR28 && VAR6->VAR26 == VAR35)
    {
        if (VAR4->VAR32)
        {
            FUN6(VAR4->VAR22, VAR4->VAR31, VAR4->VAR32);
        }
        if (VAR4->VAR36[0])
            FUN7(VAR4->VAR22, VAR4->VAR36, VAR4->VAR37);
    }
    return 0;
}