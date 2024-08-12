static void FUN1(VAR1 *VAR2, VAR1 *VAR3, const char *VAR4)
{
    VAR5 *VAR6 = VAR3->VAR7;
    VAR8 *VAR9 = VAR3->VAR9;
    char *VAR10 = NULL;
    if (VAR4 == NULL)
    {
        VAR10 = FUN2("", "", VAR11);
        VAR4 = VAR10;
    }
    FUN3(VAR2->VAR7, VAR3->VAR7, VAR4);
    memcpy(VAR3, VAR2, sizeof(VAR1));
    VAR3->VAR7 = VAR6;
    VAR3->VAR9 = VAR9;
    VAR6 = VAR2->VAR7;
    VAR9 = VAR2->VAR9;
    memset(VAR2, 0x00, sizeof(VAR1));
    VAR2->VAR7 = VAR6;
    VAR2->VAR9 = VAR9;
    FUN4(VAR3);
    FUN5(VAR10);
}