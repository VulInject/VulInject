static bool FUN1(VAR1 *VAR2)
{
    assert(VAR2->VAR3.VAR4->VAR5 != VAR2->VAR3.VAR5);
    FUN2(&VAR2->VAR3, VAR6);
    if (VAR2->VAR3.VAR7.VAR8[1] & 0x2)
    {
        return false;
    }
    if (VAR2->VAR3.VAR7.VAR8[1] & 0x1)
    {
        uint8_t VAR9 = VAR2->VAR3.VAR7.VAR8[2];
        VAR2->VAR8[VAR2->VAR10++] = VAR9;
        VAR2->VAR8[VAR2->VAR10++] = 0x00;
        switch (VAR9)
        {
        case 0x00:
        {
            int VAR11;
            VAR11 = VAR2->VAR10++;
            VAR2->VAR8[VAR2->VAR10++] = 0x00;
            VAR2->VAR8[VAR11] = VAR2->VAR10 - VAR11 - 1;
            break;
        }
        default:
            return false;
        }
        assert(VAR2->VAR10 < VAR2->VAR12);
        VAR2->VAR10 = FUN3(VAR2->VAR3.VAR7.VAR13, VAR2->VAR10);
        return true;
    }
    if (VAR2->VAR3.VAR7.VAR8[2] != 0)
    {
        return false;
    }
    VAR2->VAR10 = FUN3(VAR2->VAR3.VAR7.VAR13, VAR6);
    memset(VAR2->VAR8, 0, VAR2->VAR10);
    if (VAR2->VAR3.VAR5 != 0)
    {
        VAR2->VAR8[0] = VAR14;
    }
    else
    {
        VAR2->VAR8[0] = VAR15 | VAR16;
        VAR2->VAR8[2] = 5;
        VAR2->VAR8[3] = 2 | 0x10;
        VAR2->VAR8[4] = VAR2->VAR10 - 5;
        VAR2->VAR8[7] = 0x10 | (VAR2->VAR3.VAR17->VAR18->VAR19 ? 0x02 : 0);
        memcpy(&VAR2->VAR8[8], "", 8);
        memcpy(&VAR2->VAR8[16], "", 16);
        FUN4((char *)&VAR2->VAR8[32], 4, FUN5());
    }
    return true;
}