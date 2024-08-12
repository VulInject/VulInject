static int FUN1(VAR1 *VAR2)
{
    struct VAR3 *VAR4 = VAR2->VAR5;
    enum v4l2_buf_type VAR6;
    int VAR7, VAR8;
    for (VAR7 = 0; VAR7 < VAR4->VAR9; VAR7++)
    {
        struct v4l2_buffer VAR10 = {.VAR6 = VAR11, .VAR12 = VAR7, .VAR13 = VAR14};
        VAR8 = FUN2(VAR4->VAR15, VAR16, &VAR10);
        if (VAR8 < 0)
        {
            FUN3(VAR2, VAR17, "", strerror(VAR18));
            return FUN4(VAR18);
        }
    }
    VAR6 = VAR11;
    VAR8 = FUN2(VAR4->VAR15, VAR19, &VAR6);
    if (VAR8 < 0)
    {
        FUN3(VAR2, VAR17, "", strerror(VAR18));
        return FUN4(VAR18);
    }
    return 0;
}