static int FUN1(VAR1 *VAR2, int VAR3, VAR4 *VAR5, int VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10[VAR3];
    VAR11 *VAR12 = VAR9->VAR13;
    INT64 VAR14;
    UINT8 VAR15[VAR16];
    int VAR17;
    if (VAR9->VAR18.VAR19 == VAR20)
    {
        VAR17 = ((float)VAR9->VAR18.VAR21 / VAR9->VAR18.VAR22 * 1000000.0);
    }
    else
    {
        VAR17 = (1000000.0 * VAR23 / (float)VAR9->VAR18.VAR24);
    }
    VAR14 = VAR12->VAR14;
    VAR15[0] = VAR3;
    VAR15[1] = 0;
    if (VAR9->VAR18.VAR25->VAR26)
        VAR15[1] |= VAR27;
    VAR15[2] = (VAR6 >> 16) & 0xff;
    VAR15[3] = (VAR6 >> 8) & 0xff;
    VAR15[4] = VAR6 & 0xff;
    VAR15[5] = (VAR17 >> 16) & 0xff;
    VAR15[6] = (VAR17 >> 8) & 0xff;
    VAR15[7] = VAR17 & 0xff;
    FUN2(VAR2, VAR15, VAR16, VAR14, 1);
    FUN2(VAR2, VAR5, VAR6, VAR14, 0);
    VAR12->VAR14 += VAR17;
    return 0;
}