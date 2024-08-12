static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    if (FUN2(&VAR2->VAR5, 5) != 0x1F)
    {
        FUN3(VAR4, VAR6, "");
        return -1;
        VAR2->VAR7 = VAR2->VAR8;
        VAR2->VAR8 = FUN2(&VAR2->VAR5, 3);
        if (VAR2->VAR8 >= 5)
        {
            FUN3(VAR4, VAR6, "", VAR2->VAR8);
            return -1;
            VAR2->VAR9 = FUN2(&VAR2->VAR5, 8);
            if (VAR2->VAR8 == VAR10)
            {
                VAR2->VAR11 = 1;
                if (FUN4(VAR2, VAR4))
                    return -1;
                VAR2->VAR11 = 0;
                if (VAR2->VAR8 != VAR12)
                {
                    VAR2->VAR13 = FUN2(&VAR2->VAR5, 8);
                    VAR2->VAR14 = (VAR2->VAR13 & 1) ? FUN5(&VAR2->VAR5, 24) : 0;
                    VAR2->VAR15 = (VAR2->VAR13 & 0x10) ? FUN2(&VAR2->VAR5, 16) : 0;
                    if (VAR2->VAR13 & 0x20)
                        FUN6(&VAR2->VAR5);
                    if (FUN7(&VAR2->VAR5, VAR2->VAR13 & 0x40, VAR16, &VAR2->VAR17, VAR4))
                        return -1;
                    FUN8(&VAR2->VAR5, 3);
                    FUN9(&VAR2->VAR5);
                    return 0