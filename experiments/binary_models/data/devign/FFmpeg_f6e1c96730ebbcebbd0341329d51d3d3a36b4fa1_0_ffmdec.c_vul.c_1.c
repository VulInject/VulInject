static int FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6;
    int64_t VAR7, VAR8;
    int VAR9;
    VAR9 = VAR5->VAR10 - VAR5->VAR11;
    if (VAR3 <= VAR9)
        return 1;
    VAR7 = FUN2(VAR2->VAR12);
    if (!VAR5->VAR13)
    {
        if (VAR7 == VAR5->VAR14)
            return VAR15;
        VAR8 = VAR5->VAR14 - VAR7;
    }
    else
    {
        if (VAR7 == VAR5->VAR13)
        {
            if (VAR5->VAR16)
                return FUN3(VAR17);
            else
                return VAR18;
        }
        else if (VAR7 < VAR5->VAR13)
        {
            VAR8 = VAR5->VAR13 - VAR7;
        }
        else
        {
            VAR8 = (VAR5->VAR14 - VAR7) + (VAR5->VAR13 - VAR19);
        }
    }
    VAR8 = (VAR8 / VAR5->VAR20) * (VAR5->VAR20 - VAR21) + VAR9;
    if (VAR3 <= VAR8)
        return 1;
    else if (VAR5->VAR16)
        return FUN3(VAR17);
    else
        return VAR18;
}