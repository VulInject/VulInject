static void FUN1(const char *VAR1)
{
    char *VAR2;
    VAR3 *VAR4;
    if (!FUN2(VAR1, ""))
    {
        return;
    }
    VAR4 = FUN3(VAR3, 1);
    VAR4->VAR5 = FUN4(VAR1);
    VAR4->VAR6 = "";
    VAR4->VAR7 = FUN5("", VAR4->VAR6, FUN6());
    VAR4->VAR8 = 1;
    VAR4->VAR9 = 3;
    VAR4->VAR10 = 2;
    VAR4->VAR11 = VAR4->VAR8 * VAR4->VAR9 * VAR4->VAR10 * 2;
    if (FUN7(VAR1, "") || (strcmp(VAR1, "") == 0) || (strcmp(VAR1, "") == 0) || (strcmp(VAR1, "") == 0) || (strcmp(VAR1, "") == 0) || (strcmp(VAR1, "") == 0) || (strcmp(VAR1, "") == 0) || (strcmp(VAR1, "") == 0) || (strcmp(VAR1, "") == 0) || (strcmp(VAR1, "") == 0) || (strcmp(VAR1, "") == 0))
    {
        VAR2 = FUN5("", VAR1, VAR4->VAR8, VAR4->VAR9, VAR4->VAR10, VAR4->VAR11);
        FUN8(VAR2, VAR4, VAR12, VAR13);
        FUN9(VAR2);
    }
    else
    {
        VAR3 *VAR14 = FUN10(VAR4, sizeof(VAR3));
        VAR14->VAR5 = FUN4(VAR4->VAR5);
        VAR14->VAR7 = FUN4(VAR4->VAR7);
        VAR2 = FUN5("", VAR1, VAR4->VAR8, VAR4->VAR9, VAR4->VAR10, VAR4->VAR11);
        FUN8(VAR2, VAR4, VAR15, VAR13);
        FUN9(VAR2);
        VAR2 = FUN5("", VAR1, VAR14->VAR8, VAR14->VAR9, VAR14->VAR10, VAR14->VAR11);
        FUN8(VAR2, VAR14, VAR16, VAR13);
        FUN9(VAR2);
    }
}