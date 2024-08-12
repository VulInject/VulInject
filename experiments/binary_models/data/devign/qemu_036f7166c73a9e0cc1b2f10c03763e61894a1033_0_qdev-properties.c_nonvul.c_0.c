int FUN1(VAR1 *VAR2, const char *VAR3, const char *VAR4)
{
    VAR5 *VAR6;
    int VAR7;
    VAR6 = FUN2(VAR2, VAR3);
    if (!VAR6 || !VAR6->VAR8->VAR9)
    {
        fprintf(VAR10, ""%VAR11.%VAR11\"", VAR2->VAR8->VAR3, VAR3);
        return -1;
    }
    VAR7 = VAR6->VAR8->FUN3(VAR2, VAR6, VAR4);
    if (VAR7 < 0)
    {
        switch (VAR7)
        {
        case -VAR12:
            fprintf(VAR10, ""%VAR11.%VAR11\""%VAR11\"", VAR2->VAR8->VAR3, VAR3, VAR4);
            break;
        default:
        case -VAR13:
            fprintf(VAR10, ""%VAR11.%VAR11\""%VAR11\"", VAR2->VAR8->VAR3, VAR3, VAR4);
            break;
        case -VAR14:
            fprintf(VAR10, ""%VAR11.%VAR11\""%VAR11\"", VAR2->VAR8->VAR3, VAR3, VAR4);
            break;
        }
        return -1;
    }
    return 0;
}