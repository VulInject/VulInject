static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
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
        if (VAR7->VAR16 != 1)
        {
            VAR7->VAR16 = 1;
            VAR7->VAR17 = FUN2(1);
        }
        VAR7->VAR17[0] = FUN3(&VAR2->VAR18);
        return 1;
    default:
        FUN4(VAR2, VAR19, "", VAR5);
        VAR7->VAR20 = VAR5;
    }
    return 0;
}