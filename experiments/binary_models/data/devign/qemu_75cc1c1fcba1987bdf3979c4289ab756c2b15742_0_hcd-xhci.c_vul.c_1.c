static VAR1 FUN1(VAR2 *VAR3, unsigned int VAR4, unsigned int VAR5)
{
    VAR6 *VAR7;
    VAR8 *VAR9;
    VAR10 *VAR11;
    FUN2(VAR4, VAR5);
    assert(VAR4 >= 1 && VAR4 <= VAR3->VAR12);
    if (VAR5 < 1 || VAR5 > 31)
    {
        fprintf(VAR13, "", VAR5);
        return VAR14;
    }
    VAR7 = &VAR3->VAR15[VAR4 - 1];
    if (!VAR7->VAR16[VAR5 - 1])
    {
        FUN3("", VAR4, VAR5);
        return VAR17;
    }
    VAR9 = VAR7->VAR16[VAR5 - 1];
    if (VAR9->VAR18 != VAR19)
    {
        fprintf(VAR13, "", VAR5, VAR9->VAR18);
        return VAR20;
    }
    if (FUN4(VAR3, VAR4, VAR5) > 0)
    {
        fprintf(VAR13, ""
                        "");
    }
    uint8_t VAR21 = VAR5 >> 1;
    if (VAR5 & 1)
    {
        VAR21 |= 0x80;
    }
    VAR11 = VAR3->VAR15[VAR4 - 1].VAR22->VAR11;
    if (!VAR11)
    {
        return VAR23;
    }
    FUN5(VAR3, VAR9, NULL, VAR24);
    if (VAR9->VAR25)
    {
        FUN6(VAR9);
    }
    return VAR26;
}