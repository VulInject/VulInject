static int FUN1(VAR1 *VAR2, int VAR3, int64_t VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    VAR9 *VAR10 = VAR2->VAR11[VAR3];
    int64_t VAR12;
    int VAR13;
    if (VAR2->VAR14 <= 0)
        return -1;
    if (VAR2->VAR15)
    {
        int VAR16 = FUN2(VAR2->VAR15, VAR3, VAR4, VAR5);
        if (VAR16 >= 0)
            FUN3(VAR2);
        if (VAR16 != FUN4(VAR17))
            return VAR16;
    }
    if (!VAR7->VAR18)
        FUN5(VAR2, VAR3);
    if ((VAR7->VAR18 && VAR10->VAR19))
    {
        VAR13 = FUN6(VAR10, VAR4, VAR5);
        if (VAR13 >= 0)
        {
            VAR12 = VAR10->VAR19[VAR13].VAR12;
            FUN7(VAR2, VAR20, "" VAR21 "", VAR12);
            FUN8(VAR2->VAR15, VAR12, VAR22);
            FUN3(VAR2);
            return 0;
        }
    }
    if (FUN9(VAR2, VAR3, VAR4, VAR5) < 0)
        return -1;
    FUN3(VAR2);
    return 0;
}