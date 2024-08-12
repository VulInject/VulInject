static void FUN1(VAR1 *VAR2, uint32_t VAR3)
{
    uint32_t VAR4;
    uint32_t VAR5 = FUN2(VAR3);
    FUN3(VAR2->VAR6, VAR3);
    assert(FUN4(&VAR2->VAR7));
    VAR4 = FUN5(&VAR2->VAR8->VAR9, VAR5);
    if ((VAR4 & VAR5) == VAR5)
    {
        return;
    }
    if (FUN6(&VAR2->main))
    {
        FUN7(VAR2);
    }
    else
    {
        if (write(VAR2->VAR10[1], VAR2, 1) != 1)
        {
            FUN8(VAR2, 1, "", VAR11);
        }
    }
}