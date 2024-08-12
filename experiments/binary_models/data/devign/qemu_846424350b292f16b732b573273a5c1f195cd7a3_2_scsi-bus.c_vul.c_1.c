int FUN1(VAR1 *VAR2, int VAR3, VAR1 *VAR4, int VAR5, bool VAR6)
{
    bool VAR7;
    SCSISense VAR8;
    if (!VAR6 && VAR5 < 8)
    {
        return 0;
    }
    if (VAR3 == 0)
    {
        VAR8.VAR9 = VAR10;
        VAR8.VAR11 = 0;
        VAR8.VAR12 = 0;
    }
    else
    {
        VAR7 = (VAR2[0] & 2) == 0;
        if (VAR6 == VAR7)
        {
            memcpy(VAR4, VAR2, FUN2(VAR5, VAR3));
            return FUN2(VAR5, VAR3);
        }
        if (VAR7)
        {
            VAR8.VAR9 = VAR2[2];
            VAR8.VAR11 = VAR2[12];
            VAR8.VAR12 = VAR2[13];
        }
        else
        {
            VAR8.VAR9 = VAR2[1];
            VAR8.VAR11 = VAR2[2];
            VAR8.VAR12 = VAR2[3];
        }
    }
    memset(VAR4, 0, VAR5);
    if (VAR6)
    {
        VAR4[0] = 0x70;
        VAR4[2] = VAR8.VAR9;
        VAR4[7] = 10;
        VAR4[12] = VAR8.VAR11;
        VAR4[13] = VAR8.VAR12;
        return FUN2(VAR5, 18);
    }
    else
    {
        VAR4[0] = 0x72;
        VAR4[1] = VAR8.VAR9;
        VAR4[2] = VAR8.VAR11;
        VAR4[3] = VAR8.VAR12;
        return 8;
    }
}