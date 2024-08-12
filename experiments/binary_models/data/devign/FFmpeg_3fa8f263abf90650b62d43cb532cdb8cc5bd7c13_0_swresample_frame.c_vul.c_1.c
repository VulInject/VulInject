int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR3 *VAR5)
{
    int VAR6, VAR7 = 0;
    if (!FUN2(VAR2))
    {
        if ((VAR6 = FUN3(VAR2, VAR4, VAR5)) < 0)
            return VAR6;
        if ((VAR6 = FUN4(VAR2)) < 0)
            return VAR6;
        VAR7 = 1;
    }
    else
    {
        if ((VAR6 = FUN5(VAR2, VAR4, VAR5)))
            return VAR6;
    }
    if (VAR4)
    {
        if (!VAR4->VAR8[0])
        {
            VAR4->VAR9 = FUN6(VAR2, VAR2->VAR10) + VAR5->VAR9 * (VAR11)VAR2->VAR10 / VAR2->VAR12 + 3;
            if ((VAR6 = FUN7(VAR4, 0)) < 0)
            {
                if (VAR7)
                    FUN8(VAR2);
                return VAR6;
            }
        }
        else
        {
            if (!VAR4->VAR9)
                VAR4->VAR9 = FUN9(VAR4);
        }
    }
    return FUN10(VAR2, VAR4, VAR5);
}