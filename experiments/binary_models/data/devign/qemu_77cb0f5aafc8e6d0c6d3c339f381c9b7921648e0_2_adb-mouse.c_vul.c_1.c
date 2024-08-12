static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    int VAR7, VAR8;
    if (VAR6->VAR9 == VAR6->VAR10 && VAR6->VAR7 == 0 && VAR6->VAR8 == 0)
        return 0;
    VAR7 = VAR6->VAR7;
    if (VAR7 < -63)
        VAR7 = -63;
    else if (VAR7 > 63)
        VAR7 = 63;
    VAR8 = VAR6->VAR8;
    if (VAR8 < -63)
        VAR8 = -63;
    else if (VAR8 > 63)
        VAR8 = 63;
    VAR6->VAR7 -= VAR7;
    VAR6->VAR8 -= VAR8;
    VAR6->VAR9 = VAR6->VAR10;
    VAR7 &= 0x7f;
    VAR8 &= 0x7f;
    if (!(VAR6->VAR10 & VAR11))
        VAR8 |= 0x80;
    if (!(VAR6->VAR10 & VAR12))
        VAR7 |= 0x80;
    VAR4[0] = VAR8;
    VAR4[1] = VAR7;
    return 2;
}