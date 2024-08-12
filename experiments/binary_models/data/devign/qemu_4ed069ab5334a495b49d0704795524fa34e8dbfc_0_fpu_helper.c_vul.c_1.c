static VAR1 FUN1(VAR2 *VAR3, uint64_t VAR4, int VAR5)
{
    uint64_t VAR6, VAR7 = 0;
    uint32_t VAR8, VAR9, VAR10 = 0;
    int VAR11;
    VAR9 = (VAR4 >> 63);
    VAR8 = (VAR12)(VAR4 >> 52) & 0x7ff;
    VAR6 = VAR4 & 0xfffffffffffffull;
    if (VAR8 == 0)
    {
        if (FUN2(VAR6 != 0))
        {
            goto VAR13;
        }
    }
    else if (VAR8 == 0x7ff)
    {
        VAR10 = VAR14;
    }
    else
    {
        VAR6 |= 0x10000000000000ull;
        VAR11 = VAR8 - 1023 - 52;
        if (VAR11 >= 0)
        {
            if (VAR11 < 64)
            {
                VAR7 = VAR6 << VAR11;
            }
            if (VAR11 >= 11 && VAR4 != 0xC3E0000000000000ull)
            {
                VAR10 = VAR15 | VAR16;
            }
        }
        else
        {
            uint64_t VAR17;
            VAR11 = -VAR11;
            if (VAR11 < 63)
            {
                VAR7 = VAR6 >> VAR11;
                VAR17 = VAR6 << (64 - VAR11);
            }
            else
            {
            VAR13:
                VAR17 = 1;
            }
            if (VAR17)
            {
                VAR10 = VAR16;
                switch (VAR5)
                {
                case VAR18:
                    if (VAR17 == (1ull << 63))
                    {
                        VAR7 += (VAR7 & 1);
                    }
                    else if (VAR17 > (1ull << 63))
                    {
                        VAR7 += 1;
                    }
                    break;
                case VAR19:
                    break;
                case VAR20:
                    VAR7 += 1 - VAR9;
                    break;
                case VAR21:
                    VAR7 += VAR9;
                    break;
                }
            }
        }
        if (VAR9)
        {
            VAR7 = -VAR7;
        }
    }
    VAR3->VAR22 = VAR10;
    return VAR7;
}