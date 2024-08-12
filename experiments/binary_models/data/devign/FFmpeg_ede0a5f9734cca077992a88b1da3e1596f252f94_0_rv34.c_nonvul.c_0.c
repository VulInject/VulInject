static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR4;
    int VAR5 = 0, VAR6, VAR7;
    int VAR8 = VAR4->VAR9 * 2 + VAR4->VAR10 * 2 * VAR4->VAR11;
    FUN2(*VAR12)[2] = VAR4->VAR13->VAR12[0][VAR8];
    for (VAR7 = 0; VAR7 < 16; VAR7 += 8)
    {
        for (VAR6 = 0; VAR6 < 2; VAR6++)
        {
            if (FUN3(VAR12 + VAR6, 1))
                VAR5 |= 0x11 << (VAR7 + VAR6 * 2);
            if (FUN3(VAR12 + VAR6, VAR4->VAR11))
                VAR5 |= 0x03 << (VAR7 + VAR6 * 2);
        }
        VAR12 += VAR4->VAR11;
    }
    return VAR5;
}