static void FUN1(unsigned char *VAR1, const short *VAR2, VAR3 *VAR4)
{
    int VAR5;
    int VAR6;
    int VAR7, VAR8, VAR9, VAR10;
    int VAR11 = 0;
    int VAR12 = 0;
    int VAR13[32];
    VAR8 = VAR4->VAR8;
    VAR9 = VAR4->VAR9;
    for (VAR6 = 0; VAR6 < 32; VAR6++)
    {
        VAR7 = VAR2[VAR6];
        VAR10 = ((VAR7 << 14) - VAR14 * VAR8 + VAR15 * VAR9) / VAR16;
        VAR13[VAR6] = VAR10;
        if (VAR11 < VAR10)
            VAR11 = VAR10;
        if (VAR12 > VAR10)
            VAR12 = VAR10;
        VAR9 = VAR8;
        VAR8 = VAR7;
    }
    VAR4->VAR8 = VAR8;
    VAR4->VAR9 = VAR9;
    if (VAR11 == 0 && VAR12 == 0)
    {
        memset(VAR1, 0, 18);
        return;
    }
    if (VAR11 / 7 > -VAR12 / 8)
        VAR5 = VAR11 / 7;
    else
        VAR5 = -VAR12 / 8;
    if (VAR5 == 0)
        VAR5 = 1;
    FUN2(VAR1, VAR5);
    for (VAR6 = 0; VAR6 < 16; VAR6++)
    {
        VAR1[VAR6 + 2] = ((VAR13[VAR6 * 2] / VAR5) << 4) | ((VAR13[VAR6 * 2 + 1] / VAR5) & 0xf);
    }
}