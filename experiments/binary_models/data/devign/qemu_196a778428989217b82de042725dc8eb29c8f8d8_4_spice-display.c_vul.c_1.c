void FUN1(void *VAR1, int VAR2, int VAR3)
{
    VAR4 *VAR5 = VAR1;
    if (VAR2)
    {
        VAR5->VAR6->FUN2(VAR5->VAR6);
    }
    else
    {
        FUN3();
        VAR5->VAR6->FUN4(VAR5->VAR6);
        FUN5();
    }
    VAR5->VAR2 = VAR2;
}