static VAR1 FUN1(VAR2 *VAR3, const struct VAR4 *VAR5, size_t VAR6, int *VAR7, size_t VAR8, VAR9 **VAR10)
{
    VAR11 *VAR12 = FUN2(VAR3);
    ssize_t VAR13;
VAR14:
    VAR13 = FUN3(VAR12->VAR15, VAR5, VAR6);
    if (VAR13 <= 0)
    {
        if (VAR16 == VAR17)
        {
            return VAR18;
        }
        if (VAR16 == VAR19)
        {
            goto VAR14;
        }
        FUN4(VAR10, VAR16, "");
        return -1;
    }
    return VAR13;
}