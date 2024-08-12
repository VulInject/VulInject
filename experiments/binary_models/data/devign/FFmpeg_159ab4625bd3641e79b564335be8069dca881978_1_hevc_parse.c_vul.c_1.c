int FUN1(const VAR1 *VAR2, int VAR3, VAR4 *VAR5, int *VAR6, int *VAR7, int VAR8, void *VAR9)
{
    int VAR10 = 0;
    GetByteContext VAR11;
    FUN2(&VAR11, VAR2, VAR3);
    if (VAR3 > 3 && (VAR2[0] || VAR2[1] || VAR2[2] > 1))
    {
        int VAR12, VAR13, VAR14, VAR15;
        *VAR6 = 1;
        FUN3(&VAR11, 21);
        VAR15 = (FUN4(&VAR11) & 3) + 1;
        VAR14 = FUN4(&VAR11);
        *VAR7 = 2;
        for (VAR12 = 0; VAR12 < VAR14; VAR12++)
        {
            int VAR16 = FUN4(&VAR11) & 0x3f;
            int VAR17 = FUN5(&VAR11);
            for (VAR13 = 0; VAR13 < VAR17; VAR13++)
            {
                int VAR18 = FUN6(&VAR11) + 2;
                if (FUN7(&VAR11) < VAR18)
                {
                    FUN8(VAR9, VAR19, "");
                    return VAR20;
                }
                VAR10 = FUN9(VAR11.VAR21, VAR18, VAR5, *VAR6, *VAR7, VAR9);
                if (VAR10 < 0)
                {
                    FUN8(VAR9, VAR19, "", VAR16, VAR12);
                    return VAR10;
                }
                FUN3(&VAR11, VAR18);
            }
        }
        *VAR7 = VAR15;
    }
    else
    {
        *VAR6 = 0;
        VAR10 = FUN9(VAR2, VAR3, VAR5, *VAR6, *VAR7, VAR9);
        if (VAR10 < 0)
            return VAR10;
    }
    return VAR10;
}