static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6)
{
    Node VAR7[512];
    uint32_t VAR8[256];
    int16_t VAR9[256];
    uint8_t VAR10[256];
    int VAR11, VAR12, VAR13, VAR14 = 0;
    FUN2(VAR4);
    for (VAR12 = 0; VAR12 < 256; VAR12++)
    {
        VAR7[VAR12].VAR15 = VAR6[VAR12];
        VAR7[VAR12].VAR16 = VAR12;
        VAR7[VAR12].VAR17 = -2;
        VAR7[VAR12].VAR18 = VAR12;
        VAR7[VAR12].VAR19 = VAR12;
    }
    VAR11 = 256;
    VAR13 = 0;
    do
    {
        for (VAR12 = 0;; VAR12++)
        {
            int VAR20 = VAR13;
            int VAR21 = VAR11;
            int VAR22 = VAR11;
            int VAR23, VAR24;
            VAR7[VAR11].VAR15 = -1;
            do
            {
                int VAR25 = VAR7[VAR20].VAR15;
                if (VAR25 && (VAR25 < VAR7[VAR21].VAR15))
                {
                    if (VAR25 >= VAR7[VAR22].VAR15)
                    {
                        VAR21 = VAR20;
                    }
                    else
                    {
                        VAR21 = VAR22;
                        VAR22 = VAR20;
                    }
                }
                VAR20 += 1;
            } while (VAR20 != VAR11);
            if (VAR21 == VAR11)
                break;
            VAR23 = VAR7[VAR22].VAR15;
            VAR24 = VAR7[VAR21].VAR15;
            VAR7[VAR22].VAR15 = 0;
            VAR7[VAR21].VAR15 = 0;
            VAR7[VAR11].VAR15 = VAR23 + VAR24;
            VAR7[VAR11].VAR16 = -1;
            VAR7[VAR11].VAR17 = VAR11;
            VAR7[VAR11].VAR18 = VAR21;
            VAR7[VAR11].VAR19 = VAR22;
            VAR11++;
        }
        VAR13++;
    } while (VAR11 - 256 == VAR13);
    FUN3(VAR8, VAR9, VAR10, VAR7, VAR11 - 1, 0, 0, &VAR14);
    return FUN4(VAR4, 10, VAR14, VAR9, 2, 2, VAR8, 4, 4, VAR10, 1, 1, 0);
}