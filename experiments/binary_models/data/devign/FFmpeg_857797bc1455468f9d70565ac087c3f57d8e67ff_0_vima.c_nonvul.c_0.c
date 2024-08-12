static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    GetBitContext VAR7;
    VAR8 *VAR9 = VAR2->VAR10;
    int16_t VAR11[2];
    uint32_t VAR12;
    int8_t VAR13[2];
    int VAR14, VAR15, VAR16 = 1;
    if (VAR6->VAR17 < 13)
        return VAR18;
    FUN2(&VAR7, VAR6->VAR3, VAR6->VAR17 * 8);
    VAR12 = FUN3(&VAR7, 32);
    if (VAR12 == 0xffffffff)
    {
        FUN4(&VAR7, 32);
        VAR12 = FUN3(&VAR7, 32);
    }
    if (VAR12 > VAR6->VAR17 * 2)
        return VAR18;
    VAR13[0] = FUN5(&VAR7, 8);
    if (VAR13[0] & 0x80)
    {
        VAR13[0] = ~VAR13[0];
        VAR16 = 2;
    }
    VAR2->VAR16 = VAR16;
    VAR2->VAR19 = (VAR16 == 2) ? VAR20 : VAR21;
    VAR11[0] = FUN5(&VAR7, 16);
    if (VAR16 > 1)
    {
        VAR13[1] = FUN5(&VAR7, 8);
        VAR11[1] = FUN5(&VAR7, 16);
    }
    VAR9->VAR22.VAR23 = VAR12;
    if ((VAR14 = VAR2->FUN6(VAR2, &VAR9->VAR22)) < 0)
    {
        FUN7(VAR2, VAR24, "");
        return VAR14;
    }
    for (VAR15 = 0; VAR15 < VAR16; VAR15++)
    {
        VAR25 *VAR26 = (VAR25 *)VAR9->VAR22.VAR3[0] + VAR15;
        int VAR27 = VAR13[VAR15];
        int VAR28 = VAR11[VAR15];
        int VAR29;
        for (VAR29 = 0; VAR29 < VAR12; VAR29++)
        {
            int VAR30, VAR31, VAR32, VAR33;
            VAR27 = FUN8(VAR27, 0, 88);
            VAR30 = VAR34[VAR27];
            VAR31 = FUN9(&VAR7, VAR30);
            VAR32 = 1 << (VAR30 - 1);
            VAR33 = VAR32 - 1;
            if (VAR31 & VAR32)
                VAR31 ^= VAR32;
            else
                VAR32 = 0;
            if (VAR31 == VAR33)
            {
                VAR28 = FUN5(&VAR7, 16);
            }
            else
            {
                int VAR35, VAR36;
                VAR35 = (VAR31 << (7 - VAR30)) | (VAR27 << 6);
                VAR35 = FUN8(VAR35, 0, 5785);
                VAR36 = VAR9->VAR37[VAR35];
                if (VAR31)
                    VAR36 += VAR38[VAR27] >> (VAR30 - 1);
                if (VAR32)
                    VAR36 = -VAR36;
                VAR28 = FUN10(VAR28 + VAR36);
            }
            *VAR26 = VAR28;
            VAR26 += VAR16;
            VAR27 += VAR39[VAR30 - 2][VAR31];
        }
    }
    *VAR4 = 1;
    *(VAR40 *)VAR3 = VAR9->VAR22;
    return VAR6->VAR17;
}