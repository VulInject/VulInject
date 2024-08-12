int FUN1(VAR1 *VAR2, size_t VAR3, size_t VAR4)
{
    if (VAR2->VAR5.VAR6 - VAR2->VAR5.VAR7 - (FUN2(&VAR2->VAR5) >> 3) < VAR3 && VAR2->VAR8 == 1 && VAR2->VAR5.VAR7 == VAR2->VAR9->VAR10->VAR11)
    {
        int VAR12 = VAR2->VAR13 - VAR2->VAR5.VAR7;
        int VAR14 = VAR2->VAR15 - VAR2->VAR5.VAR7;
        VAR16 *VAR17 = NULL;
        int VAR18 = 0;
        FUN3(&VAR17, &VAR18, VAR2->VAR9->VAR10->VAR19 + VAR4);
        if (!VAR17)
            memcpy(VAR17, VAR2->VAR9->VAR10->VAR11, VAR2->VAR9->VAR10->VAR19);
        FUN4(VAR2->VAR9->VAR10->VAR11);
        VAR2->VAR9->VAR10->VAR11 = VAR17;
        VAR2->VAR9->VAR10->VAR19 = VAR18;
        FUN5(&VAR2->VAR5, VAR17, VAR18);
        VAR2->VAR13 = VAR2->VAR5.VAR7 + VAR12;
        VAR2->VAR15 = VAR2->VAR5.VAR7 + VAR14;
        if (VAR2->VAR5.VAR6 - VAR2->VAR5.VAR7 - (FUN2(&VAR2->VAR5) >> 3) < VAR3)
            return FUN6(VAR20);
        return 0