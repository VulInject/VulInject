static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR3;
    VAR9 *VAR10 = VAR2->VAR11;
    int VAR12 = VAR6->VAR13;
    int VAR14, VAR15;
    VAR16 *VAR17;
    float VAR18 = 1.0;
    float VAR19;
    if (VAR6->VAR13)
    {
        int VAR20 = -VAR6->VAR3[0];
        VAR10->VAR21 = 1081109975 * FUN2(VAR20 / 10.0) * 0.75;
        memset(VAR10->VAR22, 0, VAR10->VAR23 * sizeof(*VAR10->VAR22));
        for (VAR15 = 0; VAR15 < FUN3(VAR6->VAR13 - 1, VAR10->VAR23); VAR15++)
        {
            VAR10->VAR22[VAR15] = (VAR6->VAR3[1 + VAR15] - 127) / 128.0;
            if (VAR10->VAR24)
            {
                VAR10->VAR25 = VAR10->VAR25 / 2 + VAR10->VAR21 / 2;
                for (VAR15 = 0; VAR15 < VAR10->VAR23; VAR15++)
                    VAR10->VAR26[VAR15] = 0.6 * VAR10->VAR26[VAR15] + 0.4 * VAR10->VAR22[VAR15];
            }
            else
            {
                VAR10->VAR25 = VAR10->VAR21;
                memcpy(VAR10->VAR26, VAR10->VAR22, VAR10->VAR23 * sizeof(*VAR10->VAR26));
                VAR10->VAR24 = 1;
                FUN4(VAR10->VAR27, VAR10->VAR26, VAR10->VAR23);
                for (VAR15 = 0; VAR15 < VAR10->VAR23; VAR15++)
                    VAR18 *= 1.0 - VAR10->VAR26[VAR15] * VAR10->VAR26[VAR15];
                VAR19 = FUN5(VAR18 * VAR10->VAR25 / 1081109975);
                for (VAR15 = 0; VAR15 < VAR2->VAR28; VAR15++)
                {
                    int VAR29 = (FUN6(&VAR10->VAR30) & 0xffff) - 0x8000;
                    VAR10->VAR31[VAR15] = VAR19 * VAR29;
                    FUN7(VAR10->VAR32 + VAR10->VAR23, VAR10->VAR27, VAR10->VAR31, VAR2->VAR28, VAR10->VAR23);
                    VAR8->VAR33 = VAR2->VAR28;
                    if ((VAR14 = FUN8(VAR2, VAR8, 0)) < 0)
                        return VAR14;
                    VAR17 = (VAR16 *)VAR8->VAR3[0];
                    for (VAR15 = 0; VAR15 < VAR2->VAR28; VAR15++)
                        VAR17[VAR15] = VAR10->VAR32[VAR15 + VAR10->VAR23];
                    memcpy(VAR10->VAR32, VAR10->VAR32 + VAR2->VAR28, VAR10->VAR23 * sizeof(*VAR10->VAR32));
                    *VAR4 = 1;
                    return VAR12