VAR1 FUN1(uint64_t VAR2, uint32_t VAR3)
{
    CPU_DoubleU VAR4;
    int VAR5;
    int VAR6;
    VAR4.VAR7 = VAR2;
    VAR5 = FUN2(VAR4.VAR8);
    if (FUN3(FUN4(VAR4.VAR8)))
    {
        if (FUN5(VAR4.VAR8))
        {
            VAR6 = 0x00;
        }
        else
        {
            VAR6 = 0x11;
        }
    }
    else if (FUN3(FUN6(VAR4.VAR8)))
    {
        if (VAR5)
            VAR6 = 0x09;
        else
            VAR6 = 0x05;
    }
    else
    {
        if (FUN7(VAR4.VAR8))
        {
            if (VAR5)
                VAR6 = 0x12;
            else
                VAR6 = 0x02;
        }
        else
        {
            if (FUN8(VAR4.VAR8))
            {
                VAR6 = 0x10;
            }
            else
            {
                VAR6 = 0x00;
            }
            if (VAR5)
            {
                VAR6 |= 0x08;
            }
            else
            {
                VAR6 |= 0x04;
            }
        }
    }
    if (VAR3)
    {
        VAR9->VAR10 &= ~(0x1F << VAR11);
        VAR9->VAR10 |= VAR6 << VAR11;
    }
    return VAR6 & 0xF;
}