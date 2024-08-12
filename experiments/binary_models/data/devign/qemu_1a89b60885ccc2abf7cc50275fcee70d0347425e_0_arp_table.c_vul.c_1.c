void FUN1(VAR1 *VAR2, uint32_t VAR3, uint8_t VAR4[VAR5])
{
    const uint32_t VAR6 = ~VAR2->VAR7.VAR8 | VAR2->VAR9.VAR8;
    VAR10 *VAR11 = &VAR2->VAR12;
    int VAR13;
    FUN2("");
    FUN3("", VAR3);
    FUN4((VAR14, "", VAR4[0], VAR4[1], VAR4[2], VAR4[3], VAR4[4], VAR4[5]));
    assert((VAR3 & FUN5(~(0xf << 28))) != 0);
    if (VAR3 == 0xffffffff || VAR3 == VAR6)
    {
        return;
    }
    for (VAR13 = 0; VAR13 < VAR15; VAR13++)
    {
        if (VAR11->VAR16[VAR13].VAR17 == VAR3)
        {
            memcpy(VAR11->VAR16[VAR13].VAR18, VAR4, VAR5);
            return;
        }
    }
    VAR11->VAR16[VAR11->VAR19].VAR17 = VAR3;
    memcpy(VAR11->VAR16[VAR11->VAR19].VAR18, VAR4, VAR5);
    VAR11->VAR19 = (VAR11->VAR19 + 1) % VAR15;
}