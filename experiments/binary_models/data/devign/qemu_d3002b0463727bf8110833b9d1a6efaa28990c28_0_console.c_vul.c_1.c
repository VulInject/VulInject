void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    FUN2(VAR2, VAR2->VAR5->VAR6);
    VAR2->VAR7 = FUN3();
    FUN4(&VAR2->VAR7->VAR8, VAR2, VAR9);
    FUN5(VAR2->VAR7);
    if (VAR2->VAR4)
    {
        VAR2->VAR4->VAR10++;
        VAR4 = VAR2->VAR4;
    }
    else
    {
        VAR4 = VAR11;
    }
    if (VAR2->VAR5->VAR12 && VAR4)
    {
        VAR2->VAR5->FUN6(VAR2, VAR4->VAR13);
    }
}