FUN1(void *VAR1, hwaddr VAR2, unsigned VAR3)
{
    VAR4 *VAR5 = VAR1;
    unsigned int VAR6 = (VAR2 & 0x1ffff) >> 2;
    if (VAR6 < VAR7 && VAR8[VAR6])
    {
        if (!(VAR9[VAR6] & VAR10) || (VAR5->VAR11 & (VAR9[VAR6] >> 2)))
        {
            if (VAR9[VAR6] & VAR12)
            {
                FUN2(VAR13, ""
                                "",
                       VAR6 << 2);
            }
            return VAR8[VAR6](VAR5, VAR6);
        }
        else
        {
            FUN2(VAR14, "", VAR6 << 2);
        }
    }
    else
    {
        FUN2(VAR15, "", VAR6 << 2);
    }
    return 0;
}