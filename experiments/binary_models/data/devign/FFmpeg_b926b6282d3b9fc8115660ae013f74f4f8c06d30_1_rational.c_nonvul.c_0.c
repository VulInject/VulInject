int FUN1(int *VAR1, int *VAR2, int64_t VAR3, int64_t VAR4, int64_t VAR5)
{
    AVRational VAR6 = {0, 1}, VAR7 = {1, 0};
    int VAR8 = (VAR3 < 0) ^ (VAR4 < 0);
    int64_t VAR9 = FUN2(FUN3(VAR3), FUN3(VAR4));
    if (VAR9)
    {
        VAR3 = FUN3(VAR3) / VAR9;
        VAR4 = FUN3(VAR4) / VAR9;
    }
    if (VAR3 <= VAR5 && VAR4 <= VAR5)
    {
        VAR7 = (VAR10){VAR3, VAR4};
        VAR4 = 0;
    }
    while (VAR4)
    {
        uint64_t VAR11 = VAR3 / VAR4;
        int64_t VAR12 = VAR3 - VAR4 * VAR11;
        int64_t VAR13 = VAR11 * VAR7.VAR3 + VAR6.VAR3;
        int64_t VAR14 = VAR11 * VAR7.VAR4 + VAR6.VAR4;
        if (VAR13 > VAR5 || VAR14 > VAR5)
        {
            if (VAR7.VAR3)
                VAR11 = (VAR5 - VAR6.VAR3) / VAR7.VAR3;
            if (VAR7.VAR4)
                VAR11 = FUN4(VAR11, (VAR5 - VAR6.VAR4) / VAR7.VAR4);
            if (VAR4 * (2 * VAR11 * VAR7.VAR4 + VAR6.VAR4) > VAR3 * VAR7.VAR4)
                VAR7 = (VAR10){VAR11 * VAR7.VAR3 + VAR6.VAR3, VAR11 * VAR7.VAR4 + VAR6.VAR4};
            break;
        }
        VAR6 = VAR7;
        VAR7 = (VAR10){VAR13, VAR14};
        VAR3 = VAR4;
        VAR4 = VAR12;
    }
    FUN5(FUN2(VAR7.VAR3, VAR7.VAR4) <= 1U);
    *VAR1 = VAR8 ? -VAR7.VAR3 : VAR7.VAR3;
    *VAR2 = VAR7.VAR4;
    return VAR4 == 0;
}