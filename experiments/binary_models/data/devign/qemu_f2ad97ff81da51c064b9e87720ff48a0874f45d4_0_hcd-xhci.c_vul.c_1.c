static int FUN1(void *VAR1, int VAR2)
{
    VAR3 *VAR4 = VAR1;
    VAR5 *VAR6 = FUN2(VAR4);
    VAR7 *VAR8;
    VAR9 *VAR10;
    dma_addr_t VAR11, VAR12;
    uint32_t VAR13[4];
    uint32_t VAR14[5];
    int VAR15, VAR16, VAR17, VAR18;
    VAR11 = FUN3(VAR4->VAR19, VAR4->VAR20);
    for (VAR15 = 1; VAR15 <= VAR4->VAR21; VAR15++)
    {
        VAR8 = &VAR4->VAR22[VAR15 - 1];
        if (!VAR8->VAR23)
        {
            VAR8->VAR24 = FUN4(FUN5(VAR6, VAR11 + 8 * VAR15));
            FUN6(VAR4, VAR8->VAR24, VAR13, sizeof(VAR13));
            VAR8->VAR25 = FUN7(VAR4, VAR13);
            assert(VAR8->VAR25 && VAR8->VAR25->VAR26);
            for (VAR16 = 1; VAR16 <= 31; VAR16++)
            {
                VAR12 = VAR8->VAR24 + 32 * VAR16;
                FUN6(VAR4, VAR12, VAR14, sizeof(VAR14));
                VAR17 = VAR14[0] & VAR27;
                if (VAR17 == VAR28)
                {
                    VAR10 = FUN8(VAR4, VAR15, VAR16);
                    VAR8->VAR29[VAR16 - 1] = VAR10;
                    FUN9(VAR10, VAR12, VAR14);
                    VAR10->VAR17 = VAR17;
                    if (VAR17 == VAR30)
                    {
                        FUN10(VAR10->VAR31, FUN11(VAR32));
                        for (VAR18 = 0; VAR18 < VAR4->VAR33; VAR18++)
                        {
                            if (VAR4->VAR18[VAR18].VAR34)
                            {
                                FUN12(VAR6, VAR18);
                            }
                            else
                            {
                                FUN13(VAR6, VAR18);
                                return 0;