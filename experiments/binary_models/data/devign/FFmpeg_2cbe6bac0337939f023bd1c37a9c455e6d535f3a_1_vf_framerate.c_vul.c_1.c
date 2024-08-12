static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    int64_t VAR6;
    int VAR7;
    int VAR8;
    if (!VAR4->VAR9)
        return 0;
    if (!VAR4->VAR10 && !VAR4->VAR11)
        return 0;
    VAR6 = VAR4->VAR12 + FUN2(VAR4->VAR13, FUN3(VAR4->VAR14), VAR4->VAR15);
    if (VAR6 >= VAR4->VAR16 && !VAR4->VAR11)
        return 0;
    if (!VAR4->VAR10)
    {
        VAR4->VAR17 = FUN4(VAR4->VAR9);
    }
    else
    {
        if (VAR6 >= VAR4->VAR16 + VAR4->VAR18 && VAR4->VAR11)
            return 0;
        VAR7 = FUN5(VAR6 - VAR4->VAR19, VAR4->VAR20, VAR4->VAR18);
        FUN6(VAR2, "", VAR7, VAR4->VAR20);
        if (VAR7 > VAR4->VAR21)
        {
            VAR4->VAR17 = FUN4(VAR4->VAR9);
        }
        else if (VAR7 < VAR4->VAR22)
        {
            VAR4->VAR17 = FUN4(VAR4->VAR10);
        }
        else
        {
            VAR8 = FUN7(VAR2, VAR7);
            if (VAR8 < 0)
                return VAR8;
            if (VAR8 == 0)
                VAR4->VAR17 = FUN4(VAR7 > (VAR4->VAR20 >> 1) ? VAR4->VAR9 : VAR4->VAR10);
        }
    }
    if (!VAR4->VAR17)
        return FUN8(VAR23);
    VAR4->VAR17->VAR24 = VAR6;
    VAR4->VAR13++;
    return 1;
}