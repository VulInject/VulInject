VAR1 FUN1(VAR2 *VAR3, int64_t VAR4)
{
    VAR2 *VAR5;
    int64_t VAR6;
    VAR7 *VAR8, *VAR9;
    FUN2(VAR3);
    if (VAR3->VAR10 == NULL)
    {
        return -1;
    }
    if (FUN3(VAR4) == VAR3->VAR11)
    {
        return VAR3->VAR11;
    }
    VAR5 = FUN4(VAR4, VAR3->VAR12);
    if (!(VAR5))
    {
        FUN5("");
        return -1;
    }
    for (VAR6 = 0; VAR6 < VAR3->VAR11; VAR6++)
    {
        VAR8 = &VAR3->VAR10[VAR6];
        if (VAR8->VAR13 != -1)
        {
            VAR9 = FUN6(VAR5, VAR8->VAR13);
            if (VAR9->VAR14)
            {
                if (VAR9->VAR15 >= VAR8->VAR15)
                {
                    FUN7(VAR8->VAR14);
                }
                else
                {
                    FUN7(VAR9->VAR14);
                    VAR9->VAR14 = VAR8->VAR14;
                    VAR9->VAR15 = VAR8->VAR15;
                    VAR9->VAR13 = VAR8->VAR13;
                }
            }
            else
            {
                FUN8(VAR5, VAR8->VAR13, VAR8->VAR14);
            }
        }
    }
    VAR3->VAR10 = VAR5->VAR10;
    VAR3->VAR11 = VAR5->VAR11;
    VAR3->VAR16 = VAR5->VAR16;
    FUN7(VAR5);
    return VAR3->VAR11;