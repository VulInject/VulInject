static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6, VAR7;
    int VAR8 = 0;
    if (VAR4->VAR9 != 0)
        return VAR2->VAR10->FUN2(VAR2, VAR4);
    VAR5 = (VAR2->VAR11[0] << 8) | VAR2->VAR11[1];
    VAR6 = (VAR2->VAR11[3] << 8) | VAR2->VAR11[2];
    VAR7 = (VAR2->VAR11[5] << 8) | VAR2->VAR11[4];
    switch (VAR2->VAR12)
    {
    case VAR13:
        if (!(VAR2->VAR11[0] & VAR14))
        {
            VAR8 = VAR2->VAR10->FUN3(VAR2, VAR4, VAR5, VAR6, VAR7, VAR2->VAR15, VAR2->VAR16);
            if (VAR8 == VAR17)
            {
                return VAR17;
            }
            VAR2->VAR12 = VAR18;
            if (VAR8 > 0)
                return 0;
            return VAR8;
        }
        return 0;
    case VAR19:
        if (VAR2->VAR11[0] & VAR14)
        {
            int VAR20 = VAR2->VAR15 - VAR2->VAR21;
            if (VAR20 > VAR4->VAR20)
                VAR20 = VAR4->VAR20;
            memcpy(VAR4->VAR22, VAR2->VAR16 + VAR2->VAR21, VAR20);
            VAR2->VAR21 += VAR20;
            if (VAR2->VAR21 >= VAR2->VAR15)
                VAR2->VAR12 = VAR13;
            return VAR20;
        }
        VAR2->VAR12 = VAR18;
        return VAR23;
    default:
        return VAR23;
    }
}