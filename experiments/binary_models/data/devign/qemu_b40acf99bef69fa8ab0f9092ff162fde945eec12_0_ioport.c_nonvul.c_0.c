void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    unsigned VAR5;
    for (VAR5 = 0; VAR5 < VAR2->VAR6; ++VAR5)
    {
        VAR4 = FUN2(VAR2->VAR7[VAR5], VAR3, VAR8);
        FUN3(VAR2->VAR9, &VAR4->VAR8);
        FUN4(&VAR4->VAR8);
        FUN5(VAR4);
        VAR2->VAR7[VAR5] = NULL;
    }
}