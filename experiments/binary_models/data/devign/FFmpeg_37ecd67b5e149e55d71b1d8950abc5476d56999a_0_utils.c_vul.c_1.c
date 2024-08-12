void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    FUN2(VAR2->VAR5 > 0);
    FUN2(VAR2->VAR6[VAR2->VAR5 - 1] == VAR4);
    if (VAR4->VAR7)
    {
        FUN3(VAR4->VAR7);
    }
    if (VAR4->VAR8)
    {
        FUN4(VAR4->VAR8);
    }
    if (VAR4->VAR9.VAR10)
        FUN5(&VAR4->VAR9);
    FUN6(&VAR4->VAR11);
    FUN7(&VAR4->VAR12.VAR13);
    FUN7(&VAR4->VAR14);
    FUN7(&VAR4->VAR7->VAR15);
    FUN7(&VAR4->VAR7->VAR16);
    FUN7(&VAR4->VAR7);
    FUN7(&VAR4->VAR17);
    if (VAR4->VAR18)
        FUN7(&VAR4->VAR18->VAR19);
    FUN7(&VAR4->VAR18);
    FUN7(&VAR2->VAR6[--VAR2->VAR5]);
}