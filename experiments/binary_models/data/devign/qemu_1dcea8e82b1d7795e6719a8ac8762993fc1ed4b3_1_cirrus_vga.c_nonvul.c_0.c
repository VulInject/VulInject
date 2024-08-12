static void FUN1(VAR1 *VAR2)
{
    unsigned VAR3;
    if ((VAR2->VAR4[0x17] & 0x44) == 0x44)
    {
        goto VAR5;
    }
    else if (VAR2->VAR6 != VAR2->VAR7)
    {
        goto VAR5;
    }
    else
    {
        if ((VAR2->VAR8[0x0B] & 0x14) == 0x14)
        {
            goto VAR5;
        }
        else if (VAR2->VAR8[0x0B] & 0x02)
        {
            goto VAR5;
        }
        VAR3 = VAR2->VAR8[0x05] & 0x7;
        if (VAR3 < 4 || VAR3 > 5 || ((VAR2->VAR8[0x0B] & 0x4) == 0))
        {
            FUN2(VAR2);
        }
        else
        {
        VAR5:
            FUN3(VAR2);
        }
    }
}