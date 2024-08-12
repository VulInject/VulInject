void FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR3 *VAR5, int VAR6, VAR3 *VAR7, int VAR8)
{
    int VAR9;
    if (VAR8)
    {
        while (VAR6 > 0)
        {
            FUN2(VAR2, VAR4, VAR5, VAR8);
            if (VAR7)
            {
                for (VAR9 = 0; VAR9 < 8; VAR9++)
                    VAR4[VAR9] = VAR4[VAR9] ^ VAR7[VAR9];
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
                for (VAR9 = 0; VAR9 < 8; VAR9++)
                    VAR4[VAR9] = VAR5[VAR9] ^ VAR7[VAR9];
                FUN2(VAR2, VAR4, VAR4, VAR8);
                memcpy(VAR7, VAR4, 8);
            }
            else
            {
                FUN2(VAR2, VAR4, VAR5, VAR8);
            }
            VAR5 += 8;
            VAR4 += 8;
            VAR6 -= 8;
        }
    }
}