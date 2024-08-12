static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, VAR6 **VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    int64_t VAR11;
    VAR12 *VAR13;
    VAR6 *VAR14 = NULL;
    VAR13 = FUN2(&VAR15, NULL, 0, &VAR16);
    FUN3(VAR13, VAR4, &VAR14);
    if (VAR14)
    {
        FUN4(VAR7, VAR14);
        return -VAR17;
    }
    VAR11 = FUN5(VAR9, FUN6(VAR13, ""), (VAR5 & VAR18) ? VAR19 : VAR20, VAR7);
    if (VAR11 < 0)
    {
        return VAR11;
    }
    VAR2->VAR21 = VAR11;
    return 0;
}