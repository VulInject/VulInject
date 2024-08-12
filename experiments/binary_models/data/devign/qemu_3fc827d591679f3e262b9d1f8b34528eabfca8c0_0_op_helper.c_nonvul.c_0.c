void FUN1(VAR1)(VAR2 *VAR3, void *VAR4, uint32_t VAR5)
{
    const VAR6 *VAR7 = VAR4;
    int VAR8;
    if (FUN2(VAR3, VAR9) && VAR7->VAR10 < 14 && FUN3(VAR3->VAR11.VAR12, VAR7->VAR10, 1) == 0)
    {
        FUN4(VAR3, VAR13, VAR5, FUN5(VAR3));
    }
    if (!VAR7->VAR14)
    {
        return;
    }
    switch (VAR7->FUN6(VAR3, VAR7))
    {
    case VAR15:
        return;
    case VAR16:
        VAR8 = FUN5(VAR3);
        break;
    case VAR17:
        assert(!FUN7(VAR3) && FUN8(VAR3) != 3);
        VAR8 = 2;
        break;
    case VAR18:
        VAR8 = 3;
        break;
    case VAR19:
        VAR8 = FUN5(VAR3);
        VAR5 = FUN9();
        break;
    default:
        FUN10();
    }
    FUN4(VAR3, VAR13, VAR5, VAR8);
}