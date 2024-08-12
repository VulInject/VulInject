static int FUN1(VAR1 *VAR2, int64_t VAR3, const VAR4 *VAR5, int VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    uint32_t VAR10;
    uint32_t VAR11;
    uint32_t VAR12;
    uint32_t VAR13;
    uint32_t VAR14 = VAR15;
    uint32_t VAR16 = VAR15;
    VAR4 *VAR17 = NULL;
    int VAR18 = 0;
    FUN2("");
    while (VAR18 >= 0 && VAR6 > 0)
    {
        VAR11 = VAR3 / VAR8->VAR19;
        VAR12 = VAR3 % VAR8->VAR19;
        VAR13 = VAR8->VAR19 - VAR12;
        if (VAR13 > VAR6)
        {
            VAR13 = VAR6;
        }
        FUN2("" VAR20 "", VAR13, VAR3);
        VAR10 = FUN3(VAR8->VAR21[VAR11]);
        if (!FUN4(VAR10))
        {
            uint64_t VAR22;
            VAR10 = VAR8->VAR23.VAR24;
            VAR8->VAR21[VAR11] = FUN5(VAR10);
            VAR8->VAR23.VAR24++;
            VAR22 = VAR8->VAR23.VAR25 / VAR26 + (VAR27)VAR10 * VAR8->VAR19;
            if (VAR17 == NULL)
            {
                VAR17 = FUN6(VAR8->VAR28);
                VAR14 = VAR11;
            }
            VAR16 = VAR11;
            memset(VAR17, 0, VAR12 * VAR26);
            memcpy(VAR17 + VAR12 * VAR26, VAR5, VAR13 * VAR26);
            memset(VAR17 + (VAR12 + VAR13) * VAR26, 0, (VAR8->VAR19 - VAR13 - VAR12) * VAR26);
            VAR18 = FUN7(VAR2->VAR29, VAR22, VAR17, VAR8->VAR19);
        }
        else
        {
            uint64_t VAR22 = VAR8->VAR23.VAR25 / VAR26 + (VAR27)VAR10 * VAR8->VAR19 + VAR12;
            VAR18 = FUN7(VAR2->VAR29, VAR22, VAR5, VAR13);
        }
        VAR6 -= VAR13;
        VAR3 += VAR13;
        VAR5 += VAR13 * VAR26;
        FUN2("", VAR13);
    }
    FUN2("");
    if (VAR18 < 0)
    {
        return VAR18;
    }
    if (VAR17)
    {
        VAR30 *VAR23 = (VAR30 *)VAR17;
        VAR4 *VAR31;
        uint64_t VAR22;
        FUN2("");
        assert(FUN4(VAR14));
        *VAR23 = VAR8->VAR23;
        FUN8(VAR23);
        VAR18 = FUN7(VAR2->VAR29, 0, VAR17, 1);
        FUN9(VAR17);
        VAR17 = NULL;
        if (VAR18 < 0)
        {
            return VAR18;
        }
        FUN2("", VAR14, VAR16);
        VAR14 /= (VAR26 / sizeof(VAR32));
        VAR16 /= (VAR26 / sizeof(VAR32));
        VAR13 = VAR16 - VAR14 + 1;
        VAR22 = VAR8->VAR33 + VAR14;
        VAR31 = ((VAR4 *)&VAR8->VAR21[0]) + VAR14 * VAR26;
        FUN2("", VAR13, VAR14);
        VAR18 = FUN7(VAR2->VAR29, VAR22, VAR31, VAR13);
    }
    return VAR18;
}