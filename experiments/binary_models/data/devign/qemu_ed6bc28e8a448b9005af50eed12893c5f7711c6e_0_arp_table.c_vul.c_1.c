bool FUN1(VAR1 *VAR2, uint32_t VAR3, uint8_t VAR4[VAR5])
{
    const uint32_t VAR6 = ~VAR2->VAR7.VAR8 | VAR2->VAR9.VAR8;
    VAR10 *VAR11 = &VAR2->VAR12;
    int VAR13;
    FUN2("");
    FUN3("", VAR3);
    assert((VAR3 & FUN4(~(0xf << 28))) != 0);
    if (VAR3 == 0xffffffff || VAR3 == VAR6)
    {
        memset(VAR4, 0xff, VAR5);
        return 1;
    }
    for (VAR13 = 0; VAR13 < VAR14; VAR13++)
    {
        if (VAR11->VAR15[VAR13].VAR16 == VAR3)
        {
            memcpy(VAR4, VAR11->VAR15[VAR13].VAR17, VAR5);
            FUN5((VAR18, "", VAR4[0], VAR4[1], VAR4[2], VAR4[3], VAR4[4], VAR4[5]));
            return 1;
        }
    }
    return 0;
}