static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    VAR14 *VAR15;
    int VAR16, VAR17 = VAR9, VAR18 = 0;
    uint32_t VAR19;
    VAR20 *VAR21 = VAR3;
    VAR20 *VAR22, *VAR23;
    int VAR24, VAR25, VAR26, VAR27;
    if (*VAR4 < VAR28 * VAR2->VAR29 * sizeof(VAR20))
    {
        FUN2(VAR2, VAR30, "");
        return FUN3(VAR31);
    }
    *VAR4 = 0;
    if (VAR9 < VAR32)
        return -1;
    VAR22 = VAR12->VAR33 == 1 ? VAR21 : VAR12->VAR34;
    VAR2->VAR35 = 0;
    VAR27 = 0;
    for (VAR24 = 0; VAR24 < VAR12->VAR33; VAR24++)
    {
        VAR16 = FUN4(VAR8) >> 4;
        VAR16 = FUN5(VAR16, VAR17, VAR36);
        VAR15 = VAR12->VAR37[VAR24];
        assert(VAR15 != NULL);
        VAR19 = (FUN6(VAR8) & 0x000fffff) | VAR12->VAR38;
        if (FUN7(VAR19) < 0)
            break;
        FUN8((VAR39 *)VAR15, VAR19);
        if (VAR27 + VAR15->VAR40 > VAR2->VAR29)
        {
            FUN2(VAR2, VAR30, ""
                                        "");
            return VAR41;
        }
        VAR27 += VAR15->VAR40;
        VAR18 += FUN9(VAR15, VAR22, VAR8, VAR16);
        VAR8 += VAR16;
        VAR17 -= VAR16;
        if (VAR12->VAR33 > 1)
        {
            VAR26 = VAR15->VAR2->VAR42 * VAR15->VAR40;
            VAR23 = VAR21 + VAR12->VAR43[VAR24];
            if (VAR15->VAR40 == 1)
            {
                for (VAR25 = 0; VAR25 < VAR26; VAR25++)
                {
                    *VAR23 = VAR12->VAR34[VAR25];
                    VAR23 += VAR2->VAR29;
                }
            }
            else
            {
                for (VAR25 = 0; VAR25 < VAR26; VAR25++)
                {
                    VAR23[0] = VAR12->VAR34[VAR25++];
                    VAR23[1] = VAR12->VAR34[VAR25];
                    VAR23 += VAR2->VAR29;
                }
            }
        }
        VAR2->VAR35 += VAR15->VAR35;
    }
    VAR2->VAR44 = VAR12->VAR37[0]->VAR44;
    *VAR4 = VAR18;
    return VAR9;
}