static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, VAR6 *VAR7)
{
    int VAR8, VAR9;
    int VAR10;
    float *VAR11;
    FUN2(VAR4, VAR2->VAR12, VAR5);
    FUN3(&VAR2->VAR13, VAR2->VAR12, VAR5 * 8);
    FUN4(&VAR2->VAR13, &VAR2->VAR14);
    memcpy(&VAR2->VAR15, &VAR2->VAR14, sizeof(VAR16));
    if (VAR2->VAR17 == 2 && VAR2->VAR18 == 1)
    {
        FUN5(VAR2, VAR2->VAR19[0], VAR2->VAR19[2]);
        VAR11 = VAR2->VAR19[1];
        VAR2->VAR19[1] = VAR2->VAR19[0];
        VAR2->VAR19[0] = VAR11;
        VAR11 = VAR2->VAR19[3];
        VAR2->VAR19[3] = VAR2->VAR19[2];
        VAR2->VAR19[2] = VAR11;
        VAR2->VAR20 = &VAR2->VAR21;
        VAR2->VAR22 = &VAR2->VAR23;
        for (VAR8 = 0; VAR8 < VAR2->VAR17; VAR8++)
        {
            FUN6(VAR2, VAR2->VAR19[VAR8 * 2], VAR2->VAR24, VAR2->VAR25);
            FUN7(VAR2, VAR2->VAR24, VAR2->VAR20, VAR2->VAR22, VAR2->VAR26[0]);
            VAR11 = VAR2->VAR26[0];
            VAR2->VAR26[0] = VAR2->VAR26[1];
            VAR2->VAR26[1] = VAR11;
            for (VAR9 = 0; VAR9 < VAR2->VAR27; VAR9++)
            {
                VAR10 = FUN8(VAR2->VAR24[VAR9]);
                if (VAR10 < -32768)
                    VAR10 = -32768;
                else if (VAR10 > 32767)
                    VAR10 = 32767;
                VAR7[2 * VAR9 + VAR8] = VAR10;
            }
        }
        memcpy(&VAR2->VAR21, &VAR2->VAR23, sizeof(VAR16));
        memcpy(&VAR2->VAR23, &VAR2->VAR14, sizeof(VAR16));
    }
    else if (VAR2->VAR17 == 2 && VAR2->VAR18 == 0)
    {
        FUN9(VAR2, VAR2->VAR19[0]);
        VAR11 = VAR2->VAR19[0];
        VAR2->VAR19[0] = VAR2->VAR19[1];
        VAR2->VAR19[1] = VAR2->VAR19[2];
        VAR2->VAR19[2] = VAR2->VAR19[3];
        VAR2->VAR19[3] = VAR11;
        VAR2->VAR20 = &VAR2->VAR21;
        VAR2->VAR22 = &VAR2->VAR23;
        FUN6(VAR2, VAR2->VAR19[0], VAR2->VAR24, VAR2->VAR25);
        FUN7(VAR2, VAR2->VAR24, VAR2->VAR20, VAR2->VAR22, VAR2->VAR26[0]);
        VAR11 = VAR2->VAR26[0];
        VAR2->VAR26[0] = VAR2->VAR26[1];
        VAR2->VAR26[1] = VAR11;
        for (VAR9 = 0; VAR9 < VAR2->VAR27; VAR9++)
        {
            VAR10 = FUN8(VAR2->VAR24[VAR9]);
            if (VAR10 < -32768)
                VAR10 = -32768;
            else if (VAR10 > 32767)
                VAR10 = 32767;
            VAR7[2 * VAR9 + 1] = VAR10;
        }
        FUN3(&VAR2->VAR13, VAR2->VAR12, VAR5 * 8 + VAR2->VAR28);
        FUN4(&VAR2->VAR13, &VAR2->VAR14);
        FUN9(VAR2, VAR2->VAR19[0]);
        VAR11 = VAR2->VAR19[0];
        VAR2->VAR19[1] = VAR2->VAR19[2];
        VAR2->VAR19[2] = VAR2->VAR19[3];
        VAR2->VAR19[3] = VAR11;
        VAR2->VAR20 = &VAR2->VAR21;
        VAR2->VAR22 = &VAR2->VAR23;
        FUN6(VAR2, VAR2->VAR19[0], VAR2->VAR24, VAR2->VAR25);
        FUN7(VAR2, VAR2->VAR24, VAR2->VAR20, VAR2->VAR22, VAR2->VAR26[0]);
        VAR11 = VAR2->VAR26[0];
        VAR2->VAR26[0] = VAR2->VAR26[1];
        VAR2->VAR26[1] = VAR11;
        for (VAR9 = 0; VAR9 < VAR2->VAR27; VAR9++)
        {
            VAR10 = FUN8(VAR2->VAR24[VAR9]);
            if (VAR10 < -32768)
                VAR10 = -32768;
            else if (VAR10 > 32767)
                VAR10 = 32767;
            VAR7[2 * VAR9] = VAR10;
        }
        memcpy(&VAR2->VAR21, &VAR2->VAR23, sizeof(VAR16));
        memcpy(&VAR2->VAR23, &VAR2->VAR14, sizeof(VAR16));
    }
    else
    {
        FUN9(VAR2, VAR2->VAR19[0]);
        VAR11 = VAR2->VAR19[1];
        VAR2->VAR19[1] = VAR2->VAR19[0];
        VAR2->VAR19[0] = VAR11;
        VAR2->VAR20 = &VAR2->VAR21;
        VAR2->VAR22 = &VAR2->VAR23;
        FUN6(VAR2, VAR2->VAR19[0], VAR2->VAR24, VAR2->VAR25);
        FUN7(VAR2, VAR2->VAR24, VAR2->VAR20, VAR2->VAR22, VAR2->VAR29);
        for (VAR9 = 0; VAR9 < VAR2->VAR27; VAR9++)
        {
            VAR10 = FUN8(VAR2->VAR24[VAR9]);
            if (VAR10 < -32768)
                VAR10 = -32768;
            else if (VAR10 > 32767)
                VAR10 = 32767;
            VAR7[VAR9] = VAR10;
        }
        memcpy(&VAR2->VAR21, &VAR2->VAR23, sizeof(VAR16));
        memcpy(&VAR2->VAR23, &VAR2->VAR14, sizeof(VAR16));
    }
    return VAR2->VAR27 * sizeof(VAR6);
}