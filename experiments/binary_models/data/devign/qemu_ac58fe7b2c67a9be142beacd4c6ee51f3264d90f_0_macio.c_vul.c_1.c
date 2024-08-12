static void FUN1(VAR1 *VAR2, int64_t VAR3, int VAR4, void (*VAR5)(void *VAR6, int VAR7), void *VAR6)
{
    VAR8 *VAR9 = VAR6;
    VAR10 *VAR11 = VAR9->VAR6;
    VAR12 *VAR13 = FUN2(&VAR11->VAR14);
    dma_addr_t VAR15, VAR16;
    void *VAR17;
    int VAR18, VAR19;
    int VAR20 = 0;
    FUN3(&VAR9->VAR21);
    FUN4(&VAR9->VAR21, VAR9->VAR22 / VAR23 + 1);
    if (VAR9->VAR24 > 0)
    {
        int VAR25 = FUN5(VAR9->VAR24, VAR9->VAR22);
        FUN6("", VAR25);
        FUN7(VAR9->VAR26, &VAR9->VAR19 + (0x200 - VAR25), VAR25);
        VAR9->VAR24 -= VAR25;
        VAR9->VAR22 -= VAR25;
        VAR9->VAR26 += VAR25;
        VAR13->VAR27 += VAR25;
        VAR13->VAR28 -= VAR25;
        if (VAR9->VAR24 != 0)
        {
            return;
        }
        FUN6("");
        FUN8(&VAR9->VAR21, &VAR9->VAR19, 0x200);
        VAR20 = 1;
    }
    if (VAR13->VAR29 == VAR30)
    {
        VAR3 = (VAR31)(VAR13->VAR32 << 2) + (VAR13->VAR27 >> 9);
    }
    else
    {
        VAR3 = FUN9(VAR13) + (VAR13->VAR27 >> 9);
    }
    VAR18 = (VAR9->VAR22 >> 9);
    VAR19 = VAR9->VAR22 - (VAR18 << 9);
    FUN6("" VAR33 "", VAR9->VAR26, VAR9->VAR22);
    FUN6("", VAR19);
    FUN6("" VAR34 "", VAR3, VAR18);
    VAR15 = VAR9->VAR26;
    VAR16 = VAR9->VAR22;
    VAR17 = FUN10(&VAR35, VAR15, &VAR16, VAR36);
    if (!VAR19)
    {
        FUN6("" VAR33 "", VAR9->VAR26, VAR9->VAR22);
        FUN8(&VAR9->VAR21, VAR17, VAR9->VAR22);
    }
    else
    {
        FUN6("" VAR33 "", VAR9->VAR26, (VAR18 << 9));
        FUN8(&VAR9->VAR21, VAR17, (VAR18 << 9));
        FUN6(""
                      "",
                      &VAR9->VAR19, VAR19);
        FUN7(VAR9->VAR26 + (VAR18 << 9), &VAR9->VAR19, VAR19);
        VAR9->VAR24 = 0x200 - VAR19;
        FUN6("", VAR9->VAR24);
    }
    VAR13->VAR28 -= ((VAR18 + VAR20) << 9);
    VAR13->VAR27 += ((VAR18 + VAR20) << 9);
    VAR9->VAR22 = 0;
    FUN6("" VAR34 ""
                  "",
                  VAR3, VAR18 + VAR20);
    VAR11->VAR37 = FUN11(VAR2, VAR3, &VAR9->VAR21, VAR18 + VAR20, VAR5, VAR9);
}