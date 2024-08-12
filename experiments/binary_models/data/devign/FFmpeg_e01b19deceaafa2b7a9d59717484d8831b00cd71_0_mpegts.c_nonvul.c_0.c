static int FUN1(const VAR1 *VAR2, int VAR3, int VAR4, int VAR5)
{
    int VAR6[VAR7];
    int VAR8 = 0;
    int VAR9;
    int VAR10 = 0;
    memset(VAR6, 0, VAR4 * sizeof(*VAR6));
    for (VAR9 = 0; VAR9 < VAR3 - 3; VAR9++)
    {
        if (VAR2[VAR9] == 0x47)
        {
            int VAR11 = FUN2(VAR2 + 1) & 0x1FFF;
            int VAR12 = VAR2[VAR9 + 3] & 0x30;
            if (!VAR5 || VAR11 == 0x1FFF || VAR12)
            {
                int VAR13 = VAR9 % VAR4;
                VAR6[VAR13]++;
                VAR8++;
                if (VAR6[VAR13] > VAR10)
                {
                    VAR10 = VAR6[VAR13];
                }
            }
        }
    }
    return VAR10 - FUN3(VAR8 - 10 * VAR10, 0) / 10;
}