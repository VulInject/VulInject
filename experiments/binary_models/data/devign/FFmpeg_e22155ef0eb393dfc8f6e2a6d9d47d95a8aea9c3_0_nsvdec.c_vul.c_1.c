static int FUN1(VAR1 *VAR2, int VAR3, int64_t VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    VAR9 *VAR10 = VAR2->VAR11[VAR3];
    VAR12 *VAR13 = VAR10->VAR8;
    int VAR14;
    VAR14 = FUN2(VAR10, VAR4, VAR5);
    if (VAR14 < 0)
        return -1;
    FUN3(VAR2->VAR15, VAR10->VAR16[VAR14].VAR17, VAR18);
    VAR13->VAR19 = VAR10->VAR16[VAR14].VAR4;
    VAR7->VAR20 = VAR21;
    return 0;
}