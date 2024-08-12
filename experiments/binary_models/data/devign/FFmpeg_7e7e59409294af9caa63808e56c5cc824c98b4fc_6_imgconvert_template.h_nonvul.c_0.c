static void FUN1(VAR1 *VAR2, VAR1 *VAR3, int VAR4, int VAR5)
{
    int VAR6, VAR7, VAR8;
    int VAR9, VAR10, VAR11, VAR12, VAR13, VAR14, VAR15;
    VAR16 *VAR17, *VAR18, *VAR19;
    const VAR16 *VAR20;
    VAR17 = VAR2->VAR21[0];
    VAR18 = VAR2->VAR21[1];
    VAR19 = VAR2->VAR21[2];
    VAR8 = (VAR4 + 1) >> 1;
    VAR6 = VAR2->VAR22[0];
    VAR7 = VAR3->VAR22[0];
    VAR20 = VAR3->VAR21[0];
    for (; VAR5 >= 2; VAR5 -= 2)
    {
        for (VAR15 = VAR4; VAR15 >= 2; VAR15 -= 2)
        {
            FUN2(VAR9, VAR10, VAR11, VAR20);
            VAR12 = VAR9;
            VAR13 = VAR10;
            VAR14 = VAR11;
            VAR17[0] = FUN3(VAR9, VAR10, VAR11);
            FUN2(VAR9, VAR10, VAR11, VAR20 + VAR23);
            VAR12 += VAR9;
            VAR13 += VAR10;
            VAR14 += VAR11;
            VAR17[1] = FUN3(VAR9, VAR10, VAR11);
            VAR20 += VAR7;
            VAR17 += VAR6;
            FUN2(VAR9, VAR10, VAR11, VAR20);
            VAR12 += VAR9;
            VAR13 += VAR10;
            VAR14 += VAR11;
            VAR17[0] = FUN3(VAR9, VAR10, VAR11);
            FUN2(VAR9, VAR10, VAR11, VAR20 + VAR23);
            VAR12 += VAR9;
            VAR13 += VAR10;
            VAR14 += VAR11;
            VAR17[1] = FUN3(VAR9, VAR10, VAR11);
            VAR18[0] = FUN4(VAR12, VAR13, VAR14, 2);
            VAR19[0] = FUN5(VAR12, VAR13, VAR14, 2);
            VAR18++;
            VAR19++;
            VAR20 += -VAR7 + 2 * VAR23;
            VAR17 += -VAR6 + 2;
        }
        if (VAR15)
        {
            FUN2(VAR9, VAR10, VAR11, VAR20);
            VAR12 = VAR9;
            VAR13 = VAR10;
            VAR14 = VAR11;
            VAR17[0] = FUN3(VAR9, VAR10, VAR11);
            VAR20 += VAR7;
            VAR17 += VAR6;
            FUN2(VAR9, VAR10, VAR11, VAR20);
            VAR12 += VAR9;
            VAR13 += VAR10;
            VAR14 += VAR11;
            VAR17[0] = FUN3(VAR9, VAR10, VAR11);
            VAR18[0] = FUN4(VAR12, VAR13, VAR14, 1);
            VAR19[0] = FUN5(VAR12, VAR13, VAR14, 1);
            VAR18++;
            VAR19++;
            VAR20 += -VAR7 + VAR23;
            VAR17 += -VAR6 + 1;
        }
        VAR20 += VAR7 + (VAR7 - VAR4 * VAR23);
        VAR17 += VAR6 + (VAR6 - VAR4);
        VAR18 += VAR2->VAR22[1] - VAR8;
        VAR19 += VAR2->VAR22[2] - VAR8;
    }
    if (VAR5)
    {
        for (VAR15 = VAR4; VAR15 >= 2; VAR15 -= 2)
        {
            FUN2(VAR9, VAR10, VAR11, VAR20);
            VAR12 = VAR9;
            VAR13 = VAR10;
            VAR14 = VAR11;
            VAR17[0] = FUN3(VAR9, VAR10, VAR11);
            FUN2(VAR9, VAR10, VAR11, VAR20 + VAR23);
            VAR12 += VAR9;
            VAR13 += VAR10;
            VAR14 += VAR11;
            VAR17[1] = FUN3(VAR9, VAR10, VAR11);
            VAR18[0] = FUN4(VAR12, VAR13, VAR14, 1);
            VAR19[0] = FUN5(VAR12, VAR13, VAR14, 1);
            VAR18++;
            VAR19++;
            VAR20 += 2 * VAR23;
            VAR17 += 2;
        }
        if (VAR15)
        {
            FUN2(VAR9, VAR10, VAR11, VAR20);
            VAR17[0] = FUN3(VAR9, VAR10, VAR11);
            VAR18[0] = FUN4(VAR9, VAR10, VAR11, 0);
            VAR19[0] = FUN5(VAR9, VAR10, VAR11, 0);
        }
    }
}