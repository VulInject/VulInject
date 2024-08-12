void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    Location VAR5;
    VAR6 *VAR7;
    int VAR8;
    VAR3 *VAR9 = NULL;
    FUN2(&VAR5);
    for (VAR8 = 0; VAR8 <= VAR2->VAR10->VAR11; VAR8++)
    {
        VAR7 = FUN3(VAR12, VAR2->VAR13, VAR8);
        if (VAR7 == NULL)
        {
            continue;
        }
        FUN4(VAR7->VAR14);
        FUN5(VAR2, FUN6(VAR7), VAR8, false, -1, NULL, &VAR9);
        if (VAR9 != NULL)
        {
            FUN7("", FUN8(VAR9));
            FUN9(VAR4, VAR9);
            break;
        }
    }
    FUN10(&VAR5);
}