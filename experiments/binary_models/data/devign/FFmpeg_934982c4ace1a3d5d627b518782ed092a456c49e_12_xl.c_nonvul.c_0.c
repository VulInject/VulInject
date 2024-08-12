static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6, int VAR7)
{
    VAR8 *const VAR9 = VAR2->VAR10;
    VAR11 *const VAR12 = (VAR11 *)&VAR9->VAR13;
    VAR5 *VAR14, *VAR15, *VAR16;
    int VAR17, VAR18;
    int VAR19;
    uint32_t VAR20;
    int VAR21, VAR22, VAR23, VAR24, VAR25, VAR26;
    if (VAR12->VAR3[0])
        VAR2->FUN2(VAR2, VAR12);
    VAR12->VAR27 = 0;
    if (VAR2->FUN3(VAR2, VAR12) < 0)
    {
        FUN4(VAR2, VAR28, "");
        return -1;
    }
    VAR12->VAR29 = VAR30;
    VAR12->VAR31 = 1;
    VAR14 = VAR9->VAR13.VAR3[0];
    VAR15 = VAR9->VAR13.VAR3[1];
    VAR16 = VAR9->VAR13.VAR3[2];
    VAR19 = VAR2->VAR32 - 4;
    for (VAR17 = 0; VAR17 < VAR2->VAR33; VAR17++)
    {
        VAR6 += VAR19;
        for (VAR18 = 0; VAR18 < VAR2->VAR32; VAR18 += 4)
        {
            VAR20 = FUN5(VAR6);
            VAR6 -= 4;
            VAR20 = ((VAR20 >> 16) & 0xFFFF) | ((VAR20 & 0xFFFF) << 16);
            if (!VAR18)
                VAR21 = (VAR20 & 0x1F) << 2;
            else
                VAR21 = VAR24 + VAR34[VAR20 & 0x1F];
            VAR20 >>= 5;
            VAR22 = VAR21 + VAR34[VAR20 & 0x1F];
            VAR20 >>= 5;
            VAR23 = VAR22 + VAR34[VAR20 & 0x1F];
            VAR20 >>= 6;
            VAR24 = VAR23 + VAR34[VAR20 & 0x1F];
            VAR20 >>= 5;
            if (!VAR18)
                VAR25 = (VAR20 & 0x1F) << 2;
            else
                VAR25 += VAR34[VAR20 & 0x1F];
            VAR20 >>= 5;
            if (!VAR18)
                VAR26 = (VAR20 & 0x1F) << 2;
            else
                VAR26 += VAR34[VAR20 & 0x1F];
            VAR14[VAR18 + 0] = VAR21 << 1;
            VAR14[VAR18 + 1] = VAR22 << 1;
            VAR14[VAR18 + 2] = VAR23 << 1;
            VAR14[VAR18 + 3] = VAR24 << 1;
            VAR15[VAR18 >> 2] = VAR25 << 1;
            VAR16[VAR18 >> 2] = VAR26 << 1;
        }
        VAR6 += VAR2->VAR32 + 4;
        VAR14 += VAR9->VAR13.VAR35[0];
        VAR15 += VAR9->VAR13.VAR35[1];
        VAR16 += VAR9->VAR13.VAR35[2];
    }
    *VAR4 = sizeof(VAR11);
    *(VAR11 *)VAR3 = VAR9->VAR13;
    return VAR7;
}