VAR1 FUN1(VAR2 *VAR3)
{
    int64_t VAR4;
    uint64_t VAR5;
    if (VAR3->VAR6)
    {
        VAR4 = FUN2(VAR7);
        if (VAR4 - VAR3->VAR8 > 0 || VAR3->VAR9 == 0)
        {
            VAR5 = 0;
        }
        else
        {
            uint64_t VAR10;
            uint64_t VAR11;
            int VAR12, VAR13;
            int VAR14;
            uint32_t VAR15 = VAR3->VAR15;
            uint64_t VAR9 = VAR3->VAR9;
            if ((VAR3->VAR6 == 1) && !VAR16 && (VAR3->VAR17 * VAR9 < 10000))
            {
                VAR9 = 10000 / VAR3->VAR17;
                VAR15 = 0;
            }
            VAR10 = VAR3->VAR8 - VAR4;
            VAR11 = VAR9;
            VAR12 = FUN3(VAR10);
            VAR13 = FUN3(VAR11);
            VAR14 = VAR12 < VAR13 ? VAR12 : VAR13;
            VAR10 <<= VAR14;
            VAR11 <<= VAR14;
            if (VAR14 >= 32)
            {
                VAR11 |= ((VAR1)VAR15 << (VAR14 - 32));
            }
            else
            {
                if (VAR14 != 0)
                    VAR11 |= (VAR15 >> (32 - VAR14));
                if ((VAR18)(VAR15 << VAR14))
                    VAR11 += 1;
            }
            VAR5 = VAR10 / VAR11;
        }
    }
    else
    {
        VAR5 = VAR3->VAR17;
    }
    return VAR5;
}