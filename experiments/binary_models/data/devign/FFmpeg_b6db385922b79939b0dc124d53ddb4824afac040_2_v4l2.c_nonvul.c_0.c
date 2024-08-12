static void FUN1(VAR1 *VAR2)
{
    struct v4l2_buffer VAR3 = {0};
    int VAR4, VAR5;
    struct VAR6 *VAR7 = VAR2->VAR8;
    if (VAR2->VAR9 == NULL)
        return;
    VAR3.VAR10 = VAR11;
    VAR3.VAR12 = VAR13;
    VAR3.VAR14 = VAR7->VAR14;
    VAR5 = VAR7->VAR5;
    FUN2(VAR7);
    VAR4 = FUN3(VAR5, VAR15, &VAR3);
    if (VAR4 < 0)
        FUN4(NULL, VAR16, "", strerror(VAR17));
    VAR2->VAR9 = NULL;
    VAR2->VAR18 = 0;
}