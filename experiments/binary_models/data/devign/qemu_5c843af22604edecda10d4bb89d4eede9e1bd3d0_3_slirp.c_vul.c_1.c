int FUN1(VAR1 *VAR2, const char *VAR3, int *VAR4)
{
    if (strcmp(VAR2->VAR5, "") != 0 || FUN2(VAR3, "", strlen("")) != 0)
    {
        return 0;
    }
    FUN3(""
                 "");
    VAR3 += strlen("");
    if (FUN4(&VAR6))
    {
        struct VAR7 *VAR8;
        VAR8 = FUN5(sizeof(*VAR8));
        FUN6(VAR8->VAR9, sizeof(VAR8->VAR9), VAR3);
        VAR8->VAR10 = VAR11;
        VAR8->VAR12 = VAR13;
        VAR13 = VAR8;
        *VAR4 = 0;
    }
    else
    {
        *VAR4 = FUN7(FUN8(&VAR6), VAR3, 1);
    }
    return 1;
}