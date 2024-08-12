static void FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5, int VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    FUN2(VAR2, VAR10, "", VAR4[0] & 0x1F, VAR5, VAR6);
    if (VAR5 <= VAR8->VAR11)
    {
        int VAR12 = VAR8->VAR13 - VAR8->VAR4;
        if (VAR12 + 2 + VAR5 > VAR8->VAR11)
        {
            FUN3(VAR2, 0);
            VAR12 = 0;
        }
        if (VAR12 + 3 + VAR5 <= VAR8->VAR11 && !(VAR8->VAR14 & VAR15))
        {
            if (VAR12 == 0)
                *VAR8->VAR13++ = 24;
            FUN4(VAR8->VAR13, VAR5);
            VAR8->VAR13 += 2;
            memcpy(VAR8->VAR13, VAR4, VAR5);
            VAR8->VAR13 += VAR5;
            VAR8->VAR16++;
        }
        else
        {
            FUN3(VAR2, 0);
            FUN5(VAR2, VAR4, VAR5, VAR6);
        }
    }
    else
    {
        uint8_t VAR17 = VAR4[0] & 0x1F;
        uint8_t VAR18 = VAR4[0] & 0x60;
        FUN3(VAR2, 0);
        if (VAR8->VAR14 & VAR15)
        {
            FUN2(VAR2, VAR19, "", VAR5, VAR8->VAR11, VAR8->VAR11);
            return;
        }
        FUN2(VAR2, VAR10, "", VAR5, VAR8->VAR11);
        VAR8->VAR4[0] = 28;
        VAR8->VAR4[0] |= VAR18;
        VAR8->VAR4[1] = VAR17;
        VAR8->VAR4[1] |= 1 << 7;
        VAR4 += 1;
        VAR5 -= 1;
        while (VAR5 + 2 > VAR8->VAR11)
        {
            memcpy(&VAR8->VAR4[2], VAR4, VAR8->VAR11 - 2);
            FUN5(VAR2, VAR8->VAR4, VAR8->VAR11, 0);
            VAR4 += VAR8->VAR11 - 2;
            VAR5 -= VAR8->VAR11 - 2;
            VAR8->VAR4[1] &= ~(1 << 7);
        }
        VAR8->VAR4[1] |= 1 << 6;
        memcpy(&VAR8->VAR4[2], VAR4, VAR5);
        FUN5(VAR2, VAR8->VAR4, VAR5 + 2, VAR6);
    }
}