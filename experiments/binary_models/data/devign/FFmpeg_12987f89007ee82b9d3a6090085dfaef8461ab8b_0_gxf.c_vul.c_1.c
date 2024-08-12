static int FUN1(VAR1 *VAR2, int VAR3, int64_t VAR4, int VAR5)
{
    int VAR6 = 0;
    uint64_t VAR7;
    uint64_t VAR8 = 100 * 1024 * 1024;
    VAR9 *VAR10 = VAR2->VAR11[0];
    int64_t VAR12 = VAR2->VAR11[VAR3]->VAR12;
    int64_t VAR13;
    int VAR14;
    if (VAR4 < VAR12)
        VAR4 = VAR12;
    VAR14 = FUN2(VAR10, VAR4 - VAR12, VAR15 | VAR16);
    if (VAR14 < 0)
        return -1;
    VAR7 = VAR10->VAR17[VAR14].VAR7;
    if (VAR14 < VAR10->VAR18 - 2)
        VAR8 = VAR10->VAR17[VAR14 + 2].VAR7 - VAR7;
    VAR8 = FUN3(VAR8, 200 * 1024);
    VAR6 = FUN4(VAR2->VAR19, VAR7, VAR20);
    if (VAR6 < 0)
        return VAR6;
    VAR13 = FUN5(VAR2, VAR8, -1, VAR4);
    if (FUN6(VAR13 - VAR4) > 4)
        return -1;
    return 0;
}