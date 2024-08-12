static int FUN1(VAR1 *VAR2, VAR3 *VAR4[], uint32_t VAR5, uint32_t VAR6)
{
    VAR7 *VAR8 = FUN2(VAR2, VAR7, VAR2);
    uint32_t VAR9;
    if (VAR6 + VAR5 > VAR10)
    {
        FUN3(VAR11, "", "");
        FUN4(""
                                "",
                                VAR6, VAR6, VAR6 + VAR5 - 1, VAR10 - 1);
        return -1;
    }
    for (VAR9 = 0; VAR9 < VAR5; VAR9++)
    {
        if (VAR8->VAR12[VAR6 + VAR9])
        {
            FUN3(VAR11, "", "");
            FUN4("", VAR6 + VAR9, VAR2->VAR13.VAR14);
            return -1;
        }
    }
    for (VAR9 = 0; VAR9 < VAR5; VAR9++)
    {
        VAR8->VAR12[VAR6 + VAR9] = VAR4[VAR9];
        VAR8->VAR4[VAR6 + VAR9].VAR15 |= VAR16 | VAR17;
        VAR8->VAR18[VAR6 + VAR9] = VAR19;
    }
    VAR8->VAR20++;
    VAR8->VAR21[0x05] = (VAR8->VAR20 << 4) | VAR5;
    return 0;
}