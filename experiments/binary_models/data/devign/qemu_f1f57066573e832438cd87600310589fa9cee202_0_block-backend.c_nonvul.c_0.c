void FUN1(VAR1 *VAR2, bool VAR3)
{
    if (VAR2->VAR4 && VAR2->VAR4->VAR5)
    {
        bool VAR6, VAR7;
        VAR6 = FUN2(VAR2);
        VAR2->VAR4->FUN3(VAR2->VAR8, VAR3);
        VAR7 = FUN2(VAR2);
        if (VAR6 != VAR7)
        {
            FUN4(FUN5(VAR2), VAR7, &VAR9);
        }
    }
}