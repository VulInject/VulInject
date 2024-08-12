static void FUN1(VAR1 *VAR2, unsigned char *VAR3, int VAR4)
{
    PutBitContext VAR5;
    int VAR6, VAR7, VAR8, VAR9, VAR10, VAR11 = 0;
    float VAR12, VAR13, VAR14;
    float VAR15[VAR16];
    int VAR17[VAR18], VAR19[VAR20];
    float VAR21[VAR20];
    FUN2(VAR2);
    FUN3(&VAR5, VAR3, VAR4 * 8);
    VAR6 = 0;
    for (VAR8 = 0; VAR8 < VAR20; VAR8++)
    {
        VAR14 = 0;
        for (VAR7 = 0; VAR7 < VAR22[VAR8]; VAR6++, VAR7++)
        {
            VAR14 += VAR2->VAR23[VAR6] * VAR2->VAR23[VAR6] + VAR2->VAR23[VAR6 + VAR18] * VAR2->VAR23[VAR6 + VAR18];
        }
        VAR21[VAR8] = FUN4(FUN5(1.0, VAR14 / (VAR22[VAR8] << 7))) * 1024.0 / VAR24;
    }
    if (VAR2->VAR25->VAR26)
    {
        FUN6(VAR2, VAR21, VAR19);
    }
    else
    {
        FUN7(VAR2, VAR21, VAR19);
    }
    VAR6 = 0;
    for (VAR8 = 0; VAR8 < VAR20; VAR8++)
    {
        if (VAR8)
        {
            VAR11 += VAR27[VAR19[VAR8]];
            FUN8(&VAR5, 5, VAR19[VAR8]);
        }
        else
        {
            VAR11 = VAR28[VAR19[0]];
            FUN8(&VAR5, 6, VAR19[0]);
        }
        VAR12 = VAR29[VAR11 & 0x7FF] / (1 << ((VAR11 >> 11) + VAR30));
        for (VAR7 = 0; VAR7 < VAR22[VAR8]; VAR6++, VAR7++)
        {
            VAR2->VAR23[VAR6] *= VAR12;
            VAR2->VAR23[VAR6 + VAR18] *= VAR12;
            VAR15[VAR6] = VAR11;
        }
    }
    FUN9(VAR15, VAR17);
    for (VAR9 = 0; VAR9 < 2; VAR9++)
    {
        for (VAR6 = 0; VAR6 < VAR16; VAR6++)
        {
            if (VAR17[VAR6] > 0)
            {
                const float *VAR31 = VAR32 + (1 << VAR17[VAR6]) - 1;
                VAR13 = VAR2->VAR23[VAR9 * VAR18 + VAR6];
                VAR10 = VAR33[FUN10(VAR13 * VAR34[VAR17[VAR6]] + VAR35[VAR17[VAR6]], VAR36[VAR17[VAR6]], VAR36[VAR17[VAR6] + 1] - 1)];
                if (FUN11(VAR13 - VAR31[VAR10]) > FUN11(VAR13 - VAR31[VAR10 + 1]))
                    VAR10++;
                FUN8(&VAR5, VAR17[VAR6], VAR10);
            }
        }
        if (!VAR9)
            FUN8(&VAR5, VAR37 + VAR38 - FUN12(&VAR5), 0);
    }
    FUN13(&VAR5);
    memset(FUN14(&VAR5), 0, VAR3 + VAR4 - FUN14(&VAR5));
}