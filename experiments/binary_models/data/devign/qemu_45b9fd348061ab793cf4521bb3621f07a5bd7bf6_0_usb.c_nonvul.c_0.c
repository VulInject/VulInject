void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    if (VAR4 != NULL)
    {
        if (VAR2->VAR4)
        {
            FUN1(VAR2, NULL);
        }
        VAR4->VAR2 = VAR2;
        VAR2->VAR4 = VAR4;
        VAR2->VAR5->FUN2(VAR2);
        FUN3(VAR4, VAR6);
    }
    else
    {
        VAR4 = VAR2->VAR4;
        assert(VAR4);
        VAR2->VAR5->FUN4(VAR2);
        FUN3(VAR4, VAR7);
        VAR4->VAR2 = NULL;
        VAR2->VAR4 = NULL;
    }
}