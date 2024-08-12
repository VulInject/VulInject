static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    if (VAR4->VAR5 != 0)
        return VAR2->VAR6->FUN2(VAR2, VAR4);
    switch (VAR2->VAR7)
    {
    case VAR8:
        if (VAR2->VAR9[0] & VAR10)
        {
            VAR2->VAR7 = VAR11;
        }
        else
        {
        }
        return 0;
    case VAR12:
        if (!(VAR2->VAR9[0] & VAR10))
        {
            int VAR13 = VAR2->VAR14 - VAR2->VAR15;
            if (VAR13 > VAR4->VAR13)
                VAR13 = VAR4->VAR13;
            memcpy(VAR2->VAR16 + VAR2->VAR15, VAR4->VAR17, VAR13);
            VAR2->VAR15 += VAR13;
            if (VAR2->VAR15 >= VAR2->VAR14)
                VAR2->VAR7 = VAR8;
            return VAR13;
        }
        VAR2->VAR7 = VAR11;
        return VAR18;
    default:
        return VAR18;
    }
}