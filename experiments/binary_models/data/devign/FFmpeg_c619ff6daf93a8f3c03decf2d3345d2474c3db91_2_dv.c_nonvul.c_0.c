static inline void FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6)
{
    int VAR7, VAR8, VAR9, VAR10;
    int VAR11, VAR12, VAR13, VAR14;
    VAR3 *VAR15;
    VAR3 *VAR16;
    VAR3 *VAR17;
    int VAR18;
    DCTELEM VAR19[64] VAR20;
    EncBlockInfo VAR21[5 * 6];
    PutBitContext VAR22[5 * 6];
    VAR23 *VAR24;
    VAR25 *VAR26;
    int VAR27 = 0;
    int VAR28[5];
    assert((((int)VAR19) & 7) == 0);
    VAR26 = &VAR21[0];
    VAR24 = &VAR22[0];
    for (VAR7 = 0; VAR7 < 5; VAR7++)
    {
        VAR10 = *VAR6++;
        VAR11 = VAR10 & 0xff;
        VAR12 = VAR10 >> 8;
        VAR15 = VAR2->VAR29.VAR16[0] + (VAR12 * VAR2->VAR29.VAR14[0] * 8) + (VAR11 * 8);
        VAR13 = (VAR2->VAR30->VAR31 == VAR32) ? ((VAR12 * VAR2->VAR29.VAR14[1] * 8) + ((VAR11 >> 2) * 8)) : (((VAR12 >> 1) * VAR2->VAR29.VAR14[1] * 8) + ((VAR11 >> 1) * 8));
        VAR18 = 0;
        VAR28[VAR7] = 15;
        VAR17 = VAR4 + VAR7 * 80 + 4;
        for (VAR9 = 0; VAR9 < 6; VAR9++)
        {
            if (VAR9 < 4)
            {
                if (VAR2->VAR30->VAR31 == VAR32 && VAR11 < (704 / 8))
                {
                    VAR16 = VAR15 + (VAR9 * 8);
                }
                else
                {
                    VAR16 = VAR15 + ((VAR9 & 1) * 8) + ((VAR9 >> 1) * 8 * VAR2->VAR29.VAR14[0]);
                }
                VAR14 = VAR2->VAR29.VAR14[0];
            }
            else
            {
                VAR16 = VAR2->VAR29.VAR16[6 - VAR9] + VAR13;
                VAR14 = VAR2->VAR29.VAR14[6 - VAR9];
                if (VAR2->VAR30->VAR31 == VAR32 && VAR11 >= (704 / 8))
                    VAR18 = 1;
            }
            if (VAR18)
            {
                VAR3 *VAR33;
                VAR34 *VAR35 = VAR19;
                for (VAR8 = 0; VAR8 < 8; VAR8++)
                {
                    VAR33 = VAR16 + 8 * VAR14;
                    VAR35[0] = VAR16[0];
                    VAR35[1] = VAR16[1];
                    VAR35[2] = VAR16[2];
                    VAR35[3] = VAR16[3];
                    VAR35[4] = VAR33[0];
                    VAR35[5] = VAR33[1];
                    VAR35[6] = VAR33[2];
                    VAR35[7] = VAR33[3];
                    VAR16 += VAR14;
                    VAR35 += 8;
                }
            }
            else
            {
                VAR2->FUN2(VAR19, VAR16, VAR14);
            }
            if (VAR2->VAR36->VAR37 & VAR38)
                VAR26->VAR39 = FUN3(VAR19);
            else
                VAR26->VAR39 = 0;
            VAR26->VAR40[0] = VAR26->VAR40[1] = VAR26->VAR40[2] = VAR26->VAR40[3] = 0;
            VAR26->VAR41 = 0;
            VAR26->VAR42 = 0;
            VAR26->VAR43 = 0;
            VAR2->VAR44[VAR26->VAR39](VAR19);
            FUN4(VAR19, VAR26, VAR26->VAR39 ? VAR45 : VAR46, VAR9 / 4);
            FUN5(VAR24, VAR17, VAR47[VAR9] / 8);
            FUN6(VAR24, 9, (VAR5)(((VAR26->VAR48[0] >> 3) - 1024 + 2) >> 2));
            FUN6(VAR24, 1, VAR26->VAR39);
            FUN6(VAR24, 2, VAR26->VAR49);
            VAR27 += VAR26->VAR50[0] + VAR26->VAR50[1] + VAR26->VAR50[2] + VAR26->VAR50[3];
            ++VAR26;
            ++VAR24;
            VAR17 += VAR47[VAR9] / 8;
        }
    }
    if (VAR51 < VAR27)
        FUN7(&VAR21[0], &VAR28[0]);
    for (VAR8 = 0; VAR8 < 5; VAR8++)
    {
        VAR4[VAR8 * 80 + 3] = VAR28[VAR8];
    }
    for (VAR9 = 0; VAR9 < 5 * 6; VAR9++)
        FUN8(&VAR21[VAR9], &VAR22[VAR9], &VAR22[VAR9 + 1]);
    for (VAR9 = 0; VAR9 < 5 * 6; VAR9 += 6)
    {
        VAR24 = &VAR22[VAR9];
        for (VAR8 = 0; VAR8 < 6; VAR8++)
        {
            if (VAR21[VAR8 + VAR9].VAR41)
                VAR24 = FUN8(&VAR21[VAR8 + VAR9], VAR24, &VAR22[VAR9 + 6]);
        }
    }
    VAR24 = &VAR22[0];
    for (VAR9 = 0; VAR9 < 5 * 6; VAR9++)
    {
        if (VAR21[VAR9].VAR41)
            VAR24 = FUN8(&VAR21[VAR9], VAR24, &VAR22[6 * 5]);
    }
    for (VAR9 = 0; VAR9 < 5 * 6; VAR9++)
        FUN9(&VAR22[VAR9]);
}