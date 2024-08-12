static int FUN1(int VAR1, const char *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6;
    VAR5 = FUN2(VAR1, VAR2, VAR7 | VAR8);
    if (VAR5 < 0)
    {
        return VAR5;
    }
    VAR6 = FUN3(VAR5, VAR4->VAR9 & 07777);
    if (VAR6 < 0)
    {
        goto VAR10;
    }
    VAR6 = FUN4(VAR5, "", VAR4->VAR11, VAR4->VAR12, VAR13);
VAR10:
    close(VAR5);
    return VAR6;
}