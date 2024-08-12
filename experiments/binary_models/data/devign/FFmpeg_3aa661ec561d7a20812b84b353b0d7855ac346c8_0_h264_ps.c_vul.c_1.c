static inline int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *const VAR6 = &VAR2->VAR6;
    int VAR7;
    unsigned int VAR8;
    VAR7 = FUN2(&VAR6->VAR9);
    if (VAR7)
    {
        VAR8 = FUN3(&VAR6->VAR9, 8);
        if (VAR8 == VAR10)
        {
            VAR4->VAR11.VAR12 = FUN3(&VAR6->VAR9, 16);
            VAR4->VAR11.VAR13 = FUN3(&VAR6->VAR9, 16);
        }
        else if (VAR8 < FUN4(VAR14))
        {
            VAR4->VAR11 = VAR14[VAR8];
        }
        else
        {
            FUN5(VAR2->VAR6.VAR15, VAR16, "");
            return -1;
        }
    }
    else
    {
        VAR4->VAR11.VAR12 = VAR4->VAR11.VAR13 = 0;
    }
    if (FUN2(&VAR6->VAR9))
    {
        FUN2(&VAR6->VAR9);
    }
    VAR4->VAR17 = FUN2(&VAR6->VAR9);
    if (VAR4->VAR17)
    {
        FUN3(&VAR6->VAR9, 3);
        VAR4->VAR18 = FUN2(&VAR6->VAR9);
        VAR4->VAR19 = FUN2(&VAR6->VAR9);
        if (VAR4->VAR19)
        {
            VAR4->VAR20 = FUN3(&VAR6->VAR9, 8);
            VAR4->VAR21 = FUN3(&VAR6->VAR9, 8);
            VAR4->VAR22 = FUN3(&VAR6->VAR9, 8);
            if (VAR4->VAR20 >= VAR23)
                VAR4->VAR20 = VAR24;
            if (VAR4->VAR21 >= VAR25)
                VAR4->VAR21 = VAR26;
            if (VAR4->VAR22 >= VAR27)
                VAR4->VAR22 = VAR28;
        }
    }
    if (FUN2(&VAR6->VAR9))
    {
        VAR6->VAR15->VAR29 = FUN6(&VAR6->VAR9) + 1;
        FUN6(&VAR6->VAR9);
    }
    VAR4->VAR30 = FUN2(&VAR6->VAR9);
    if (VAR4->VAR30)
    {
        VAR4->VAR31 = FUN7(&VAR6->VAR9, 32);
        VAR4->VAR32 = FUN7(&VAR6->VAR9, 32);
        if (!VAR4->VAR31 || !VAR4->VAR32)
        {
            FUN5(VAR2->VAR6.VAR15, VAR16, "", VAR4->VAR32, VAR4->VAR31);
            return -1;
        }
        VAR4->VAR33 = FUN2(&VAR6->VAR9);
    }
    VAR4->VAR34 = FUN2(&VAR6->VAR9);
    if (VAR4->VAR34)
        if (FUN8(VAR2, VAR4) < 0)
            return -1;
    VAR4->VAR35 = FUN2(&VAR6->VAR9);
    if (VAR4->VAR35)
        if (FUN8(VAR2, VAR4) < 0)
            return -1;
    if (VAR4->VAR34 || VAR4->VAR35)
        FUN2(&VAR6->VAR9);
    VAR4->VAR36 = FUN2(&VAR6->VAR9);
    VAR4->VAR37 = FUN2(&VAR6->VAR9);
    if (VAR4->VAR37)
    {
        FUN2(&VAR6->VAR9);
        FUN6(&VAR6->VAR9);
        FUN6(&VAR6->VAR9);
        FUN6(&VAR6->VAR9);
        FUN6(&VAR6->VAR9);
        VAR4->VAR38 = FUN6(&VAR6->VAR9);
        FUN6(&VAR6->VAR9);
        if (FUN9(&VAR6->VAR9) < 0)
        {
            FUN5(VAR2->VAR6.VAR15, VAR16, "", -FUN9(&VAR6->VAR9));
            VAR4->VAR38 = 0;
            VAR4->VAR37 = 0;
        }
        if (VAR4->VAR38 > 16U)
        {
            FUN5(VAR2->VAR6.VAR15, VAR16, "", VAR4->VAR38);
            return -1;
        }
    }
    return 0;
}