int FUN1(struct VAR1 *VAR2, VAR3 *VAR4, int *VAR5)
{
    uint8_t VAR6[16] = {0}, VAR7[20];
    int VAR8 = *VAR5;
    int VAR9, VAR10;
    uint32_t VAR11, VAR12;
    uint64_t VAR13;
    int VAR14;
    if (VAR8 < VAR2->VAR15)
        return VAR16;
    VAR14 = FUN2(VAR4[1]);
    FUN3(VAR2->VAR7, VAR14 ? VAR2->VAR17 : VAR2->VAR18, sizeof(VAR2->VAR18));
    FUN4(VAR2->VAR7, VAR4, VAR8 - VAR2->VAR15);
    if (!VAR14)
    {
        int VAR19 = FUN5(VAR4 + 2);
        uint32_t VAR20;
        uint8_t VAR21[4];
        VAR10 = VAR2->VAR22 ? VAR2->VAR10 : VAR19;
        VAR20 = VAR12 = VAR2->VAR12;
        if (VAR10 < 32768)
        {
            if (VAR19 - VAR10 > 32768)
                VAR20 = VAR12 - 1;
        }
        else
        {
            if (VAR10 - 32768 > VAR19)
                VAR20 = VAR12 + 1;
        }
        if (VAR20 == VAR12)
        {
            VAR10 = FUN6(VAR10, VAR19);
        }
        else if (VAR20 == VAR12 + 1)
        {
            VAR10 = VAR19;
            VAR12 = VAR20;
        }
        VAR13 = VAR19 + (((VAR23)VAR20) << 16);
        FUN7(VAR21, VAR12);
        FUN4(VAR2->VAR7, VAR21, 4);
    }
    FUN8(VAR2->VAR7, VAR7, sizeof(VAR7));
    if (memcmp(VAR7, VAR4 + VAR8 - VAR2->VAR15, VAR2->VAR15))
    {
        FUN9(NULL, VAR24, "");
        return VAR16;
    }
    VAR8 -= VAR2->VAR15;
    *VAR5 = VAR8;
    if (VAR8 < 12)
        return VAR16;
    if (VAR14)
    {
        uint32_t VAR25 = FUN10(VAR4 + VAR8 - 4);
        VAR8 -= 4;
        *VAR5 = VAR8;
        VAR11 = FUN10(VAR4 + 4);
        VAR13 = VAR25 & 0x7fffffff;
        VAR4 += 8;
        VAR8 -= 8;
        if (!(VAR25 & 0x80000000))
            return 0;
    }
    else
    {
        VAR2->VAR22 = 1;
        VAR2->VAR10 = VAR10;
        VAR2->VAR12 = VAR12;
        VAR9 = VAR4[0] & 0x10;
        VAR11 = FUN10(VAR4 + 8);
        VAR4 += 12;
        VAR8 -= 12;
        if (VAR9)
        {
            if (VAR8 < 4)
                return VAR16;
            VAR9 = (FUN5(VAR4 + 2) + 1) * 4;
            if (VAR8 < VAR9)
                return VAR16;
            VAR8 -= VAR9;
            VAR4 += VAR9;
        }
    }
    FUN11(VAR6, VAR14 ? VAR2->VAR26 : VAR2->VAR27, VAR13, VAR11);
    FUN12(VAR2->VAR28, VAR14 ? VAR2->VAR29 : VAR2->VAR30, 128, 0);
    FUN13(VAR2->VAR28, VAR6, VAR4, VAR8);
    return 0;
}