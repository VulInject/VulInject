FUN1(VAR1 *VAR2, int VAR3, int VAR4)
{
    uint VAR5;
    int VAR6 = VAR2->VAR7.VAR6;
    int VAR8 = VAR2->VAR7.VAR8;
    if (!VAR2->VAR9->VAR10)
    {
        return 0;
    }
    if (FUN2(VAR2->VAR11) == 1 || VAR2->VAR12.VAR13.VAR14 == 1 || VAR3 < VAR15 || VAR4 < VAR16)
    {
        return 0;
    }
    if (VAR2->VAR7.VAR8 != (VAR17)-1)
    {
        if (VAR3 * VAR4 < VAR18)
        {
            return 0;
        }
    }
    else
    {
        if (VAR3 * VAR4 < VAR19[VAR6].VAR20)
        {
            return 0;
        }
    }
    if (VAR2->VAR12.VAR13.VAR14 == 4)
    {
        if (VAR2->VAR7.VAR21)
        {
            VAR5 = FUN3(VAR2, VAR3, VAR4);
            if (VAR2->VAR7.VAR8 != (VAR17)-1)
            {
                return (VAR5 < VAR19[VAR8].VAR22);
            }
            return (VAR5 < VAR19[VAR6].VAR23);
        }
        else
        {
            VAR5 = FUN4(VAR2, VAR3, VAR4);
        }
    }
    else
    {
        VAR5 = FUN5(VAR2, VAR3, VAR4);
    }
    if (VAR8 != -1)
    {
        return (VAR5 < VAR19[VAR8].VAR24);
    }
    return (VAR5 < VAR19[VAR6].VAR25);
}