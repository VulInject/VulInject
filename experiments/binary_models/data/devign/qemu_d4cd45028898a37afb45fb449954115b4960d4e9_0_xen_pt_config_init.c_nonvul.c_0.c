static VAR1 FUN1(VAR2 *VAR3, int VAR4)
{
    VAR5 *VAR6 = &VAR3->VAR7;
    VAR8 *VAR9 = NULL;
    VAR10 *VAR11;
    if ((0 < VAR4) && (VAR4 < VAR12))
    {
        int VAR13 = VAR3->VAR14.VAR15[VAR4 - 1].VAR13;
        if ((VAR13 & VAR16) && (VAR13 & VAR17))
        {
            VAR9 = &VAR3->VAR18[VAR4 - 1];
            if (VAR9->VAR19 != VAR20)
            {
                return VAR20;
            }
        }
    }
    VAR11 = &VAR6->VAR15[VAR4];
    if (!FUN2(VAR11))
    {
        return VAR21;
    }
    if (VAR4 == VAR12)
    {
        return VAR22;
    }
    if (VAR3->VAR14.VAR15[VAR4].VAR13 & VAR23)
    {
        return VAR24;
    }
    else
    {
        return VAR22;
    }
}