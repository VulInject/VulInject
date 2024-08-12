static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    int VAR7;
    int VAR8 = FUN2(VAR2, VAR4->VAR9);
    VAR2->VAR10[VAR8].VAR11 = true;
    FUN3();
    VAR2->VAR10[VAR8].VAR11 = false;
    if (!VAR2->VAR12 || VAR2->VAR13)
    {
        VAR7 = -VAR14;
    }
    else
    {
        assert(VAR2->VAR15.VAR9 == VAR4->VAR9);
        VAR7 = -VAR2->VAR15.VAR16;
        if (VAR6 && VAR2->VAR15.VAR16 == 0)
        {
            assert(VAR4->VAR17 == FUN4(VAR6->VAR18, VAR6->VAR19));
            if (FUN5(VAR2->VAR12, VAR6->VAR18, VAR6->VAR19, NULL) < 0)
            {
                VAR7 = -VAR14;
                VAR2->VAR13 = true;
            }
        }
        VAR2->VAR15.VAR9 = 0;
    }
    VAR2->VAR10[VAR8].VAR20 = NULL;
    if (VAR2->VAR21)
    {
        FUN6(VAR2->VAR21);
    }
    FUN7(&VAR2->VAR22);
    VAR2->VAR23--;
    FUN8(&VAR2->VAR24);
    FUN9(&VAR2->VAR22);
    return VAR7;
}