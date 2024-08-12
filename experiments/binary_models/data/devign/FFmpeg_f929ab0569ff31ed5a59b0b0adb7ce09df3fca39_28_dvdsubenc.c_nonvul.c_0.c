static int FUN1(VAR1 *VAR2, int VAR3, const VAR4 *VAR5)
{
    VAR1 *VAR6, *VAR7;
    int VAR8;
    int VAR9[20], VAR10[20];
    int VAR11, VAR12, VAR13, VAR14, VAR15 = VAR5->VAR16;
    unsigned long VAR17;
    unsigned long VAR18[256];
    int VAR19[256];
    if (VAR15 == 0 || !VAR5->VAR15)
        return -1;
    if (VAR15 > 20)
        VAR15 = 20;
    for (VAR11 = 0; VAR11 < 256; ++VAR11)
    {
        VAR18[VAR11] = 0;
        VAR19[VAR11] = 0;
    }
    for (VAR8 = 0; VAR8 < VAR15; VAR8++)
        for (VAR11 = 0; VAR11 < VAR5->VAR15[VAR8]->VAR20 * VAR5->VAR15[VAR8]->VAR5; ++VAR11)
        {
            VAR13 = VAR5->VAR15[VAR8]->VAR21.VAR22[0][VAR11];
            VAR14 = ((VAR23 *)VAR5->VAR15[VAR8]->VAR21.VAR22[1])[VAR13] >> 24;
            VAR18[VAR13] += VAR14;
        }
    for (VAR13 = 3;; --VAR13)
    {
        VAR17 = 0;
        VAR12 = 0;
        for (VAR11 = 0; VAR11 < 256; ++VAR11)
            if (VAR18[VAR11] > VAR17)
            {
                VAR12 = VAR11;
                VAR17 = VAR18[VAR11];
            }
        if (VAR17 == 0)
            break;
        if (VAR13 == 0)
            VAR13 = 3;
        FUN2(NULL, VAR24, "", VAR12, VAR18[VAR12], VAR13);
        VAR19[VAR12] = VAR13;
        VAR18[VAR12] = 0;
    }
    VAR6 = VAR2 + 4;
    for (VAR8 = 0; VAR8 < VAR15; VAR8++)
    {
        VAR9[VAR8] = VAR6 - VAR2;
        if ((VAR6 - VAR2) + VAR5->VAR15[VAR8]->VAR20 * VAR5->VAR15[VAR8]->VAR5 / 2 + 17 * VAR15 + 21 > VAR3)
        {
            FUN2(NULL, VAR25, "");
            return -1;
        }
        FUN3(&VAR6, VAR5->VAR15[VAR8]->VAR21.VAR22[0], VAR5->VAR15[VAR8]->VAR20 * 2, VAR5->VAR15[VAR8]->VAR20, VAR5->VAR15[VAR8]->VAR5 >> 1, VAR19);
        VAR10[VAR8] = VAR6 - VAR2;
        FUN3(&VAR6, VAR5->VAR15[VAR8]->VAR21.VAR22[0] + VAR5->VAR15[VAR8]->VAR20, VAR5->VAR15[VAR8]->VAR20 * 2, VAR5->VAR15[VAR8]->VAR20, VAR5->VAR15[VAR8]->VAR5 >> 1, VAR19);
    }
    VAR7 = VAR2 + 2;
    FUN4(&VAR7, VAR6 - VAR2);
    FUN4(&VAR6, (VAR5->VAR26 * 90) >> 10);
    FUN4(&VAR6, (VAR6 - VAR2) + 8 + 12 * VAR15 + 2);
    *VAR6++ = 0x03;
    *VAR6++ = 0x03;
    *VAR6++ = 0x7f;
    *VAR6++ = 0x04;
    *VAR6++ = 0xf0;
    *VAR6++ = 0x00; / ) ;
    *VAR6++ = 0x02;
    *VAR6++ = 0xff;
    VAR7 = VAR2;
    FUN4(&VAR7, VAR6 - VAR2);
    FUN2(NULL, VAR24, "", VAR6 - VAR2);
    return VAR6 - VAR2;
}