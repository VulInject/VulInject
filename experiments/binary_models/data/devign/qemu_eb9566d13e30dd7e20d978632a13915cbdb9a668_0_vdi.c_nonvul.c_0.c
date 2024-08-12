static int FUN1(VAR1 *VAR2, int64_t VAR3, VAR4 *VAR5, int VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    uint32_t VAR10;
    uint32_t VAR11;
    uint32_t VAR12;
    uint32_t VAR13;
    int VAR14 = 0;
    FUN2("");
    while (VAR14 >= 0 && VAR6 > 0)
    {
        VAR11 = VAR3 / VAR8->VAR15;
        VAR12 = VAR3 % VAR8->VAR15;
        VAR13 = VAR8->VAR15 - VAR12;
        if (VAR13 > VAR6)
        {
            VAR13 = VAR6;
        }
        FUN2("" VAR16 "", VAR13, VAR3);
        VAR10 = FUN3(VAR8->VAR17[VAR11]);
        if (!FUN4(VAR10))
        {
            memset(VAR5, 0, VAR13 * VAR18);
            VAR14 = 0;
        }
        else
        {
            uint64_t VAR19 = VAR8->VAR20.VAR21 / VAR18 + (VAR22)VAR10 * VAR8->VAR15 + VAR12;
            VAR14 = FUN5(VAR2->VAR23, VAR19, VAR5, VAR13);
        }
        FUN2("", VAR13);
        VAR6 -= VAR13;
        VAR3 += VAR13;
        VAR5 += VAR13 * VAR18;
    }
    return VAR14;
}