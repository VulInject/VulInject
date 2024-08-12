FUN1(VAR1 *VAR2, uint64_t VAR3, uint64_t VAR4, VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    QEMUIOVector VAR11;
    uint32_t VAR12;
    uint32_t VAR13;
    uint32_t VAR14;
    uint32_t VAR15;
    uint64_t VAR16 = 0;
    int VAR17 = 0;
    FUN2("");
    FUN3(&VAR11, VAR6->VAR18);
    while (VAR17 >= 0 && VAR4 > 0)
    {
        VAR13 = VAR3 / VAR9->VAR19;
        VAR14 = VAR3 % VAR9->VAR19;
        VAR15 = FUN4(VAR4, VAR9->VAR19 - VAR14);
        FUN2("" VAR20 "", VAR15, VAR3);
        VAR12 = FUN5(VAR9->VAR21[VAR13]);
        if (!FUN6(VAR12))
        {
            FUN7(VAR6, VAR16, 0, VAR15);
            VAR17 = 0;
        }
        else
        {
            uint64_t VAR22 = VAR9->VAR23.VAR24 + (VAR25)VAR12 * VAR9->VAR19 + VAR14;
            FUN8(&VAR11);
            FUN9(&VAR11, VAR6, VAR16, VAR15);
            VAR17 = FUN10(VAR2->VAR26, VAR22, VAR15, &VAR11, 0);
        }
        FUN2("", VAR15);
        VAR4 -= VAR15;
        VAR3 += VAR15;
        VAR16 += VAR15;
    }
    FUN11(&VAR11);
    return VAR17;
}