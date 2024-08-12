void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    if (VAR2->VAR5 && (VAR2->VAR6 == 0 || (VAR2->VAR6 & ~15) == VAR7))
    {
        unsigned int VAR8;
        for (VAR8 = 15; VAR8 > 0; VAR8--)
        {
            if (VAR2->VAR5 & (1 << VAR8))
            {
                int VAR9 = VAR2->VAR6;
                VAR2->VAR6 = VAR7 | VAR8;
                if (VAR9 != VAR2->VAR6)
                {
                    VAR4 = FUN2(FUN3(VAR2));
                    FUN4(VAR8);
                    FUN5(VAR4, VAR10);
                }
                break;
            }
        }
    }
    else if (!VAR2->VAR5 && (VAR2->VAR6 & ~15) == VAR7)
    {
        VAR4 = FUN2(FUN3(VAR2));
        FUN6(VAR2->VAR6 & 15);
        VAR2->VAR6 = 0;
        FUN7(VAR4, VAR10);
    }