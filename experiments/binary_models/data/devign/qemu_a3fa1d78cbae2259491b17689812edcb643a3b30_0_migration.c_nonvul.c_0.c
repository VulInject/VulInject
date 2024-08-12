static void FUN1(VAR1 *VAR2)
{
    if (VAR2->VAR3)
    {
        FUN2("");
        FUN3(VAR2->VAR3);
        VAR2->VAR3 = NULL;
    }
    assert(VAR2->VAR4 == -1);
    assert(VAR2->VAR5 != VAR6);
    if (VAR2->VAR5 != VAR7)
    {
        FUN4();
    }
    FUN5(&VAR8, VAR2);
}