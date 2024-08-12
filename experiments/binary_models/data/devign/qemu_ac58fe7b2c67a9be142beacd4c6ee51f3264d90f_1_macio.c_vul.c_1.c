static void FUN1(VAR1 *VAR2, int64_t VAR3, unsigned int VAR4, void (*VAR5)(void *VAR6, int VAR7), void *VAR6)
{
    VAR8 *VAR9 = VAR6;
    VAR10 *VAR11 = VAR9->VAR6;
    VAR12 *VAR13 = FUN2(&VAR11->VAR14);
    dma_addr_t VAR15, VAR16;
    void *VAR17;
    int64_t VAR18;
    int VAR19;
    uint64_t VAR20 = VAR21;
    size_t VAR22, VAR23;
    FUN3(&VAR9->VAR24);
    FUN4(&VAR9->VAR24, VAR9->VAR25 / VAR26 + 1);
    VAR18 = (VAR3 >> 9);
    VAR19 = (VAR9->VAR25 >> 9);
    FUN5("" VAR27 ""
                  "" VAR28 "",
                  VAR9->VAR29, VAR9->VAR25, VAR18, VAR19);
    VAR15 = VAR9->VAR29;
    VAR16 = VAR9->VAR25;
    VAR17 = FUN6(&VAR30, VAR15, &VAR16, VAR31);
    if (VAR3 & (VAR20 - 1))
    {
        VAR22 = VAR3 & (VAR20 - 1);
        FUN5("" VAR28 ""
                      "",
                      VAR18, VAR22);
        FUN7(&VAR9->VAR24, &VAR9->VAR32, VAR22);
        VAR4 += VAR3 & (VAR20 - 1);
        VAR3 = VAR3 & ~(VAR20 - 1);
    }
    FUN7(&VAR9->VAR24, VAR17, VAR9->VAR25);
    if ((VAR3 + VAR4) & (VAR20 - 1))
    {
        VAR23 = (VAR3 + VAR4) & (VAR20 - 1);
        FUN5("" VAR28 ""
                      "",
                      VAR18, VAR23);
        FUN7(&VAR9->VAR24, &VAR9->VAR32, VAR20 - VAR23);
        VAR4 = FUN8(VAR4, VAR20);
    }
    VAR13->VAR33 -= VAR9->VAR25;
    VAR13->VAR34 += VAR9->VAR25;
    VAR9->VAR25 = 0;
    FUN5("" VAR35 ""
                  "",
                  (VAR3 >> 9), (VAR4 >> 9));
    VAR11->VAR36 = FUN9(VAR2, (VAR3 >> 9), &VAR9->VAR24, (VAR4 >> 9), VAR5, VAR9);
}