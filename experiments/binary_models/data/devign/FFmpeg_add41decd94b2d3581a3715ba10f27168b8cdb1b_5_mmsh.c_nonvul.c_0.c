static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR4;
    int VAR5, VAR6;
    ChunkType VAR7;
    for (;;)
    {
        VAR6 = 0;
        VAR5 = VAR7 = FUN2(VAR2, &VAR6);
        if (VAR5 < 0)
        {
            return VAR5;
        }
        else if (VAR7 == VAR8)
        {
            if (!VAR4->VAR9)
            {
                if (VAR4->VAR10)
                {
                    if (VAR6 != VAR4->VAR11)
                    {
                        VAR4->VAR11 = VAR6;
                        FUN3(NULL, "", VAR4->VAR11, VAR6);
                        FUN4(&VAR4->VAR10);
                    }
                }
                VAR4->VAR10 = FUN5(VAR6);
                if (!VAR4->VAR10)
                {
                    return FUN6(VAR12);
                }
                VAR4->VAR11 = VAR6;
            }
            if (VAR6 > VAR4->VAR11)
            {
                FUN7(NULL, VAR13, "", VAR6, VAR4->VAR11);
                return FUN6(VAR14);
            }
            VAR5 = FUN8(VAR4->VAR15, VAR4->VAR10, VAR6);
            if (VAR5 != VAR6)
            {
                FUN7(NULL, VAR13, "", VAR5, VAR6);
                return FUN6(VAR14);
            }
            VAR4->VAR11 = VAR6;
            if (!VAR4->VAR9)
            {
                VAR5 = FUN9(VAR4);
                VAR4->VAR9 = 1;
                return VAR5;
            }
        }
        else if (VAR7 == VAR16)
        {
            return FUN10(VAR2, VAR6);
        }
        else
        {
            if (VAR6)
            {
                if (VAR6 > sizeof(VAR4->VAR17))
                {
                    FUN7(NULL, VAR13, "", VAR6, sizeof(VAR4->VAR17));
                    return FUN6(VAR14);
                }
                VAR5 = FUN8(VAR4->VAR15, VAR4->VAR17, VAR6);
                if (VAR5 != VAR6)
                {
                    FUN7(NULL, VAR13, "");
                    return FUN6(VAR14);
                }
                else
                {
                    FUN3(NULL, "", VAR7);
                    continue;
                }
            }
        }
    }
}