static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = VAR2->VAR9;
    unsigned int VAR10;
    int VAR11;
    if (VAR6->VAR12 == 0)
    {
        if (VAR6->VAR13 >= VAR6->VAR14)
            return VAR15;
        FUN2(VAR9, VAR6->VAR16, VAR17);
        VAR6->VAR16 += FUN3(VAR6->VAR18, 1);
        VAR6->VAR18 = FUN4(VAR9);
        FUN4(VAR9);
        VAR10 = FUN4(VAR9);
        if (VAR6->VAR19)
            VAR6->VAR12 = FUN4(VAR9);
        else
            VAR6->VAR13++;
        VAR11 = FUN5(VAR9, VAR4, VAR10);
        if (VAR11 != VAR10)
        {
            FUN6(VAR4);
            return FUN7(VAR20);
        }
        VAR4->VAR21 = VAR6->VAR22;
    }
    else
    {
        VAR11 = FUN5(VAR9, VAR4, VAR6->VAR12);
        if (VAR11 != VAR6->VAR12)
        {
            FUN6(VAR4);
            return FUN7(VAR20);
        }
        VAR4->VAR21 = VAR6->VAR23;
        if (VAR6->VAR12 >= 8)
            VAR4->VAR24 = FUN8(&VAR4->VAR25[4]);
        VAR6->VAR12 = 0;
        VAR6->VAR13++;
    }
    return 0;