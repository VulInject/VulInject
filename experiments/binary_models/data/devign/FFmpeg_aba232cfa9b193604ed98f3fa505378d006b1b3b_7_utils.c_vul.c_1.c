static void FUN1(int *VAR1, int *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 *VAR8)
{
    int VAR9;
    *VAR1 = 0;
    *VAR2 = 0;
    switch (VAR4->VAR10->VAR11)
    {
    case VAR12:
        if (VAR4->VAR13.VAR14)
        {
            *VAR1 = VAR4->VAR13.VAR15;
            *VAR2 = VAR4->VAR13.VAR14;
        }
        else if (VAR4->VAR16.VAR14 * 1000LL > VAR4->VAR16.VAR15)
        {
            *VAR1 = VAR4->VAR16.VAR14;
            *VAR2 = VAR4->VAR16.VAR15;
        }
        else if (VAR4->VAR10->VAR16.VAR14 * 1000LL > VAR4->VAR10->VAR16.VAR15)
        {
            *VAR1 = VAR4->VAR10->VAR16.VAR14;
            *VAR2 = VAR4->VAR10->VAR16.VAR15;
            if (VAR6 && VAR6->VAR17)
            {
                *VAR1 = (*VAR1) * (1 + VAR6->VAR17);
            }
            if (VAR4->VAR10->VAR18 > 1 && !VAR6)
            {
                *VAR1 = *VAR2 = 0;
            }
        }
        break;
    case VAR19:
        VAR9 = FUN2(VAR4->VAR10, VAR8->VAR20, 0);
        if (VAR9 <= 0 || VAR4->VAR10->VAR21 <= 0)
            break;
        *VAR1 = VAR9;
        *VAR2 = VAR4->VAR10->VAR21;
        break;
    default:
        break;
    }
}