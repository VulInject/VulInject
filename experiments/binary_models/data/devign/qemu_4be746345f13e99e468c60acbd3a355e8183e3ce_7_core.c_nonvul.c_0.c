void FUN1(VAR1 *VAR2)
{
    VAR2->VAR3 = 0;
    VAR2->VAR4 = 0;
    FUN2(&VAR2->VAR5[0]);
    FUN2(&VAR2->VAR5[1]);
    FUN3(VAR2);
    if (VAR2->VAR6->VAR7)
    {
        FUN4("");
        FUN5(VAR2->VAR6->VAR7);
        VAR2->VAR6->VAR7 = NULL;
    }
    if (VAR2->VAR6->VAR8->VAR9)
    {
        VAR2->VAR6->VAR8->FUN6(VAR2->VAR6);
    }
}