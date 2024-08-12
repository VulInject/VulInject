static int FUN1(VAR1 *VAR2, int VAR3, int64_t VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    VAR9 *VAR10 = VAR2->VAR11[0];
    if (!(VAR2->VAR12->VAR13 & VAR14))
        return -1;
    if (FUN2(VAR2->VAR12, VAR10->VAR15[0].VAR16, VAR17) < 0)
        return -1;
    VAR7->VAR18 = 0;
    memset(VAR7->VAR19, 0, sizeof(VAR7->VAR19));
    VAR7->VAR20 = -1;
    return 0;
}