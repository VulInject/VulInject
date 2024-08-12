static void FUN1(VAR1 *VAR2, VAR1 *VAR3, int VAR4, int VAR5)
{
    int VAR6, VAR7, VAR8;
    int VAR9, VAR10, VAR11;
    VAR12 *VAR13, *VAR14, *VAR15;
    const VAR12 *VAR16;
    VAR13 = VAR2->VAR17[0];
    VAR14 = VAR2->VAR17[1];
    VAR15 = VAR2->VAR17[2];
    VAR6 = VAR3->VAR18[0] - VAR4 * VAR19;
    VAR16 = VAR3->VAR17[0];
    for (VAR8 = 0; VAR8 < VAR5; VAR8++)
    {
        for (VAR7 = 0; VAR7 < VAR4; VAR7++)
        {
            FUN2(VAR9, VAR10, VAR11, VAR16);
            VAR13[0] = FUN3(VAR9, VAR10, VAR11);
            VAR14[0] = FUN4(VAR9, VAR10, VAR11, 0);
            VAR15[0] = FUN5(VAR9, VAR10, VAR11, 0);
            VAR16 += VAR19;
            VAR14++;
            VAR15++;
            VAR13++;
        }
        VAR16 += VAR6;
        VAR13 += VAR2->VAR18[0] - VAR4;
        VAR14 += VAR2->VAR18[1] - VAR4;
        VAR15 += VAR2->VAR18[2] - VAR4;
    }
}