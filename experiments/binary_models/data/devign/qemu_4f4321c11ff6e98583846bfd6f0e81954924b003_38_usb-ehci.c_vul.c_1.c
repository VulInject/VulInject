static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6;
    VAR7 *VAR8 = VAR2->VAR9;
    uint32_t VAR10 = VAR8->VAR10[VAR2->VAR11];
    if (VAR10 & VAR12)
    {
        VAR1 *VAR13 = VAR8->VAR14[VAR2->VAR11];
        VAR13->VAR15->FUN2(VAR13, VAR4);
        return;
    }
    VAR6 = FUN3(VAR4, VAR5, VAR4);
    FUN4(VAR6, "");
    assert(VAR6->VAR16 == VAR17);
    VAR6->VAR16 = VAR18;
    VAR6->VAR19 = VAR4->VAR20;
}