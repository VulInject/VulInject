static void FUN1(void *VAR1, hwaddr VAR2, uint64_t VAR3, uint32_t VAR4)
{
    VAR5 *VAR6 = VAR1;
    unsigned VAR7;
    unsigned VAR8;
    unsigned VAR9;
    if ((VAR6->VAR10.VAR11[0x07] & 0x01) == 0)
    {
        FUN2(&VAR6->VAR10, VAR2, VAR3);
        return;
    }
    if (VAR2 < 0x10000)
    {
        if (VAR6->VAR12 != VAR6->VAR13)
        {
            *VAR6->VAR12++ = (VAR14)VAR3;
            if (VAR6->VAR12 >= VAR6->VAR13)
            {
                FUN3(VAR6);
            }
        }
        else
        {
            VAR7 = VAR2 >> 15;
            VAR8 = VAR2 & 0x7fff;
            if (VAR8 < VAR6->VAR15[VAR7])
            {
                VAR8 += VAR6->VAR16[VAR7];
                if ((VAR6->VAR10.VAR17[0x0B] & 0x14) == 0x14)
                {
                    VAR8 <<= 4;
                }
                else if (VAR6->VAR10.VAR17[0x0B] & 0x02)
                {
                    VAR8 <<= 3;
                }
                VAR8 &= VAR6->VAR18;
                VAR9 = VAR6->VAR10.VAR17[0x05] & 0x7;
                if (VAR9 < 4 || VAR9 > 5 || ((VAR6->VAR10.VAR17[0x0B] & 0x4) == 0))
                {
                    *(VAR6->VAR10.VAR19 + VAR8) = VAR3;
                    FUN4(&VAR6->VAR10.VAR20, VAR8, sizeof(VAR3));
                }
                else
                {
                    if ((VAR6->VAR10.VAR17[0x0B] & 0x14) != 0x14)
                    {
                        FUN5(VAR6, VAR9, VAR8, VAR3);
                    }
                    else
                    {
                        FUN6(VAR6, VAR9, VAR8, VAR3);
                    }
                }
            }
        }
    }
    else if (VAR2 >= 0x18000 && VAR2 < 0x18100)
    {
        if ((VAR6->VAR10.VAR11[0x17] & 0x44) == 0x04)
        {
            FUN7(VAR6, VAR2 & 0xff, VAR3);
        }
    }
    else
    {
        FUN8("" VAR21 "", VAR2, VAR3);
    }
}