static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    VAR4 *VAR5;
    VAR6 *VAR7;
    FUN2(VAR3->VAR8);
    VAR3->VAR8 = NULL;
    FUN3(VAR5, &VAR3->VAR9.VAR10, VAR11)
    {
        VAR7 = FUN4(VAR6, VAR5, VAR5);
        if (VAR7->VAR12 & VAR13)
        {
            int VAR12 = VAR7->VAR12;
            int VAR14;
            VAR7->VAR12 &= ~(VAR13 | VAR15);
            switch (VAR12 & VAR15)
            {
            case VAR16:
                FUN5(&VAR7->VAR5);
                break;
            case VAR17:
                FUN6(&VAR7->VAR5);
                break;
            case VAR18:
                VAR14 = FUN7(VAR7, VAR7->VAR19.VAR20);
                if (VAR14 == 0)
                {
                    FUN8(VAR7, VAR21, VAR22);
                }
            }
        }
    }
}