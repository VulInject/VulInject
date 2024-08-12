void FUN1(VAR1 *VAR2, int *VAR3, int *VAR4, VAR5 *VAR6, VAR7 *VAR8, VAR9 *VAR10)
{
    AVRational VAR11 = VAR2->VAR12 ? VAR6->VAR13->VAR14 : FUN2(VAR6->VAR13->VAR15);
    int VAR16;
    *VAR3 = 0;
    *VAR4 = 0;
    switch (VAR6->VAR13->VAR17)
    {
    case VAR18:
        if (VAR6->VAR19.VAR20 && !VAR8)
        {
            *VAR3 = VAR6->VAR19.VAR21;
            *VAR4 = VAR6->VAR19.VAR20;
        }
        else if (VAR6->VAR15.VAR20 * 1000LL > VAR6->VAR15.VAR21)
        {
            *VAR3 = VAR6->VAR15.VAR20;
            *VAR4 = VAR6->VAR15.VAR21;
        }
        else if (VAR11.VAR21 * 1000LL > VAR11.VAR20)
        {
            *VAR3 = VAR11.VAR21;
            *VAR4 = VAR11.VAR20;
            *VAR4 *= VAR6->VAR13->VAR22;
            FUN3(VAR6->VAR13->VAR22);
            if (VAR8 && VAR8->VAR23)
            {
                FUN3(VAR2->VAR12);
                if (*VAR3 > VAR24 / (1 + VAR8->VAR23))
                    *VAR4 /= 1 + VAR8->VAR23;
                else
                    *VAR3 *= 1 + VAR8->VAR23;
            }
            if (VAR6->VAR13->VAR22 > 1 && !VAR8)
                *VAR3 = *VAR4 = 0;
        }
        break;
    case VAR25:
        VAR16 = FUN4(VAR6->VAR13, VAR10->VAR26);
        if (VAR16 <= 0 || VAR6->VAR13->VAR27 <= 0)
            break;
        *VAR3 = VAR16;
        *VAR4 = VAR6->VAR13->VAR27;
        break;
    default:
        break;
    }
}