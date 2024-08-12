static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 **VAR6, int *VAR7, const VAR5 *VAR8, int VAR9)
{
    VAR10 *VAR11 = VAR2->VAR12;
    VAR13 *VAR14 = &VAR11->VAR2.VAR15;
    int VAR16;
    if (VAR2->VAR17 & VAR18)
    {
        VAR16 = VAR9;
    }
    else
    {
        VAR16 = FUN2(VAR11, VAR8, VAR9);
        if (FUN3(VAR14, VAR16, (VAR5 **)&VAR8, &VAR9) < 0)
        {
            *VAR6 = NULL;
            *VAR7 = 0;
            return VAR9;
        }
        if (VAR16 < 0 && VAR16 != VAR19)
        {
            assert(VAR14->VAR20 + VAR16 >= 0);
            FUN2(VAR11, &VAR14->VAR21[VAR14->VAR20 + VAR16], -VAR16);
        }
    }
    *VAR6 = (VAR5 *)VAR8;
    *VAR7 = VAR9;
    return VAR16;
}