int FUN1(VAR1 *VAR2, const char *VAR3)
{
    VAR2->VAR4 = FUN2(VAR5, VAR3);
    if (VAR2->VAR4 == -1)
    {
        FUN3("");
        goto VAR6;
    }
    if (FUN4(VAR2->VAR4, VAR7, VAR8) == -1)
    {
        FUN3("");
        goto VAR9;
    }
    VAR2->VAR10 = VAR11;
    VAR2->write = VAR12;
    VAR2->close = VAR13;
    FUN5(VAR2);
    return 0;
VAR9:
    close(VAR2->VAR4);
VAR6:
    return -1;
}