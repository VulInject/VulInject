void FUN1(VAR1 *VAR2)
{
    if (VAR2->VAR3)
    {
        if (VAR2->VAR4)
            FUN2(VAR2->VAR4);
        VAR2->VAR3->FUN1(VAR2);
        FUN3(VAR2->VAR5);
        if (VAR2->VAR6)
        {
            unlink(VAR2->VAR7);
        }
        VAR2->VAR5 = NULL;
        VAR2->VAR3 = NULL;
        VAR2->VAR8 = 0;
        VAR2->VAR9 = 1;
        if (VAR2->VAR10)
            VAR2->FUN4(VAR2->VAR11);
    }
}