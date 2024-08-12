static int FUN1(VAR1 *VAR2, uint32_t VAR3)
{
    int VAR4 = -VAR5;
    char VAR6[VAR7 + 1];
    FUN2("");
    if (VAR3 >= sizeof(VAR6))
    {
        FUN3("");
        goto VAR8;
    }
    if (FUN4(VAR2->VAR9, VAR6, VAR3) != VAR3)
    {
        FUN3("");
        goto VAR8;
    }
    VAR6[VAR3] = '';
    FUN2("", VAR6);
    VAR2->VAR10 = FUN5(VAR6);
    if (!VAR2->VAR10)
    {
        FUN3("");
        goto VAR8;
    }
    FUN6(&VAR2->VAR10->VAR11, VAR2, VAR12);
    FUN7(VAR2->VAR10);
    VAR4 = 0;
VAR8:
    return VAR4;
}