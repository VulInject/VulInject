static int FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6[0];
    VAR7 *VAR8 = VAR2->VAR9;
    VAR10 *VAR11;
    int VAR12, VAR13 = 0;
    while (VAR8->VAR14 != 0 && VAR13 < VAR3)
    {
        VAR11 = FUN2(VAR5, FUN3(VAR3, VAR8->VAR3 - VAR8->VAR15));
        if (!VAR11)
            return FUN4(VAR16);
        VAR12 = FUN5(VAR8->VAR17, (void **)VAR11->VAR18, VAR11->VAR3, VAR8->VAR15);
        if (VAR12 < 0)
            return VAR12;
        VAR11->VAR19 = VAR8->VAR19;
        VAR11->VAR3 = VAR12;
        VAR8->VAR19 += VAR11->VAR3;
        VAR13 += VAR11->VAR3;
        VAR8->VAR15 += VAR11->VAR3;
        VAR12 = FUN6(VAR5, VAR11);
        if (VAR12 < 0)
            return VAR12;
        if (VAR8->VAR15 >= VAR8->VAR3)
        {
            VAR8->VAR15 = 0;
            if (VAR8->VAR14 > 0)
                VAR8->VAR14--;
        }
    }
    return VAR12;
}