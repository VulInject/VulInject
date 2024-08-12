FUN1(void *VAR1, hwaddr VAR2, uint64_t VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = VAR1;
    unsigned int VAR7 = (VAR2 & 0x1ffff) >> 2;
    if (VAR7 < VAR8 && VAR9[VAR7])
    {
        if (!(VAR10[VAR7] & VAR11) || (VAR6->VAR12 & (VAR10[VAR7] >> 2)))
        {
            if (VAR10[VAR7] & VAR13)
            {
                FUN2(VAR14, ""
                                "",
                       VAR7 << 2);
            }
            VAR9[VAR7](VAR6, VAR7, VAR3);
        }
        else
        {
            FUN2(VAR15, "", VAR7 << 2);
        }
    }
    else if (VAR7 < VAR16 && VAR17[VAR7])
    {
        FUN2(VAR15, "" VAR18 "", VAR7 << 2, VAR3);
    }
    else
    {
        FUN2(VAR19, "" VAR18 "", VAR7 << 2, VAR3);
    }
}