static void FUN1(VAR1 *VAR2, char *VAR3, char *VAR4)
{
    switch (VAR2->VAR5)
    {
    case VAR6:
    case VAR7:
        if (!strcmp(VAR3, ""))
        {
            int VAR8 = FUN2(NULL, VAR4);
            VAR2->VAR9 = FUN3(VAR8 + VAR10);
            if (!VAR2->VAR9)
                return;
            VAR2->VAR11 = VAR8;
            FUN2(VAR2->VAR9, VAR4);
        }
        break;
    default:
        break;
    }
    return;