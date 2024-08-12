static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, int VAR7, int VAR8)
{
    int VAR9, VAR10, VAR11, VAR12, VAR13, VAR14, VAR15, VAR16;
    VAR17 *VAR18 = (VAR17 *)VAR6->VAR19;
    FUN2(VAR4, VAR6, VAR11);
    VAR15 = FUN3(VAR4, VAR7 - VAR8);
    if (VAR15 && VAR8)
    {
        VAR14 = -FUN4(VAR4);
        VAR15 = (VAR15 ^ VAR14) - VAR14;
    }
    *VAR18++ = VAR15;
    VAR11--;
    for (VAR9 = 0; VAR9 < VAR11; VAR9 += 8)
    {
        VAR12 = FUN5(VAR11 - VAR9, 8);
        VAR13 = FUN3(VAR4, 4);
        if (VAR13)
        {
            for (VAR10 = 0; VAR10 < VAR12; VAR10++)
            {
                VAR16 = FUN3(VAR4, VAR13);
                if (VAR16)
                {
                    VAR14 = -FUN4(VAR4);
                    VAR16 = (VAR16 ^ VAR14) - VAR14;
                }
                VAR15 += VAR16;
                *VAR18++ = VAR15;
                if (VAR15 < -32768 || VAR15 > 32767)
                {
                    FUN6(VAR2, VAR20, "", VAR15);
                    return -1;
                }
            }
        }
        else
        {
            for (VAR10 = 0; VAR10 < VAR12; VAR10++)
                *VAR18++ = VAR15;
        }
    }
    VAR6->VAR19 = (VAR21 *)VAR18;
    return 0;
}