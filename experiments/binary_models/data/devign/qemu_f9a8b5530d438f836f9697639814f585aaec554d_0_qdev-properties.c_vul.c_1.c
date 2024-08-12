static void FUN1(VAR1 *VAR2, const char *typename)
{
    VAR3 *VAR4;
    FUN2(VAR4, &VAR5, VAR6)
    {
        VAR7 *VAR8 = NULL;
        if (strcmp(typename, VAR4->VAR9) != 0)
        {
            continue;
        }
        VAR4->VAR10 = true;
        FUN3(FUN4(VAR2), VAR4->VAR11, VAR4->VAR12, &VAR8);
        if (VAR8 != NULL)
        {
            assert(VAR4->VAR13);
            FUN5(VAR8, "", VAR4->VAR9, VAR4->VAR12, VAR4->VAR11);
            return;
        }
    }
}