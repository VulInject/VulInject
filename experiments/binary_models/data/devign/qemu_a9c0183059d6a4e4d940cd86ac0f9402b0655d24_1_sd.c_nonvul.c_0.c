static void FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4, VAR5, VAR6, VAR7;
    VAR3 = !!(VAR2->VAR8[0] & 0x08);
    VAR4 = VAR2->VAR8[0] & 0x04;
    VAR5 = VAR2->VAR8[0] & 0x02;
    VAR6 = VAR2->VAR8[0] & 0x01;
    if (VAR2->VAR9 > 1)
        VAR7 = VAR2->VAR8[1];
    else
        VAR7 = 0;
    if (VAR3)
    {
        if (!(VAR2->VAR10 & VAR11) || VAR2->VAR9 > 1 || VAR6 || VAR5 || VAR4 || VAR2->VAR12 || (VAR2->VAR13[14] & 0x20))
        {
            VAR2->VAR10 |= VAR14;
            return;
        }
        FUN2(VAR2->VAR15, (VAR2->VAR16 >> (VAR17 + VAR18 + VAR19)) + 1);
        VAR2->VAR13[14] &= ~0x10;
        VAR2->VAR10 &= ~VAR11;
        VAR2->VAR7 = 0;
        fprintf(VAR20, "");
        return;
    }
    if (VAR2->VAR9 < 2 + VAR7 || VAR7 <= VAR2->VAR7 || VAR7 > VAR2->VAR7 + 16)
    {
        VAR2->VAR10 |= VAR14;
        return;
    }
    if (VAR2->VAR7 && memcmp(VAR2->VAR21, VAR2->VAR8 + 2, VAR2->VAR7))
    {
        VAR2->VAR10 |= VAR14;
        return;
    }
    VAR7 -= VAR2->VAR7;
    if ((VAR7 && !VAR6) || (VAR5 && (VAR6 || VAR4)) || (VAR4 && !VAR2->VAR7 && !VAR6) || (!VAR6 && !VAR5 && (((VAR2->VAR10 & VAR11) && VAR4) || (!(VAR2->VAR10 & VAR11) && !VAR4))))
    {
        VAR2->VAR10 |= VAR14;
        return;
    }
    if (VAR6)
    {
        memcpy(VAR2->VAR21, VAR2->VAR8 + 2 + VAR2->VAR7, VAR7);
        VAR2->VAR7 = VAR7;
    }
    if (VAR5)
    {
        VAR2->VAR7 = 0;
    }
    if (VAR4)
        VAR2->VAR10 |= VAR11;
    else
        VAR2->VAR10 &= ~VAR11;
}