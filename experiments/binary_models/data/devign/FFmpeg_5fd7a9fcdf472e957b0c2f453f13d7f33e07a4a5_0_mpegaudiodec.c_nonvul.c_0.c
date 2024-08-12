static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, const VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    VAR11 *VAR12;
    int VAR13, VAR14 = 0;
    uint32_t VAR15;
    VAR16 *VAR17 = VAR3;
    OUT_INT VAR18[VAR19 * VAR20];
    VAR16 *VAR21, *VAR22;
    int VAR23;
    int VAR24, VAR25, VAR26;
    VAR13 = VAR7;
    *VAR4 = 0;
    if (VAR7 < VAR27)
        return -1;
    VAR21 = VAR9->VAR28 == 1 ? VAR17 : VAR18;
    VAR2->VAR29 = 0;
    for (VAR24 = 0; VAR24 < VAR9->VAR28; VAR24++)
    {
        VAR23 = FUN2(VAR6) >> 4;
        VAR23 = FUN3(VAR23, VAR13, VAR30);
        VAR12 = VAR9->VAR31[VAR24];
        assert(VAR12 != NULL);
        VAR15 = (FUN4(VAR6) & 0x000fffff) | VAR9->VAR32;
        if (FUN5(VAR15) < 0)
        {
            *VAR4 = 0;
            return VAR7;
        }
        FUN6(VAR12, VAR15);
        VAR14 += FUN7(VAR12, VAR21, VAR6, VAR23);
        VAR6 += VAR23;
        VAR13 -= VAR23;
        if (VAR9->VAR28 > 1)
        {
            VAR26 = VAR12->VAR2->VAR33 * VAR12->VAR34;
            VAR22 = VAR17 + VAR9->VAR35[VAR24];
            if (VAR12->VAR34 == 1)
            {
                for (VAR25 = 0; VAR25 < VAR26; VAR25++)
                {
                    *VAR22 = VAR18[VAR25];
                    VAR22 += VAR2->VAR36;
                }
            }
            else
            {
                for (VAR25 = 0; VAR25 < VAR26; VAR25++)
                {
                    VAR22[0] = VAR18[VAR25++];
                    VAR22[1] = VAR18[VAR25];
                    VAR22 += VAR2->VAR36;
                }
            }
        }
        VAR2->VAR29 += VAR12->VAR29;
    }
    VAR2->VAR37 = VAR9->VAR31[0]->VAR37;
    *VAR4 = VAR14;
    return VAR7;
}