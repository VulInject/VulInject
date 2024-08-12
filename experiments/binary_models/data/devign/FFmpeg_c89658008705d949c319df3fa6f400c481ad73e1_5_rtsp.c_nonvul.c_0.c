static void FUN1(VAR1 *VAR2, void *VAR3, char *VAR4, char *VAR5)
{
    switch (VAR2->VAR6)
    {
    case VAR7:
    case VAR8:
        if (!strcmp(VAR4, ""))
        {
            int VAR9 = FUN2(NULL, VAR5);
            if (VAR2->VAR10)
                FUN3(VAR2->VAR10);
            VAR2->VAR10 = FUN4(VAR9 + VAR11);
            if (!VAR2->VAR10)
                return;
            VAR2->VAR12 = VAR9;
            FUN2(VAR2->VAR10, VAR5);
        }
        break;
    case VAR13:
        FUN5(VAR2, VAR3, VAR4, VAR5);
        break;
    default:
        break;
    }
    return;
}