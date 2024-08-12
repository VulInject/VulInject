static bool FUN1(VAR1 *VAR2)
{
    assert(VAR2->VAR3.VAR4->VAR5 != VAR2->VAR3.VAR5);
    if (VAR2->VAR3.VAR6.VAR7[1] & 0x2)
    {
        return false;
    }
    if (VAR2->VAR3.VAR6.VAR7[1] & 0x1)
    {
        uint8_t VAR8 = VAR2->VAR3.VAR6.VAR7[2];
        VAR2->VAR7[VAR2->VAR9++] = VAR8;
        VAR2->VAR7[VAR2->VAR9++] = 0x00;
        switch (VAR8)
        {
        case 0x00:
        {
            int VAR10;
            VAR10 = VAR2->VAR9++;
            VAR2->VAR7[VAR2->VAR9++] = 0x00;
            VAR2->VAR7[VAR10] = VAR2->VAR9 - VAR10 - 1;
            break;
        }
        default:
            return false;
        }
        assert(VAR2->VAR9 < sizeof(VAR2->VAR7));
        VAR2->VAR9 = FUN2(VAR2->VAR3.VAR6.VAR11, VAR2->VAR9);
        return true;
    }
    if (VAR2->VAR3.VAR6.VAR7[2] != 0)
    {
        return false;
    }
    VAR2->VAR9 = FUN2(VAR2->VAR3.VAR6.VAR11, 36);
    memset(VAR2->VAR7, 0, VAR2->VAR9);
    if (VAR2->VAR3.VAR5 != 0)
    {
        VAR2->VAR7[0] = VAR12;
    }
    else
    {
        VAR2->VAR7[0] = VAR13 | VAR14;
        VAR2->VAR7[2] = 5;
        VAR2->VAR7[3] = 2 | 0x10;
        VAR2->VAR7[4] = VAR2->VAR9 - 5;
        VAR2->VAR7[7] = 0x10 | (VAR2->VAR3.VAR15->VAR16->VAR17 ? 0x02 : 0);
        memcpy(&VAR2->VAR7[8], "", 8);
        memcpy(&VAR2->VAR7[16], "", 16);
        FUN3((char *)&VAR2->VAR7[32], 4, FUN4());
    }
    return true;
}