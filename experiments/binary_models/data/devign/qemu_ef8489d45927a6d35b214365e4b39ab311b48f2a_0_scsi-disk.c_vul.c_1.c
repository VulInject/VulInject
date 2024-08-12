static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR3, VAR2, VAR2);
    VAR5 *VAR6 = FUN2(VAR5, VAR7, VAR4->VAR2.VAR8);
    uint32_t VAR9;
    assert(VAR4->VAR2.VAR10 == NULL);
    FUN3(&VAR4->VAR2);
    if (VAR4->VAR2.VAR11.VAR12 != VAR13)
    {
        FUN4("");
        FUN5(VAR4, -VAR14);
        return;
    }
    if (!VAR4->VAR2.VAR15 && !VAR4->VAR16.VAR17)
    {
        VAR4->VAR18 = true;
        FUN5(VAR4, 0);
        return;
    }
    if (VAR6->VAR19)
    {
        FUN5(VAR4, -VAR20);
        return;
    }
    if (VAR4->VAR2.VAR11.VAR21[0] == VAR22 || VAR4->VAR2.VAR11.VAR21[0] == VAR23 || VAR4->VAR2.VAR11.VAR21[0] == VAR24)
    {
        if (VAR4->VAR2.VAR15)
        {
            FUN6(VAR4, 0);
        }
        else
        {
            FUN5(VAR4, 0);
        }
        return;
    }
    if (VAR4->VAR2.VAR15)
    {
        FUN7(VAR6->VAR7.VAR25.VAR26, &VAR4->VAR27, VAR4->VAR2.VAR15, VAR28);
        VAR4->VAR2.VAR29 -= VAR4->VAR2.VAR15->VAR17;
        VAR4->VAR2.VAR10 = FUN8(VAR6->VAR7.VAR25.VAR26, VAR4->VAR2.VAR15, VAR4->VAR30, VAR31, VAR4);
    }
    else
    {
        VAR9 = VAR4->VAR16.VAR17 / 512;
        FUN9(VAR6->VAR7.VAR25.VAR26, &VAR4->VAR27, VAR9 * VAR32, VAR28);
        VAR4->VAR2.VAR10 = FUN10(VAR6->VAR7.VAR25.VAR26, VAR4->VAR30, &VAR4->VAR16, VAR9, VAR33, VAR4);
    }
}