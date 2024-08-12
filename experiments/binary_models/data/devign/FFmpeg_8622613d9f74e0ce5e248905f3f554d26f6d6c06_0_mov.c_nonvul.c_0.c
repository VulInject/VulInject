static int FUN1(VAR1 *VAR2, VAR3 *VAR4, MOV_atom_t VAR5)
{
    int64_t VAR6 = 0;
    MOV_atom_t VAR7;
    int VAR8;
    int VAR9 = 0;
    VAR7.VAR10 = VAR5.VAR10;
    if (VAR5.VAR11 < 0)
        VAR5.VAR11 = VAR12;
    while (((VAR6 + 8) < VAR5.VAR11) && !FUN2(VAR4) && !VAR9)
    {
        VAR7.VAR11 = VAR5.VAR11;
        VAR7.VAR13 = 0L;
        if (VAR5.VAR11 >= 8)
        {
            VAR7.VAR11 = FUN3(VAR4);
            VAR7.VAR13 = FUN4(VAR4);
        }
        VAR6 += 8;
        VAR7.VAR10 += 8;
        FUN5(VAR2->VAR14, "" VAR15 "" VAR15 "" VAR15 "", VAR7.VAR13, (char *)&VAR7.VAR13, VAR7.VAR11, VAR5.VAR11, VAR6);
        if (VAR7.VAR11 == 1)
        {
            VAR7.VAR11 = FUN6(VAR4) - 8;
            VAR7.VAR10 += 8;
            VAR6 += 8;
        }
        if (VAR7.VAR11 == 0)
        {
            VAR7.VAR11 = VAR5.VAR11 - VAR6;
            if (VAR7.VAR11 <= 8)
                break;
        }
        VAR7.VAR11 -= 8;
        if (VAR7.VAR11 < 0)
            break;
        if (VAR7.VAR11 > VAR5.VAR11 - VAR6)
            VAR7.VAR11 = VAR5.VAR11 - VAR6;
        for (VAR8 = 0; VAR2->VAR16[VAR8].VAR13 != 0L && VAR2->VAR16[VAR8].VAR13 != VAR7.VAR13; VAR8++)
            ;
        if (VAR2->VAR16[VAR8].VAR13 == 0)
        {
            FUN7(VAR4, VAR7.VAR11);
        }
        else
        {
            offset_t VAR17 = FUN8(VAR4);
            int64_t VAR18;
            VAR9 = (VAR2->VAR16[VAR8].VAR19)(VAR2, VAR4, VAR7);
            VAR18 = VAR7.VAR11 - FUN8(VAR4) + VAR17;
            if (VAR18 > 0)
                FUN7(VAR4, VAR18);
        }
        VAR7.VAR10 += VAR7.VAR11;
        VAR6 += VAR7.VAR11;
    }
    if (!VAR9 && VAR6 < VAR5.VAR11 && VAR5.VAR11 < 0x7ffff)
    {
        FUN7(VAR4, VAR5.VAR11 - VAR6);
    }
    return VAR9;
}