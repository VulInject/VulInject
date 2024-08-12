static int FUN1(const unsigned char *VAR1, unsigned char *VAR2, int VAR3, int VAR4, int VAR5)
{
    unsigned char *VAR6;
    int VAR7, VAR8, VAR9;
    unsigned char *VAR10 = VAR2 + VAR5;
    GetByteContext VAR11;
    FUN2(&VAR11, VAR1, VAR4);
    VAR6 = VAR2;
    if (VAR3 & 1)
    {
        if (FUN3(&VAR11) < 1)
            return 0;
        *VAR6++ = FUN4(&VAR11);
    }
    VAR3 >>= 1;
    VAR7 = 0;
    do
    {
        if (FUN3(&VAR11) < 1)
            break;
        VAR9 = FUN4(&VAR11);
        if (VAR9 & 0x80)
        {
            VAR9 = (VAR9 & 0x7F) * 2;
            if (VAR10 - VAR6 < VAR9 || FUN3(&VAR11) < VAR9)
                return FUN5(&VAR11);
            FUN6(&VAR11, VAR6, VAR9);
            VAR6 += VAR9;
        }
        else
        {
            int VAR12[2];
            if (VAR10 - VAR6 < 2 * VAR9 || FUN3(&VAR11) < 2)
                return FUN5(&VAR11);
            VAR12[0] = FUN4(&VAR11);
            VAR12[1] = FUN4(&VAR11);
            for (VAR8 = 0; VAR8 < VAR9; VAR8++)
            {
                *VAR6++ = VAR12[0];
                *VAR6++ = VAR12[1];
            }
        }
        VAR7 += VAR9;
    } while (VAR7 < VAR3);
    return FUN5(&VAR11);
}