static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR5.VAR4;
    int VAR6;
    FUN2(&VAR2->VAR7, VAR2);
    if (VAR6 < 0)
        return -1;
    if (VAR2->VAR8 == VAR9)
    {
        VAR6 = FUN2(&VAR2->VAR10, VAR2);
        if (VAR6 < 0)
            return -1;
        FUN3(VAR2->VAR5.VAR11, VAR12, ""
                                         "",
               VAR6 >> 1, VAR6 & 1);
    }
    VAR6 = FUN2(&VAR2->VAR13, VAR2);
    if (VAR6 < 0)
        return -1;
    FUN3(VAR2->VAR5.VAR11, VAR12, ""
                                     "",
           VAR6 >> 1, VAR6 & 1);
    FUN3(VAR2->VAR5.VAR11, VAR12, ""
                                     "",
           VAR6 >> 1, VAR6 & 1);
    VAR2->VAR5.VAR14 = FUN4(VAR4, 2);
    VAR2->VAR15 = &VAR16[FUN4(VAR4, 2)];
    if (VAR2->VAR17)
    {
        FUN5(VAR2);
    }
    if (VAR2->VAR18)
    {
        VAR2->VAR19 = FUN4(VAR4, 1);
        if (VAR2->VAR19)
        {
            VAR2->VAR20 = FUN4(VAR4, 2);
            FUN3(VAR2->VAR5.VAR11, VAR21, "", (VAR2->VAR20 & 2) ? 4 : 8, (VAR2->VAR20 & 1) ? 4 : 8);
        }
    }
    return 0;
}