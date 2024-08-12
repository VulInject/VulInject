void FUN1(struct VAR1 *VAR2)
{
    int VAR3;
    for (VAR3 = 0; VAR3 < VAR2->VAR4; ++VAR3)
    {
        FUN2(VAR2->VAR5 + VAR3);
    }
    FUN3(&VAR2->VAR6);
    if (VAR2->VAR7)
    {
        FUN4(VAR2->VAR7);
        FUN5(VAR2->VAR7);
    }
    FUN6(VAR2->VAR8);
    FUN6(VAR2->VAR9);
    VAR2->VAR10->FUN7(VAR2);