static int FUN1(VAR1 *VAR2)
{
    static const int VAR3[6] = {VAR4, VAR5, VAR6, -1, VAR7, VAR8};
    static const int VAR9[6] = {VAR4, VAR10, VAR11, VAR12, VAR7, VAR8};
    VAR13 *VAR14 = &VAR2->VAR14;
    VAR15 *VAR16 = &VAR14->VAR16;
    int VAR17 = FUN2(VAR16);
    if (VAR17 > 11)
    {
        FUN3(VAR14->VAR18, VAR19, "");
        return -1;
    }
    if (VAR17 > 5)
    {
        FUN3(VAR14->VAR18, VAR19, "");
        VAR17 -= 6;
    }
    if (VAR14->VAR20 != VAR21)
        return VAR3[VAR17];
    else
        return VAR9[VAR17];
}