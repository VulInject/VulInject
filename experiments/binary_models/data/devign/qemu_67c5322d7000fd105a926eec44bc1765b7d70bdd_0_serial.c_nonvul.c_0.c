static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    uint64_t VAR4 = FUN2(VAR5);
    if (VAR3->VAR6 <= 0)
    {
        if (VAR3->VAR7 & VAR8)
        {
            VAR3->VAR9 = FUN3(VAR3, VAR10);
            if (!VAR3->VAR11.VAR12)
                VAR3->VAR13 |= VAR14;
        }
        else if ((VAR3->VAR13 & VAR14))
        {
            return;
        }
        else
        {
            VAR3->VAR9 = VAR3->VAR15;
            VAR3->VAR13 |= VAR14;
        }
    }
    if (VAR3->VAR16 & VAR17)
    {
        FUN4(VAR3, &VAR3->VAR9, 1);
    }
    else if (FUN5(VAR3->VAR18, &VAR3->VAR9, 1) != 1)
    {
        if ((VAR3->VAR6 >= 0) && (VAR3->VAR6 <= VAR19))
        {
            VAR3->VAR6++;
            FUN6(VAR3->VAR20, VAR4 + VAR3->VAR21);
            return;
        }
        else if (VAR3->VAR22 < 0)
        {
            VAR3->VAR6 = -1;
        }
    }
    else
    {
        VAR3->VAR6 = 0;
    }
    VAR3->VAR23 = FUN2(VAR5);
    if (!(VAR3->VAR13 & VAR14))
        FUN6(VAR3->VAR20, VAR3->VAR23 + VAR3->VAR21);
    if (VAR3->VAR13 & VAR14)
    {
        VAR3->VAR13 |= VAR24;
        VAR3->VAR25 = 1;
        FUN7(VAR3);
    }
}