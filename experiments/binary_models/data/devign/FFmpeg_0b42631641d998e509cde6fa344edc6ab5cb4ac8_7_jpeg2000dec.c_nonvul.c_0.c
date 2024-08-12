static VAR1 FUN1(VAR2 *VAR3, int VAR4)
{
    VAR5 *VAR6;
    uint16_t VAR7;
    uint32_t VAR8;
    uint8_t VAR9;
    if (FUN2(&VAR3->VAR10) < 8)
        return FUN3(VAR11);
    VAR7 = FUN4(&VAR3->VAR10);
    if (VAR7)
    {
        FUN5(VAR3->VAR12, VAR13, "");
        return -1;
    }
    VAR8 = FUN6(&VAR3->VAR10);
    VAR9 = FUN7(&VAR3->VAR10);
    FUN7(&VAR3->VAR10);
    VAR6 = VAR3->VAR14[VAR3->VAR15].VAR16 + VAR9;
    VAR6->VAR17 = VAR7;
    VAR6->VAR18 = VAR8;
    VAR6->VAR19 = VAR9;
    if (VAR20 == FUN8(&VAR3->VAR10))
    {
        FUN9(&VAR6->VAR21, VAR3->VAR10.VAR22, VAR6->VAR18 - VAR4 - 4);
        FUN10(&VAR3->VAR10, VAR6->VAR18 - VAR4 - 4);
    }
    else
    {
        FUN5(VAR3->VAR12, VAR13, "");
        return -1;
    }
    return 0;
}