int FUN1(VAR1 *VAR2, int VAR3, int64_t VAR4, int64_t VAR5)
{
    int VAR6 = FUN2(VAR2, VAR3, VAR4, VAR5);
    if (VAR6 < 0)
    {
        return VAR6;
    }
    else if (VAR6 > 0)
    {
        int VAR7 = FUN3(VAR6) - 1;
        char *VAR8;
        assert(VAR7 < VAR9);
        fprintf(VAR10, ""
                        "",
                VAR11[VAR7]);
        VAR8 = FUN4("", VAR11[VAR7]);
        FUN5(FUN6(VAR2), VAR8, true, VAR4, true, VAR5, true, &VAR12);
        FUN7(VAR8);
        FUN8(VAR2);
        VAR2->VAR13 = NULL;
        return -VAR14;
    }
    return 0;
}