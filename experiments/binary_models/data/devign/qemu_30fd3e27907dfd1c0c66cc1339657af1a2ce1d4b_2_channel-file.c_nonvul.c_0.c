static VAR1 FUN1(VAR2 *VAR3, const struct VAR4 *VAR5, size_t VAR6, int **VAR7, VAR8 *VAR9, VAR10 **VAR11)
{
    VAR12 *VAR13 = FUN2(VAR3);
    ssize_t VAR14;
VAR15:
    VAR14 = FUN3(VAR13->VAR16, VAR5, VAR6);
    if (VAR14 < 0)
    {
        if (VAR17 == VAR18)
        {
            return VAR19;
        }
        if (VAR17 == VAR20)
        {
            goto VAR15;
        }
        FUN4(VAR11, VAR17, "");
        return -1;
    }
    return VAR14;
}