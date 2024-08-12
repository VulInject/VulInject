static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    assert(VAR4->VAR5->VAR6 == 0);
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
            if (VAR13 > VAR4->VAR16.VAR17)
            {
                VAR13 = VAR4->VAR16.VAR17;
            }
            FUN2(VAR4, VAR2->VAR18 + VAR2->VAR15, VAR13);
            VAR2->VAR15 += VAR13;
            if (VAR2->VAR15 >= VAR2->VAR14)
                VAR2->VAR7 = VAR8;
            return VAR13;
        }
        VAR2->VAR7 = VAR11;
        return VAR19;
    default:
        return VAR19;
    }
}