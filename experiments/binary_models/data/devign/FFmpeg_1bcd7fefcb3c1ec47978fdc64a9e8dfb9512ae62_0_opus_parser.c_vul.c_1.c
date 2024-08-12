static const VAR1 *FUN1(const VAR1 *VAR2, int *VAR3, int VAR4)
{
    const VAR1 *VAR5 = VAR2 + 1;
    int VAR6, VAR7, VAR8, VAR9;
    uint8_t VAR10;
    GetByteContext VAR11;
    FUN2(&VAR11, VAR5, VAR4);
    VAR10 = FUN3(&VAR11);
    VAR6 = (VAR10 >> 4) & 1;
    VAR7 = (VAR10 >> 3) & 1;
    VAR8 = (VAR10 >> 2) & 1;
    *VAR3 = 0;
    while (FUN4(&VAR11) == 0xff)
        *VAR3 += FUN3(&VAR11);
    *VAR3 += FUN3(&VAR11);
    if (VAR6)
        FUN5(&VAR11, 2);
    if (VAR7)
        FUN5(&VAR11, 2);
    if (VAR8)
    {
        VAR9 = FUN3(&VAR11);
        FUN5(&VAR11, VAR9);
    }
    return VAR5 + FUN6(&VAR11);
}