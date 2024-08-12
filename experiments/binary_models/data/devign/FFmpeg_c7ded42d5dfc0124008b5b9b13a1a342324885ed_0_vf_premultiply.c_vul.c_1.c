static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    if (VAR4->VAR6)
    {
        VAR7 *VAR8 = NULL;
        VAR7 *VAR9 = NULL;
        int VAR10, VAR11;
        int64_t VAR12;
        if ((VAR10 = FUN2(VAR2->VAR13[0], &VAR8)) > 0)
        {
            if ((VAR10 = FUN3(VAR2, &VAR9, VAR8, VAR8)) < 0)
                return VAR10;
            FUN4(&VAR8);
            VAR10 = FUN5(VAR2->VAR14[0], VAR9);
        }
        if (VAR10 < 0)
        {
            return VAR10;
        }
        else if (FUN6(VAR2->VAR13[0], &VAR11, &VAR12))
        {
            FUN7(VAR2->VAR14[0], VAR11, VAR12);
            return 0;
        }
        else
        {
            if (FUN8(VAR2->VAR14[0]))
                FUN9(VAR2->VAR13[0]);
            return 0;
        }
    }
    else
    {
        return FUN10(&VAR4->VAR15);
    }
}