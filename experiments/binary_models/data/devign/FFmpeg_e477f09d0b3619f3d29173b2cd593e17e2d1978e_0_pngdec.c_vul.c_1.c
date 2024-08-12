static int FUN1(VAR1 *VAR2, VAR3 *VAR4, uint32_t VAR5)
{
    int VAR6, VAR7;
    if (VAR4->VAR8 == VAR9)
    {
        if (VAR5 > 256 || !(VAR4->VAR10 & VAR11))
            return VAR12;
        for (VAR7 = 0; VAR7 < VAR5; VAR7++)
        {
            VAR6 = FUN2(&VAR4->VAR13);
            VAR4->VAR14[VAR7] = (VAR4->VAR14[VAR7] & 0x00ffffff) | (VAR6 << 24);
        }
    }
    else if (VAR4->VAR8 == VAR15 || VAR4->VAR8 == VAR16)
    {
        if ((VAR4->VAR8 == VAR15 && VAR5 != 2) || (VAR4->VAR8 == VAR16 && VAR5 != 6))
            return VAR12;
        for (VAR7 = 0; VAR7 < VAR5 / 2; VAR7++)
        {
            VAR6 = FUN3(FUN4(&VAR4->VAR13), VAR4->VAR17);
            if (VAR4->VAR17 > 8)
                FUN5(&VAR4->VAR18[2 * VAR7], VAR6);
            else
                VAR4->VAR18[VAR7] = VAR6;
        }
    }
    else
    {
        return VAR12;
    }
    FUN6(&VAR4->VAR13, 4);
    VAR4->VAR19 = 1;
    return 0;
}