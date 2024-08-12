void FUN1(VAR1 *VAR2, const char *VAR3, void *VAR4)
{
    VAR5 *VAR6, *VAR7;
    char VAR8[256] = "";
    if (VAR2 && VAR2->VAR9 && VAR2->VAR9->VAR10->VAR11)
    {
        char *VAR12 = VAR2->VAR9->VAR10->FUN2(VAR2);
        if (VAR12)
        {
            FUN3(VAR8, sizeof(VAR8), VAR12);
            FUN4(VAR8, sizeof(VAR8), "");
            FUN5(VAR12);
            FUN4(VAR8, sizeof(VAR8), VAR3);
            FUN6(VAR6, &VAR13, VAR14, VAR7)
            {
                if (strcmp(VAR6->VAR3, VAR8) == 0 && VAR6->VAR4 == VAR4)
                {
                    FUN7(&VAR13, VAR6, VAR14);
                    FUN5(VAR6);