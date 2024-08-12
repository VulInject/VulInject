static int FUN1(VAR1 *VAR2, int64_t VAR3)
{
    int64_t VAR4;
    int VAR5;
    FUN2(VAR2, VAR3);
    assert(VAR2->VAR6 > VAR3);
    VAR5 = FUN3(VAR2->VAR6 - VAR3, VAR7);
    if (VAR2->VAR8 <= VAR3)
    {
        VAR9 *VAR10;
        VAR4 = FUN4(FUN5(VAR2->VAR11[VAR2->VAR12]), VAR3 - VAR2->VAR13, VAR5, &VAR5, &VAR10);
        if (VAR4 < 0)
        {
            return VAR4;
        }
        if (VAR4 & VAR14)
        {
            VAR2->VAR15 = VAR16;
        }
        else if (VAR4 & VAR17)
        {
            VAR2->VAR15 = VAR18;
        }
        else if (!VAR2->VAR19)
        {
            VAR4 = FUN6(FUN5(VAR2->VAR11[VAR2->VAR12]), NULL, VAR3 - VAR2->VAR13, VAR5, &VAR5, &VAR10);
            if (VAR4 < 0)
            {
                return VAR4;
            }
            if (VAR4 & VAR14)
            {
                VAR2->VAR15 = VAR16;
            }
            else
            {
                VAR2->VAR15 = VAR18;
            }
        }
        else
        {
            VAR2->VAR15 = VAR20;
        }
        VAR2->VAR8 = VAR3 + VAR5;
    }
    VAR5 = FUN3(VAR5, VAR2->VAR8 - VAR3);
    if (VAR2->VAR15 == VAR18)
    {
        VAR5 = FUN3(VAR5, VAR2->VAR21);
    }
    if (VAR2->VAR22)
    {
        if (VAR5 < VAR2->VAR23)
        {
            VAR5 = FUN3(VAR2->VAR23, VAR2->VAR6 - VAR3);
            VAR2->VAR15 = VAR18;
        }
        else
        {
            VAR5 = FUN7(VAR5, VAR2->VAR23);
        }
    }
    return VAR5;
}