FUN1(VAR1 *VAR2, uint32_t VAR3, size_t VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9;
    if (!VAR6)
    {
        FUN2(VAR2->VAR10);
        return;
    }
    VAR9 = VAR6->VAR11;
    if (VAR4)
    {
        FUN3();
        VAR6->VAR12.VAR13 = VAR14;
    }
    VAR6->VAR12.VAR15 = VAR3;
    if (VAR6->VAR12.VAR15 == VAR16)
    {
        uint8_t VAR17[VAR18];
        int VAR19 = FUN4(VAR6->VAR20, VAR17, sizeof(VAR17));
        FUN5(VAR19);
        FUN6(VAR6, VAR17, VAR19);
    }
    FUN7(&VAR6->VAR21);
    FUN8(VAR9, VAR6);
}