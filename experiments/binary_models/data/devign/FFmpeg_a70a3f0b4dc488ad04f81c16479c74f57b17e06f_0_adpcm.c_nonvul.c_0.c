static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    if (VAR2->VAR6 > 2U)
    {
        return -1;
    }
    switch (VAR2->VAR7->VAR8)
    {
    case VAR9:
        VAR4->VAR10[0].VAR11 = VAR4->VAR10[1].VAR11 = 511;
        break;
    case VAR12:
        if (VAR2->VAR13 && VAR2->VAR14 == 2 * 4)
        {
            VAR4->VAR10[0].VAR15 = FUN2(VAR2->VAR13);
            VAR4->VAR10[1].VAR15 = FUN2(VAR2->VAR13 + 4);
        }
        break;
    default:
        break;
    }
    return 0;
}