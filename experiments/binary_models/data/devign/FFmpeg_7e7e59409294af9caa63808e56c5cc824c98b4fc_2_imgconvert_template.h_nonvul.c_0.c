static void FUN1(VAR1 *VAR2, VAR1 *VAR3, int VAR4, int VAR5)
{
    VAR6 *VAR7, *VAR8, *VAR9, *VAR10, *VAR11;
    int VAR12, VAR13, VAR14, VAR15, VAR16, VAR17, VAR18;
    VAR6 *VAR19 = VAR20 + VAR21;
    unsigned int VAR22, VAR23, VAR24;
    VAR10 = VAR2->VAR25[0];
    VAR7 = VAR3->VAR25[0];
    VAR8 = VAR3->VAR25[1];
    VAR9 = VAR3->VAR25[2];
    for (; VAR5 > 0; VAR5--)
    {
        VAR11 = VAR10;
        for (VAR12 = VAR4; VAR12 > 0; VAR12--)
        {
            FUN2(VAR8[0], VAR9[0]);
            FUN3(VAR22, VAR23, VAR24, VAR7[0]);
            FUN4(VAR11, VAR22, VAR23, VAR24);
            VAR11 += VAR26;
            VAR7++;
            VAR8++;
            VAR9++;
        }
        VAR10 += VAR2->VAR27[0];
        VAR7 += VAR3->VAR27[0] - VAR4;
        VAR8 += VAR3->VAR27[1] - VAR4;
        VAR9 += VAR3->VAR27[2] - VAR4;
    }
}