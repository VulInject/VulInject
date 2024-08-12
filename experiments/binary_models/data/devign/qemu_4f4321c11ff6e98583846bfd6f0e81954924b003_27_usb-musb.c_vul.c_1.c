static void FUN1(VAR1 *VAR2, void *VAR3)
{
    VAR4 *VAR5 = (VAR4 *)VAR3;
    int VAR6 = VAR5->VAR6;
    VAR7 *VAR8 = VAR5->VAR9;
    VAR5->VAR10[1] = 0;
    VAR5->VAR11[1] = 0;
    if (VAR5->VAR12[1] != VAR13)
    {
        VAR5->VAR14[1] &= ~VAR15;
        if (!VAR6)
            VAR5->VAR14[0] &= ~VAR16;
    }
    VAR5->VAR14[1] &= ~(VAR17 | VAR18 | VAR19);
    if (!VAR6)
        VAR5->VAR14[0] &= ~(VAR20 | VAR21 | VAR22 | VAR23);
    if (VAR5->VAR12[1] == VAR24)
    {
        VAR5->VAR12[1] = 0;
        VAR2->VAR25 = 0;
        VAR5->VAR14[1] |= VAR18;
        if (!VAR6)
            VAR5->VAR14[0] |= VAR21;
    }
    if (VAR5->VAR12[1] == VAR13)
    {
        VAR5->VAR12[1] = 0;
        if (VAR5->VAR26[1])
            return FUN2(VAR8, VAR5, VAR6, VAR27, VAR2->VAR25, VAR28, 1);
        VAR5->VAR14[1] |= VAR19;
        if (!VAR6)
            VAR5->VAR14[0] |= VAR22;
    }
    if (VAR5->VAR12[1] < 0)
    {
        if (VAR5->VAR12[1] == VAR29)
        {
            FUN3(VAR8, VAR30, 1);
            return;
        }
        VAR5->VAR14[1] |= VAR17;
        if (!VAR6)
            VAR5->VAR14[0] |= VAR20;
        FUN4(VAR8, VAR6, 1);
        return;
    }
    VAR2->VAR25 = VAR5->VAR12[1];
    if (!(VAR5->VAR14[1] & (VAR18 | VAR19)))
    {
        VAR5->VAR14[1] |= VAR31 | VAR32;
        if (!VAR6)
            VAR5->VAR14[0] |= VAR33;
        VAR5->VAR34 = VAR2->VAR25;
    }
    FUN4(VAR8, VAR6, 1);
}