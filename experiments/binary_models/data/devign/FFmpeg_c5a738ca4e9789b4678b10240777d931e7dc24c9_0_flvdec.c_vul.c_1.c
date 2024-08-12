static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int read)
{
    VAR6 *VAR7 = VAR4->VAR8;
    switch (VAR5)
    {
    case VAR9:
        VAR7->VAR10 = VAR11;
        break;
    case VAR12:
        VAR7->VAR10 = VAR13;
        break;
    case VAR14:
        VAR7->VAR10 = VAR15;
        break;
    case VAR16:
        VAR7->VAR10 = VAR17;
    case VAR18:
        if (VAR5 == VAR18)
            VAR7->VAR10 = VAR19;
        if (read)
        {
            if (VAR7->VAR20 != 1)
            {
                VAR7->VAR20 = 1;
                VAR7->VAR21 = FUN2(1);
            }
            VAR7->VAR21[0] = FUN3(VAR2->VAR22);
        }
        return 1;
    case VAR23:
        VAR7->VAR10 = VAR24;
        return 3;
    default:
        FUN4(VAR2, VAR25, "", VAR5);
        VAR7->VAR26 = VAR5;
    }
    return 0;
}