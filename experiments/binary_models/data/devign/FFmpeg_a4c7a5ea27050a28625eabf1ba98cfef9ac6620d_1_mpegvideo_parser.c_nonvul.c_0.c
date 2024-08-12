static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 **VAR6, int *VAR7, const VAR5 *VAR8, int VAR9)
{
    VAR10 *VAR11 = VAR2->VAR12;
    VAR13 *VAR14 = &VAR11->VAR14;
    int VAR15;
    if (VAR2->VAR16 & VAR17)
    {
        VAR15 = VAR9;
    }
    else
    {
        VAR15 = FUN2(VAR14, VAR8, VAR9, VAR2);
        if (FUN3(VAR14, VAR15, &VAR8, &VAR9) < 0)
        {
            *VAR6 = NULL;
            *VAR7 = 0;
            return VAR9;
        }
    }
    FUN4(VAR2, VAR4, VAR8, VAR9);
    FUN5("", VAR2->VAR18, (double)VAR4->VAR19.VAR20 / VAR4->VAR19.VAR21, VAR2->VAR22);
    *VAR6 = VAR8;
    *VAR7 = VAR9;
    return VAR15;
}