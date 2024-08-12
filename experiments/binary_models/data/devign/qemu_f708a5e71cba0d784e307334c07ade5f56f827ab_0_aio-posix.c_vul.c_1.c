void FUN1(VAR1 *VAR2, int VAR3, bool VAR4, VAR5 *VAR6, VAR5 *VAR7, VAR8 *VAR9, void *VAR10)
{
    VAR11 *VAR12;
    bool VAR13 = false;
    bool VAR14 = false;
    FUN2(&VAR2->VAR15);
    VAR12 = FUN3(VAR2, VAR3);
    if (!VAR6 && !VAR7 && !VAR9)
    {
        if (VAR12 == NULL)
        {
            FUN4(&VAR2->VAR15);
            return;
        }
        FUN5(&VAR2->VAR16, &VAR12->VAR17);
        if (FUN6(&VAR2->VAR15))
        {
            VAR12->VAR14 = 1;
            VAR12->VAR17.VAR18 = 0;
        }
        else
        {
            FUN7(VAR12, VAR12);
            VAR14 = true;
        }
        if (!VAR12->VAR9)
        {
            VAR2->VAR19--;
        }
    }
    else
    {
        if (VAR12 == NULL)
        {
            VAR12 = FUN8(VAR11, 1);
            VAR12->VAR17.VAR3 = VAR3;
            FUN9(&VAR2->VAR20, VAR12, VAR12);
            FUN10(&VAR2->VAR16, &VAR12->VAR17);
            VAR13 = true;
            VAR2->VAR19 += !VAR9;
        }
        else
        {
            VAR2->VAR19 += !VAR9 - !VAR12->VAR9;
        }
        VAR12->VAR6 = VAR6;
        VAR12->VAR7 = VAR7;
        VAR12->VAR9 = VAR9;
        VAR12->VAR10 = VAR10;
        VAR12->VAR4 = VAR4;
        VAR12->VAR17.VAR21 = (VAR6 ? VAR22 | VAR23 | VAR24 : 0);
        VAR12->VAR17.VAR21 |= (VAR7 ? VAR25 | VAR24 : 0);
    }
    FUN11(VAR2, VAR12, VAR13);
    FUN4(&VAR2->VAR15);
    FUN12(VAR2);
    if (VAR14)
    {
        FUN13(VAR12);
    }
}