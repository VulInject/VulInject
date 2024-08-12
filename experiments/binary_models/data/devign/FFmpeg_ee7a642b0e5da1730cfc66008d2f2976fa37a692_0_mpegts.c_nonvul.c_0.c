static int FUN1(const VAR1 *VAR2, int VAR3, int VAR4, int *VAR5, int VAR6)
{
    int VAR7[VAR8];
    int VAR9 = 0;
    int VAR10;
    int VAR11 = 0;
    memset(VAR7, 0, VAR4 * sizeof(*VAR7));
    for (VAR10 = 0; VAR10 < VAR3 - 3; VAR10++)
    {
        if (VAR2[VAR10] == 0x47 && (!VAR6 || (VAR2[VAR10 + 3] & 0x30)))
        {
            int VAR12 = VAR10 % VAR4;
            VAR7[VAR12]++;
            VAR9++;
            if (VAR7[VAR12] > VAR11)
            {
                VAR11 = VAR7[VAR12];
                if (VAR5)
                    *VAR5 = VAR12;
            }
        }
    }
    return VAR11 - FUN2(VAR9 - 10 * VAR11, 0) / 10;
}