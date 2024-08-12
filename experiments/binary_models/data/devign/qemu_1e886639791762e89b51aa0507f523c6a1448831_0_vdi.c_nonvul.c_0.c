FUN1(VAR1 *VAR2, uint64_t VAR3, uint64_t VAR4, VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    QEMUIOVector VAR11;
    uint32_t VAR12;
    uint32_t VAR13;
    uint32_t VAR14;
    uint32_t VAR15;
    uint64_t VAR16;
    uint32_t VAR17 = VAR18;
    uint32_t VAR19 = VAR18;
    VAR20 *VAR21 = NULL;
    uint64_t VAR22 = 0;
    int VAR23 = 0;
    FUN2("");
    FUN3(&VAR11, VAR6->VAR24);
    while (VAR23 >= 0 && VAR4 > 0)
    {
        VAR13 = VAR3 / VAR9->VAR25;
        VAR14 = VAR3 % VAR9->VAR25;
        VAR15 = FUN4(VAR4, VAR9->VAR25 - VAR14);
        FUN2("" VAR26 "", VAR15, VAR3);
        FUN5(&VAR9->VAR27);
        VAR12 = FUN6(VAR9->VAR28[VAR13]);
        if (!FUN7(VAR12))
        {
            uint64_t VAR16;
            FUN8(&VAR9->VAR27);
            VAR12 = FUN6(VAR9->VAR28[VAR13]);
            if (FUN7(VAR12))
            {
                FUN9(&VAR9->VAR27);
                goto VAR29;
            }
            VAR12 = VAR9->VAR30.VAR31;
            VAR9->VAR28[VAR13] = FUN10(VAR12);
            VAR9->VAR30.VAR31++;
            VAR16 = VAR9->VAR30.VAR32 + (VAR33)VAR12 * VAR9->VAR25;
            if (VAR21 == NULL)
            {
                VAR21 = FUN11(VAR9->VAR25);
                VAR17 = VAR13;
            }
            VAR19 = VAR13;
            memset(VAR21, 0, VAR14);
            FUN12(VAR6, VAR22, VAR21 + VAR14, VAR15);
            memset(VAR21 + VAR14 + VAR15, 0, VAR9->VAR25 - VAR15 - VAR14);
            VAR23 = FUN13(VAR2->VAR34, VAR16, VAR21, VAR9->VAR25);
            FUN14(&VAR9->VAR27);
        }
        else
        {
        VAR29:
            VAR16 = VAR9->VAR30.VAR32 + (VAR33)VAR12 * VAR9->VAR25 + VAR14;
            FUN14(&VAR9->VAR27);
            FUN15(&VAR11);
            FUN16(&VAR11, VAR6, VAR22, VAR15);
            VAR23 = FUN17(VAR2->VAR34, VAR16, VAR15, &VAR11, 0);
        }
        VAR4 -= VAR15;
        VAR3 += VAR15;
        VAR22 += VAR15;
        FUN2("", VAR15);
    }
    FUN18(&VAR11);
    FUN2("");
    if (VAR23 < 0)
    {
        return VAR23;
    }
    if (VAR21)
    {
        VAR35 *VAR30 = (VAR35 *)VAR21;
        VAR20 *VAR36;
        uint64_t VAR3;
        uint32_t VAR37;
        FUN2("");
        assert(FUN7(VAR17));
        *VAR30 = VAR9->VAR30;
        FUN19(VAR30);
        VAR23 = FUN20(VAR2->VAR34, 0, VAR21, 1);
        FUN21(VAR21);
        VAR21 = NULL;
        if (VAR23 < 0)
        {
            return VAR23;
        }
        FUN2("", VAR17, VAR19);
        VAR17 /= (VAR38 / sizeof(VAR39));
        VAR19 /= (VAR38 / sizeof(VAR39));
        VAR37 = VAR19 - VAR17 + 1;
        VAR3 = VAR9->VAR40 + VAR17;
        VAR36 = ((VAR20 *)&VAR9->VAR28[0]) + VAR17 * VAR38;
        FUN2("", VAR37, VAR17);
        VAR23 = FUN20(VAR2->VAR34, VAR3, VAR36, VAR37);
    }
    return VAR23;
}