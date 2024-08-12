static void *FUN1(void)
{
    void *VAR1;
    VAR2 *VAR3;
    size_t VAR4;
    VAR5 *VAR6;
    int VAR7, VAR8;
    FUN2(0x400, 1, 2, VAR9, NULL);
    FUN2(0x401, 1, 2, VAR9, NULL);
    FUN2(0x402, 1, 1, VAR9, NULL);
    FUN2(0x403, 1, 1, VAR9, NULL);
    FUN2(0x8900, 1, 1, VAR9, NULL);
    FUN2(0x501, 1, 1, VAR9, NULL);
    FUN2(0x501, 1, 2, VAR9, NULL);
    FUN2(0x502, 1, 2, VAR9, NULL);
    FUN2(0x500, 1, 1, VAR9, NULL);
    FUN2(0x503, 1, 1, VAR9, NULL);
    VAR1 = FUN3(VAR10, VAR10 + 1, 0, 0);
    FUN4(VAR1, VAR11, 1);
    FUN5(VAR1, VAR12, (VAR5)VAR13);
    FUN6(VAR1, VAR14, (VAR2 *)VAR15, VAR16);
    FUN4(VAR1, VAR17, FUN7());
    VAR3 = FUN8(&VAR4);
    if (VAR3)
        FUN6(VAR1, VAR18, VAR3, VAR4);
    FUN6(VAR1, VAR19, (VAR2 *)&VAR20, sizeof(struct VAR20));
    FUN6(VAR1, VAR21, (VAR2 *)&VAR22, sizeof(struct VAR23));
    VAR6 = FUN9((1 + VAR24 + VAR25) * 8);
    VAR6[0] = FUN10(VAR25);
    for (VAR7 = 0; VAR7 < VAR24; VAR7++)
    {
        for (VAR8 = 0; VAR8 < VAR25; VAR8++)
        {
            if (VAR26[VAR8] & (1 << VAR7))
            {
                VAR6[VAR7 + 1] = FUN10(VAR8);
                break;
            }
        }
    }
    for (VAR7 = 0; VAR7 < VAR25; VAR7++)
    {
        VAR6[VAR24 + 1 + VAR7] = FUN10(VAR27[VAR7]);
    }
    FUN6(VAR1, VAR28, (VAR2 *)VAR6, (1 + VAR24 + VAR25) * 8);
    return VAR1;
}