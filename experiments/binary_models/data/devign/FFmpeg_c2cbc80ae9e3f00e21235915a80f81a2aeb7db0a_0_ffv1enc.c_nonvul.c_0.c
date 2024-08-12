static int FUN1(VAR1 *VAR2, uint8_t VAR3[256])
{
    int VAR4, VAR5, VAR6, VAR7 = 0;
    do
    {
        VAR6 = 0;
        for (VAR4 = 12; VAR4 < 244; VAR4++)
        {
            for (VAR5 = VAR4 + 1; VAR5 < 245 && VAR5 < VAR4 + 4; VAR5++)
            {
                VAR2->VAR8[VAR9][0] * -FUN2((256 - (new)) / 256.0) + VAR2->VAR8[VAR9][1] * -FUN2((new) / 256.0) FUN3(VAR9, new) + FUN3(256 - (VAR9), 256 - (new)) double VAR10 = FUN4(VAR4, VAR4) + FUN4(VAR5, VAR5);
                double VAR11 = FUN4(VAR4, VAR5) + FUN4(VAR5, VAR4);
                if (VAR10 - VAR11 > VAR10 * (1e-14) && VAR4 != 128 && VAR5 != 128)
                {
                    int VAR12;
                    FUN5(int, VAR3[VAR4], VAR3[VAR5]);
                    FUN5(int, VAR2->VAR8[VAR4][0], VAR2->VAR8[VAR5][0]);
                    FUN5(int, VAR2->VAR8[VAR4][1], VAR2->VAR8[VAR5][1]);
                    if (VAR4 != 256 - VAR5)
                    {
                        FUN5(int, VAR3[256 - VAR4], VAR3[256 - VAR5]);
                        FUN5(int, VAR2->VAR8[256 - VAR4][0], VAR2->VAR8[256 - VAR5][0]);
                        FUN5(int, VAR2->VAR8[256 - VAR4][1], VAR2->VAR8[256 - VAR5][1]);
                    }
                    for (VAR12 = 1; VAR12 < 256; VAR12++)
                    {
                        if (VAR3[VAR12] == VAR4)
                            VAR3[VAR12] = VAR5;
                        else if (VAR3[VAR12] == VAR5)
                            VAR3[VAR12] = VAR4;
                        if (VAR4 != 256 - VAR5)
                        {
                            if (VAR3[256 - VAR12] == 256 - VAR4)
                                VAR3[256 - VAR12] = 256 - VAR5;
                            else if (VAR3[256 - VAR12] == 256 - VAR5)
                                VAR3[256 - VAR12] = 256 - VAR4;
                        }
                    }
                    VAR7 = VAR6 = 1;
                }
            }
        }
    } while (VAR6);
    return VAR7;
}