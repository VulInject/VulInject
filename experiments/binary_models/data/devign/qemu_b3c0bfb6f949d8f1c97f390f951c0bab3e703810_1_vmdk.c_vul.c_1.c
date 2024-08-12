static int FUN1(VAR1 *VAR2, int VAR3, int64_t VAR4)
{
    int VAR5;
    char VAR6[2048];
    char VAR7[128];
    VAR8 *VAR9 = VAR2->VAR10;
    VAR5 = FUN2(VAR2->VAR11, VAR4, VAR6, sizeof(VAR6));
    if (VAR5 < 0)
    {
        return VAR5;
    }
    VAR6[2047] = '';
    if (FUN3(VAR6, "", VAR7, sizeof(VAR7)))
    {
        return -VAR12;
    }
    if (strcmp(VAR7, "") && strcmp(VAR7, "") && strcmp(VAR7, ""))
    {
        fprintf(VAR13, ""%VAR9\""
                        "",
                VAR7);
        return -VAR14;
    }
    VAR9->VAR4 = 0;
    VAR5 = FUN4(VAR6, VAR2, VAR2->VAR11->VAR15);
    if (VAR5)
    {
        return VAR5;
    }
    if (FUN5(VAR2))
    {
        FUN6(VAR9->VAR16);
        return -VAR12;
    }
    VAR9->VAR17 = FUN7(VAR2, 1);
    return 0;
}