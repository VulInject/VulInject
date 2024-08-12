static int FUN1(VAR1 *VAR2, int VAR3, int64_t VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8[0];
    VAR9 *VAR10 = VAR2->VAR11;
    int64_t VAR12;
    VAR4 = FUN2(VAR4, 0);
    if (VAR10->VAR13 > 0 && VAR10->VAR14 > 0)
    {
        VAR12 = VAR10->VAR14 * VAR4 / VAR10->VAR13;
        if (VAR10->VAR15 > 0)
            VAR12 = FUN3(VAR12, VAR10->VAR15);
        VAR10->VAR16 = VAR12 / VAR10->VAR14;
        VAR10->VAR17 = VAR10->VAR13 * VAR10->VAR16;
    }
    else if (VAR7->VAR18)
    {
        VAR10->VAR16 = FUN4(VAR7, VAR4, VAR5);
        VAR10->VAR17 = VAR7->VAR19[VAR10->VAR16].VAR4;
        VAR12 = VAR7->VAR19[VAR10->VAR16].VAR12;
    }
    else
    {
        return -1;
    }
    FUN5(VAR2->VAR20, VAR12 + VAR10->VAR21, VAR22);
    return 0;
}