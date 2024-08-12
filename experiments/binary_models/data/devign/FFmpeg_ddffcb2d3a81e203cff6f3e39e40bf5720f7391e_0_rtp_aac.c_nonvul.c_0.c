void FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    int VAR9, VAR10;
    VAR3 *VAR11;
    if ((VAR2->VAR12[0]->VAR13->VAR14) == 0)
    {
        VAR5 -= 7;
        VAR4 += 7;
    }
    VAR10 = VAR7->VAR15 - VAR16;
    VAR9 = (VAR7->VAR17 - VAR7->VAR18);
    if ((VAR7->VAR19 == VAR20) || (VAR9 && (VAR9 + VAR5) > VAR7->VAR15))
    {
        int VAR21 = VAR7->VAR19 * 2;
        VAR11 = VAR7->VAR18 + VAR16 - VAR21 - 2;
        if (VAR11 != VAR7->VAR18)
        {
            memmove(VAR11 + 2, VAR7->VAR18 + 2, VAR21);
        }
        VAR11[0] = ((VAR21 * 8) & 0xFF) >> 8;
        VAR11[1] = (VAR21 * 8) & 0xFF;
        FUN2(VAR2, VAR11, VAR7->VAR17 - VAR11, 1);
        VAR7->VAR19 = 0;
    }
    if (VAR7->VAR19 == 0)
    {
        VAR7->VAR17 = VAR7->VAR18 + VAR16;
        VAR7->VAR22 = VAR7->VAR23;
    }
    if (VAR5 <= VAR10)
    {
        VAR11 = VAR7->VAR18 + VAR7->VAR19++ * 2 + 2;
        *VAR11++ = VAR5 >> 5;
        *VAR11 = (VAR5 & 0x1F) << 3;
        memcpy(VAR7->VAR17, VAR4, VAR5);
        VAR7->VAR17 += VAR5;
    }
    else
    {
        VAR10 = VAR7->VAR15 - 4;
        VAR11 = VAR7->VAR18;
        VAR11[0] = 0;
        VAR11[1] = 16;
        while (VAR5 > 0)
        {
            VAR9 = FUN3(VAR5, VAR10);
            VAR11[2] = VAR9 >> 5;
            VAR11[3] = (VAR5 & 0x1F) << 3;
            memcpy(VAR11 + 4, VAR4, VAR9);
            FUN2(VAR2, VAR11, VAR9 + 4, VAR9 == VAR5);
            VAR5 -= VAR9;
            VAR4 += VAR9;
        }
    }
}