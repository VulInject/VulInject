static int FUN1(VAR1 *VAR2, void *VAR3)
{
    int VAR4;
    int VAR5;
    int64_t VAR6;
    int VAR7 = 0;
    FUN2();
    if (VAR8.VAR9 != VAR10)
    {
        FUN3();
    }
    FUN4(VAR2, VAR11);
    VAR6 = FUN5(VAR12);
    VAR5 = 0;
    while ((VAR4 = FUN6(VAR2)) == 0)
    {
        int VAR13;
        VAR13 = FUN7(VAR2, false);
        if (VAR13 == 0)
        {
            break;
        }
        VAR7 += VAR13;
        VAR14.VAR15++;
        FUN8();
        if ((VAR5 & 63) == 0)
        {
            uint64_t VAR16 = (FUN5(VAR12) - VAR6) / 1000000;
            if (VAR16 > VAR17)
            {
                FUN9("" VAR18 "", VAR16, VAR5);
                break;
            }
        }
        VAR5++;
    }
    FUN10();
    FUN11(VAR2, VAR11);
    VAR19 += VAR7;
    FUN12(VAR2, VAR20);
    VAR19 += 8;
    VAR4 = FUN13(VAR2);
    if (VAR4 < 0)
    {
        return VAR4;
    }
    return VAR7;
}