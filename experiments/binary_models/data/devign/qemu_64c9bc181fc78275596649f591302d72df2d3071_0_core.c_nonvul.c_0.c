static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6, VAR7;
    assert(VAR4->VAR8->VAR9 == 0);
    VAR5 = (VAR2->VAR10[0] << 8) | VAR2->VAR10[1];
    VAR6 = (VAR2->VAR10[3] << 8) | VAR2->VAR10[2];
    VAR7 = (VAR2->VAR10[5] << 8) | VAR2->VAR10[4];
    switch (VAR2->VAR11)
    {
    case VAR12:
        if (!(VAR2->VAR10[0] & VAR13))
        {
            FUN2(VAR2, VAR4, VAR5, VAR6, VAR7, VAR2->VAR14, VAR2->VAR15);
            if (VAR4->VAR16 == VAR17)
            {
                return;
            }
            VAR2->VAR11 = VAR18;
            VAR4->VAR19 = 0;
        }
        break;
    case VAR20:
        if (VAR2->VAR10[0] & VAR13)
        {
            int VAR21 = VAR2->VAR14 - VAR2->VAR22;
            if (VAR21 > VAR4->VAR23.VAR24)
            {
                VAR21 = VAR4->VAR23.VAR24;
            }
            FUN3(VAR4, VAR2->VAR15 + VAR2->VAR22, VAR21);
            VAR2->VAR22 += VAR21;
            if (VAR2->VAR22 >= VAR2->VAR14)
            {
                VAR2->VAR11 = VAR12;
            }
            return;
        }
        VAR2->VAR11 = VAR18;
        VAR4->VAR16 = VAR25;
        break;
    default:
        VAR4->VAR16 = VAR25;
    }
}