static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const char *VAR5, VAR6 **VAR7, int *VAR8, const VAR6 *VAR9, int VAR10, int VAR11)
{
    VAR12 *VAR13 = VAR2->VAR14;
    uint8_t VAR15;
    int32_t VAR16;
    uint32_t VAR17 = 0;
    const VAR6 *VAR18 = VAR9 + VAR10;
    if (!VAR4->VAR19 || VAR4->VAR20 < 6)
    {
        *VAR7 = (VAR6 *)VAR9;
        *VAR8 = VAR10;
        return 0;
    }
    if (!VAR13->VAR21)
    {
        uint16_t VAR22;
        uint32_t VAR23 = 0;
        VAR6 *VAR24 = NULL, VAR25, VAR26 = 0;
        const VAR6 *VAR19 = VAR4->VAR19 + 4;
        static const uint8_t VAR27[4] = {0, 0, 0, 1};
        VAR13->VAR28 = (*VAR19++ & 0x3) + 1;
        if (VAR13->VAR28 == 3)
            return FUN2(VAR29);
        VAR25 = *VAR19++ & 0x1f;
        if (!VAR25)
        {
            VAR25 = *VAR19++;
            VAR26++;
        }
        while (VAR25--)
        {
            VAR22 = FUN3(VAR19);
            VAR23 += VAR22 + 4;
            if (VAR19 + 2 + VAR22 > VAR4->VAR19 + VAR4->VAR20)
            {
                FUN4(VAR24);
                return FUN2(VAR29);
            }
            VAR24 = FUN5(VAR24, VAR23);
            if (!VAR24)
                return FUN2(VAR30);
            memcpy(VAR24 + VAR23 - VAR22 - 4, VAR27, 4);
            memcpy(VAR24 + VAR23 - VAR22, VAR19 + 2, VAR22);
            VAR19 += 2 + VAR22;
            if (!VAR25 && !VAR26++)
                VAR25 = *VAR19++;
        }
        VAR13->VAR21 = VAR24;
        VAR13->VAR31 = VAR23;
        VAR13->VAR32 = 1;
    }
    *VAR8 = 0;
    *VAR7 = NULL;
    do
    {
        if (VAR9 + VAR13->VAR28 > VAR18)
            goto VAR33;
        if (VAR13->VAR28 == 1)
            VAR16 = VAR9[0];
        else if (VAR13->VAR28 == 2)
            VAR16 = FUN3(VAR9);
        else
            VAR16 = FUN6(VAR9);
        VAR9 += VAR13->VAR28;
        VAR15 = *VAR9 & 0x1f;
        if (VAR9 + VAR16 > VAR18 || VAR16 < 0)
            goto VAR33;
        if (VAR13->VAR32 && VAR15 == 5)
        {
            FUN7(VAR7, VAR8, VAR13->VAR21, VAR13->VAR31, VAR9, VAR16);
            VAR13->VAR32 = 0;
        }
        else
        {
            FUN7(VAR7, VAR8, NULL, 0, VAR9, VAR16);
            if (!VAR13->VAR32 && VAR15 == 1)
                VAR13->VAR32 = 1;
        }
        VAR9 += VAR16;
        VAR17 += VAR16 + VAR13->VAR28;
    } while (VAR17 < VAR10);
    return 1;
VAR33:
    FUN8(VAR7);
    *VAR8 = 0;
    return FUN2(VAR29);
}