static void FUN1(VAR1 *VAR2)
{
    for (;;)
    {
        int VAR3;
        uint8_t VAR4;
        uint8_t VAR5 = 0;
        for (VAR3 = 0; VAR3 < FUN2(VAR2); ++VAR3)
        {
            if (!VAR3 || VAR2->VAR6 == VAR7)
            {
                if (FUN3(&VAR2->VAR8))
                {
                    VAR2->VAR9[VAR10] |= VAR11;
                    FUN4(VAR2);
                    return;
                }
                else
                {
                    VAR5 = FUN5(&VAR2->VAR8);
                }
            }
            VAR4 = FUN6(VAR2->VAR12[VAR3], (VAR13)VAR5);
            FUN7("", VAR5, VAR4);
            if (!VAR3 || VAR2->VAR6 == VAR7)
            {
                if (FUN8(&VAR2->VAR14))
                {
                    VAR2->VAR9[VAR10] |= VAR15;
                    FUN7("");
                }
                else
                {
                    FUN9(&VAR2->VAR14, (VAR16)VAR4);
                }
            }
        }
        switch (VAR2->VAR6)
        {
        case (VAR17):
            switch (VAR5)
            {
            case VAR18:
            case VAR19:
            case VAR20:
            case VAR21:
                VAR2->VAR6 = 3;
                break;
            case VAR22:
            case VAR23:
            case VAR24:
            case VAR25:
                VAR2->VAR6 = 4;
                break;
            case VAR26:
                VAR2->VAR6 = 6;
                break;
            default:
                VAR2->VAR6 = VAR27;
            }
            break;
        case (VAR7):
        case (VAR27):
            break;
        default:
            VAR2->VAR6--;
        }
    }
}