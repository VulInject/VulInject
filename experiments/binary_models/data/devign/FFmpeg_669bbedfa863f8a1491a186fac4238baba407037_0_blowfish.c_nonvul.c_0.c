void FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR3 *VAR5, int VAR6, VAR3 *VAR7, int VAR8)
{
    uint32_t VAR9, VAR10;
    int VAR11;
    if (VAR8)
    {
        while (VAR6 > 0)
        {
            VAR9 = FUN2(VAR5);
            VAR10 = FUN2(VAR5 + 4);
            FUN3(VAR2, &VAR9, &VAR10, VAR8);
            FUN4(VAR4, VAR9);
            FUN4(VAR4 + 4, VAR10);
            if (VAR7)
            {
                for (VAR11 = 0; VAR11 < 8; VAR11++)
                    VAR4[VAR11] = VAR4[VAR11] ^ VAR7[VAR11];
                memcpy(VAR7, VAR5, 8);
            }
            VAR5 += 8;
            VAR4 += 8;
            VAR6 -= 8;
        }
    }
    else
    {
        while (VAR6 > 0)
        {
            if (VAR7)
            {
                for (VAR11 = 0; VAR11 < 8; VAR11++)
                    VAR4[VAR11] = VAR5[VAR11] ^ VAR7[VAR11];
                VAR9 = FUN2(VAR4);
                VAR10 = FUN2(VAR4 + 4);
            }
            else
            {
                VAR9 = FUN2(VAR5);
                VAR10 = FUN2(VAR5 + 4);
            }
            FUN3(VAR2, &VAR9, &VAR10, VAR8);
            FUN4(VAR4, VAR9);
            FUN4(VAR4 + 4, VAR10);
            if (VAR7)
                memcpy(VAR7, VAR4, 8);
            VAR5 += 8;
            VAR4 += 8;
            VAR6 -= 8;
        }
    }
}