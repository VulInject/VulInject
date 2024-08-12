void FUN1(VAR1 *VAR2, uint32_t VAR3, bool VAR4, uint32_t VAR5, uint32_t VAR6, uint32_t VAR7, uint32_t VAR8)
{
    struct VAR9 *VAR10 = FUN2(VAR2, struct VAR9, VAR2);
    assert(VAR10->VAR11);
    VAR10->VAR5 = VAR5;
    VAR10->VAR6 = VAR6;
    VAR10->VAR7 = VAR7;
    VAR10->VAR8 = VAR8;
    VAR10->VAR12 = VAR3;
    VAR10->VAR13 = VAR4;
    FUN3(VAR10->VAR14, VAR10->VAR15);
    if (VAR10->VAR12 == 0 || VAR10->VAR7 == 0 || VAR10->VAR8 == 0)
    {
        FUN4(VAR10, false);
        return;
    }
    FUN4(VAR10, true);
    if (!VAR10->VAR16)
    {
        FUN5(1, &VAR10->VAR16);
    }
    FUN6(VAR17, VAR10->VAR16);
    FUN7(VAR17, VAR18, VAR19, VAR10->VAR12, 0);