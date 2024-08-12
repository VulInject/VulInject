static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    VAR10 *VAR11 = VAR3;
    int VAR12;
    VAR12 = VAR13.FUN2(VAR2, VAR3, VAR4, VAR6);
    if (*VAR4)
    {
        VAR14 *VAR15 = VAR11->VAR16[0];
        VAR17 *VAR18 = FUN3(VAR15);
        CVPixelBufferRef VAR19 = (VAR20)VAR11->VAR3[3];
        FUN4(VAR19, 0);
        VAR18->VAR19 = VAR19;
        VAR11->VAR21 = VAR8->VAR22;
        if (FUN5(VAR19))
        {
            int VAR23, VAR24 = FUN6(VAR19);
            FUN7(VAR24 < 4);
            for (VAR23 = 0; VAR23 < VAR24; VAR23++)
            {
                VAR11->VAR3[VAR23] = FUN8(VAR19, VAR23);
                VAR11->VAR25[VAR23] = FUN9(VAR19, VAR23);
            }
        }
        else
        {
            VAR11->VAR3[0] = FUN10(VAR19);
            VAR11->VAR25[0] = FUN11(VAR19);
        }
    }
    VAR2->VAR22 = VAR8->VAR22;
    return VAR12;