void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    FUN2(VAR5, VAR2->VAR6 >= 6);
    int VAR7 = VAR2->VAR6;
    int VAR8, VAR9, VAR10;
    int VAR11, VAR12;
    register VAR3 *VAR13, *VAR14;
    VAR3 *VAR15 = VAR2->VAR15;
    int VAR16;
    FFTSample VAR17, VAR18;
    FUN3(VAR5, VAR2->VAR6 >= 6);
    VAR9 = 1 << VAR7;
    VAR13 = &VAR4[0];
    VAR8 = (VAR9 >> 1);
    do
    {
        FUN4(VAR13[0].VAR19, VAR13[0].VAR20, VAR13[1].VAR19, VAR13[1].VAR20, VAR13[0].VAR19, VAR13[0].VAR20, VAR13[1].VAR19, VAR13[1].VAR20);
        VAR13 += 2;
    } while (--VAR8 != 0);
    VAR13 = &VAR4[0];
    VAR8 = VAR9 >> 2;
    if (VAR2->VAR21)
    {
        do
        {
            FUN4(VAR13[0].VAR19, VAR13[0].VAR20, VAR13[2].VAR19, VAR13[2].VAR20, VAR13[0].VAR19, VAR13[0].VAR20, VAR13[2].VAR19, VAR13[2].VAR20);
            FUN4(VAR13[1].VAR19, VAR13[1].VAR20, VAR13[3].VAR19, VAR13[3].VAR20, VAR13[1].VAR19, VAR13[1].VAR20, -VAR13[3].VAR20, VAR13[3].VAR19);
            VAR13 += 4;
        } while (--VAR8 != 0);
    }
    else
    {
        do
        {
            FUN4(VAR13[0].VAR19, VAR13[0].VAR20, VAR13[2].VAR19, VAR13[2].VAR20, VAR13[0].VAR19, VAR13[0].VAR20, VAR13[2].VAR19, VAR13[2].VAR20);
            FUN4(VAR13[1].VAR19, VAR13[1].VAR20, VAR13[3].VAR19, VAR13[3].VAR20, VAR13[1].VAR19, VAR13[1].VAR20, VAR13[3].VAR20, -VAR13[3].VAR19);
            VAR13 += 4;
        } while (--VAR8 != 0);
    }
    VAR11 = VAR9 >> 3;
    VAR12 = 1 << 2;
    VAR10 = VAR9 >> 1;
    do
    {
        VAR13 = VAR4;
        VAR14 = VAR4 + VAR12;
        for (VAR8 = 0; VAR8 < VAR11; ++VAR8)
        {
            FUN4(VAR13->VAR19, VAR13->VAR20, VAR14->VAR19, VAR14->VAR20, VAR13->VAR19, VAR13->VAR20, VAR14->VAR19, VAR14->VAR20);
            VAR13++;
            VAR14++;
            for (VAR16 = VAR11; VAR16 < VAR10; VAR16 += VAR11)
            {
                FUN5(VAR17, VAR18, VAR15[VAR16].VAR19, VAR15[VAR16].VAR20, VAR14->VAR19, VAR14->VAR20);
                FUN4(VAR13->VAR19, VAR13->VAR20, VAR14->VAR19, VAR14->VAR20, VAR13->VAR19, VAR13->VAR20, VAR17, VAR18);
                VAR13++;
                VAR14++;
            }
            VAR13 += VAR12;
            VAR14 += VAR12;
        }
        VAR11 = VAR11 >> 1;
        VAR12 = VAR12 << 1;
    } while (VAR11 != 0);
    FUN6(VAR5, VAR2->VAR6 >= 6);
    register const vector float VAR22 = (const vector float)(0.);
    register const vector float VAR22 = (const vector float){0., 0., 0., 0.};
    int VAR7 = VAR2->VAR6;
    int VAR8, VAR9, VAR10;
    int VAR11, VAR12;
    register VAR3 *VAR13, *VAR14;
    VAR3 *VAR23, *VAR24;
    int VAR25;
    FUN3(VAR5, VAR2->VAR6 >= 6);
    VAR9 = 1 << VAR7;
    {
        vector float *VAR26, VAR27, VAR28, VAR29, VAR30, VAR31;
        VAR26 = (vector float *)&VAR4[0];
        VAR30 = FUN7(VAR13, VAR13, VAR32, VAR32);
        if (VAR2->VAR21)
        {
            VAR31 = FUN7(VAR13, VAR13, VAR32, VAR13);
        }
        else
        {
            VAR31 = FUN7(VAR13, VAR13, VAR13, VAR32);
        }
        VAR8 = (VAR9 >> 2);
        do
        {
            VAR27 = FUN8(0, VAR26);
            VAR29 = FUN8(sizeof(vector float), VAR26);
            VAR28 = FUN9(VAR27, VAR27, FUN10(1, 0, 3, 2));
            VAR27 = FUN11(VAR27, VAR30, VAR28);
            VAR28 = FUN9(VAR29, VAR29, FUN10(1, 0, 3, 2));
            VAR28 = FUN11(VAR29, VAR30, VAR28);
            VAR28 = FUN9(VAR28, VAR28, FUN10(2, 3, 1, 0));
            FUN12(FUN11(VAR28, VAR31, VAR27), 0, VAR26);
            FUN12(FUN13(VAR28, VAR31, VAR27), sizeof(vector float), VAR26);
            VAR26 += 2;
        } while (--VAR8 != 0);
    }
    VAR11 = VAR9 >> 3;
    VAR12 = 1 << 2;
    VAR10 = VAR9 >> 1;
    VAR24 = VAR2->VAR33;
    do
    {
        VAR13 = VAR4;
        VAR14 = VAR4 + VAR12;
        VAR8 = VAR11;
        do
        {
            VAR23 = VAR24;
            VAR25 = VAR12 >> 1;
            do
            {
                vector float VAR27, VAR28, VAR34, VAR35;
                VAR27 = FUN8(0, (float *)VAR13);
                VAR28 = FUN8(0, (float *)VAR14);
                VAR34 = FUN8(0, (float *)VAR23);
                VAR35 = FUN11(VAR34, FUN9(VAR28, VAR28, FUN10(2, 2, 0, 0)), VAR22);
                VAR34 = FUN8(sizeof(vector float), (float *)VAR23);
                VAR28 = FUN11(VAR34, FUN9(VAR28, VAR28, FUN10(3, 3, 1, 1)), VAR35);
                FUN12(FUN14(VAR27, VAR28), 0, (float *)VAR13);
                FUN12(FUN15(VAR27, VAR28), 0, (float *)VAR14);
                VAR13 += 2;
                VAR14 += 2;
                VAR23 += 4;
            } while (--VAR25);
            VAR13 += VAR12;
            VAR14 += VAR12;
        } while (--VAR8);
        VAR24 += VAR12 * 2;
        VAR11 = VAR11 >> 1;
        VAR12 = VAR12 << 1;
    } while (VAR11 != 0);
    FUN6(VAR5, VAR2->VAR6 >= 6);
}