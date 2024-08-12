static int FUN1(VAR1 *VAR2, int64_t VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6;
    int VAR7, VAR8;
    int64_t VAR9;
    int VAR10;
    VAR11 *VAR12;
    uint16_t VAR13;
    VAR7 = VAR3 >> (VAR5->VAR14 - VAR15);
    if (VAR7 >= VAR5->VAR16)
        return 0;
    VAR9 = VAR5->VAR17[VAR7] & VAR18;
    if (!VAR9)
        return 0;
    VAR10 = FUN2(VAR2, VAR5->VAR19, VAR9, (void **)&VAR12);
    if (VAR10 < 0)
    {
        return VAR10;
    }
    VAR8 = VAR3 & ((1 << (VAR5->VAR14 - VAR15)) - 1);
    VAR13 = FUN3(VAR12[VAR8]);
    VAR10 = FUN4(VAR2, VAR5->VAR19, (void **)&VAR12);
    if (VAR10 < 0)
    {
        return VAR10;
    }
    return VAR13;
}