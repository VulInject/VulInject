static int FUN1(VAR1 *VAR2, unsigned char *VAR3, int VAR4, void *VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    const short *VAR9 = VAR5;
    int VAR10, VAR11;
    VAR7->VAR12 = VAR7->VAR13;
    VAR7->VAR14 = 1 << VAR7->VAR12;
    FUN2(VAR2, VAR9, VAR2->VAR15);
    if (VAR7->VAR16)
    {
        float VAR17, VAR18;
        int VAR10;
        for (VAR10 = 0; VAR10 < VAR7->VAR14; VAR10++)
        {
            VAR17 = VAR7->VAR19[0][VAR10] * 0.5;
            VAR18 = VAR7->VAR19[1][VAR10] * 0.5;
            VAR7->VAR19[0][VAR10] = VAR17 + VAR18;
            VAR7->VAR19[1][VAR10] = VAR17 - VAR18;
            VAR11 = 128;
            for (VAR10 = 64; VAR10; VAR10 >>= 1)
            {
                int VAR20 = FUN3(VAR7, VAR7->VAR19, VAR3, VAR4, VAR11 - VAR10);
                if (VAR20 < 0)
                    VAR11 -= VAR10;
                VAR11 = 90;
                VAR21 = FUN3(VAR7, VAR7->VAR19, VAR3, VAR4, VAR11);
                for (VAR10 = 32; VAR10; VAR10 >>= 1)
                {
                    int VAR22 = FUN3(VAR7, VAR7->VAR19, VAR3, VAR4, VAR11 - VAR10);
                    int VAR23 = FUN3(VAR7, VAR7->VAR19, VAR3, VAR4, VAR11 + VAR10);
                    FUN4(NULL, VAR24, "", VAR22, VAR21, VAR23, VAR11);
                    if (VAR22 < FUN5(VAR21, VAR23))
                    {
                        VAR21 = VAR22;
                        VAR11 -= VAR10;
                    }
                    else if (VAR23 < VAR21)
                    {
                        VAR21 = VAR23;
                        VAR11 += VAR10;
                        FUN3(VAR7, VAR7->VAR19, VAR3, VAR4, VAR11);
                        assert((FUN6(&VAR7->VAR25) & 7) == 0);
                        VAR10 = VAR7->VAR26 - (FUN6(&VAR7->VAR25) + 7) / 8;
                        assert(VAR10 >= 0);
                        while (VAR10--)
                            FUN7(&VAR7->VAR25, 8, '');
                        FUN8(&VAR7->VAR25);
                        return FUN9(&VAR7->VAR25) - VAR7->VAR25.VAR3