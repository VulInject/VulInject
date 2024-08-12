static VAR1 FUN1(void *VAR2, hwaddr VAR3, uint32_t VAR4)
{
    VAR5 *VAR6 = VAR2;
    unsigned VAR7;
    unsigned VAR8;
    uint32_t VAR9;
    if ((VAR6->VAR10.VAR11[0x07] & 0x01) == 0)
    {
        return FUN2(&VAR6->VAR10, VAR3);
    }
    if (VAR3 < 0x10000)
    {
        VAR7 = VAR3 >> 15;
        VAR8 = VAR3 & 0x7fff;
        if (VAR8 < VAR6->VAR12[VAR7])
        {
            VAR8 += VAR6->VAR13[VAR7];
            if ((VAR6->VAR10.VAR14[0x0B] & 0x14) == 0x14)
            {
                VAR8 <<= 4;
            }
            else if (VAR6->VAR10.VAR14[0x0B] & 0x02)
            {
                VAR8 <<= 3;
            }
            VAR8 &= VAR6->VAR15;
            VAR9 = *(VAR6->VAR10.VAR16 + VAR8);
        }
        else
            VAR9 = 0xff;
    }
    else if (VAR3 >= 0x18000 && VAR3 < 0x18100)
    {
        VAR9 = 0xff;
        if ((VAR6->VAR10.VAR11[0x17] & 0x44) == 0x04)
        {
            VAR9 = FUN3(VAR6, VAR3 & 0xff);
        }
    }
    else
    {
        VAR9 = 0xff;
        FUN4("" VAR17 "", VAR3);
    }
    return VAR9;
}