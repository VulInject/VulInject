static void FUN1(const unsigned char *VAR1, int VAR2, unsigned char *VAR3, int VAR4)
{
    const unsigned char *VAR5;
    const unsigned char *VAR6;
    unsigned char *VAR7;
    unsigned char *VAR8;
    unsigned char VAR9[VAR10];
    unsigned int VAR11;
    unsigned int VAR12;
    unsigned int VAR13;
    unsigned int VAR14;
    unsigned int VAR15;
    unsigned char VAR16;
    unsigned int VAR17, VAR18;
    VAR5 = VAR1;
    VAR6 = VAR1 + VAR2;
    VAR7 = VAR3;
    VAR8 = VAR7 + VAR4;
    if (VAR6 - VAR5 < 8)
        return;
    VAR12 = FUN2(VAR5);
    VAR5 += 4;
    memset(VAR9, 0x20, VAR10);
    if (FUN2(VAR5) == 0x56781234)
    {
        VAR5 += 4;
        VAR11 = 0x111;
        VAR15 = 0xF + 3;
    }
    else
    {
        VAR11 = 0xFEE;
        VAR15 = 100;
    }
    while (VAR6 - VAR5 > 0 && VAR12 > 0)
    {
        VAR16 = *VAR5++;
        if ((VAR16 == 0xFF) && (VAR12 > 8))
        {
            if (VAR7 + 8 > VAR8 || VAR6 - VAR5 < 8)
                return;
            for (VAR17 = 0; VAR17 < 8; VAR17++)
            {
                VAR9[VAR11++] = *VAR7++ = *VAR5++;
                VAR11 &= VAR19;
            }
            VAR12 -= 8;
        }
        else
        {
            for (VAR17 = 0; VAR17 < 8; VAR17++)
            {
                if (VAR12 == 0)
                    break;
                if (VAR16 & 0x01)
                {
                    if (VAR7 + 1 > VAR8 || VAR6 - VAR5 < 1)
                        return;
                    VAR9[VAR11++] = *VAR7++ = *VAR5++;
                    VAR11 &= VAR19;
                    VAR12--;
                }
                else
                {
                    if (VAR6 - VAR5 < 2)
                        return;
                    VAR13 = *VAR5++;
                    VAR13 |= ((*VAR5 & 0xF0) << 4);
                    VAR14 = (*VAR5++ & 0x0F) + 3;
                    if (VAR14 == VAR15)
                    {
                        if (VAR6 - VAR5 < 1)
                            return;
                        VAR14 = *VAR5++ + 0xF + 3;
                    }
                    if (VAR7 + VAR14 > VAR8)
                        return;
                    for (VAR18 = 0; VAR18 < VAR14; VAR18++)
                    {
                        *VAR7 = VAR9[VAR13++ & VAR19];
                        VAR9[VAR11++] = *VAR7++;
                        VAR11 &= VAR19;
                    }
                    VAR12 -= VAR14;
                }
                VAR16 >>= 1;
            }
        }
    }
}