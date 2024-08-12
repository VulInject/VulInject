static int FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5;
    uint16_t VAR6;
    uint32_t VAR7;
    uint8_t VAR8;
    if (FUN2(&VAR2->VAR9) < 8)
        VAR6 = FUN3(&VAR2->VAR9);
    if (VAR6)
    {
        FUN4(VAR2->VAR10, "");
        return VAR11;
    }
    VAR7 = FUN5(&VAR2->VAR9);
    VAR8 = FUN6(&VAR2->VAR9);
    FUN6(&VAR2->VAR9);
    if (VAR7 > FUN2(&VAR2->VAR9) + VAR3 + 2)
    {
        FUN7(VAR2->VAR10, VAR12, "", VAR7);
    }
    if (VAR8 >= FUN8(VAR2->VAR13[VAR6].VAR14))
    {
        FUN4(VAR2->VAR10, "", VAR8);
        return VAR11;
    }
    VAR5 = VAR2->VAR13[VAR2->VAR15].VAR14 + VAR8;
    VAR5->VAR16 = VAR6;
    VAR5->VAR17 = VAR7;
    VAR5->VAR18 = VAR8;
    if (VAR19 == FUN9(&VAR2->VAR9))
    {
        FUN10(&VAR5->VAR20, VAR2->VAR9.VAR21, VAR5->VAR17 - VAR3 - 4);
        FUN11(&VAR2->VAR9, VAR5->VAR17 - VAR3 - 4);
    }
    else
    {
        FUN7(VAR2->VAR10, VAR12, "");
    }
    return 0;