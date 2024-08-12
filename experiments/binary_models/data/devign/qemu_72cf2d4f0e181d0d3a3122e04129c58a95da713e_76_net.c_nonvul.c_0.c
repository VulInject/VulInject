void FUN1(VAR1 *VAR2)
{
    while (!FUN2(&VAR2->VAR3->VAR4))
    {
        VAR5 *VAR6;
        int VAR7;
        VAR6 = FUN3(&VAR2->VAR3->VAR4);
        FUN4(&VAR2->VAR3->VAR4, VAR6, VAR8);
        VAR7 = FUN5(VAR6->VAR9, VAR6->VAR10, VAR6->VAR11);
        if (VAR7 == 0 && VAR6->VAR12 != NULL)
        {
            FUN6(&VAR2->VAR3->VAR4, VAR6, VAR8);
            break;
        }
        if (VAR6->VAR12)
            VAR6->FUN7(VAR6->VAR9, VAR7);
        FUN8(VAR6);
    }
}