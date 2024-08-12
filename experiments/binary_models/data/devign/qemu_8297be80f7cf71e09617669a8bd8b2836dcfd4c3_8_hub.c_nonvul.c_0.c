void FUN1(void)
{
    VAR1 *VAR2;
    VAR3 *VAR4;
    VAR5 *VAR6;
    FUN2(VAR2, &VAR7, VAR8)
    {
        int VAR9 = 0, VAR10 = 0;
        FUN2(VAR4, &VAR2->VAR11, VAR8)
        {
            VAR6 = VAR4->VAR12.VAR6;
            if (!VAR6)
            {
                FUN3("", VAR4->VAR12.VAR13);
                continue;
            }
            switch (VAR6->VAR14->VAR15)
            {
            case VAR16:
                VAR9 = 1;
                break;
            case VAR17:
            case VAR18:
            case VAR19:
            case VAR20:
            case VAR21:
                VAR10 = 1;
                break;
            default:
                break;
            }
        }
        if (VAR10 && !VAR9)
        {
            FUN3("", VAR2->VAR22);
        }
        if (VAR9 && !VAR10)
        {
            FUN3("", VAR2->VAR22);
        }
    }
}