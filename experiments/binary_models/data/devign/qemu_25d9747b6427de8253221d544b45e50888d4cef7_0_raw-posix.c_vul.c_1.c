static int FUN1(const char *VAR1)
{
    int VAR2, VAR3;
    int VAR4 = 0;
    struct floppy_struct VAR5;
    struct stat VAR6;
    if (FUN2(VAR1, "", NULL) && !FUN2(VAR1, "", NULL))
    {
        VAR4 = 50;
    }
    VAR2 = FUN3(VAR1, VAR7 | VAR8);
    if (VAR2 < 0)
    {
        goto VAR9;
    }
    VAR3 = FUN4(VAR2, &VAR6);
    if (VAR3 == -1 || !FUN5(VAR6.VAR10))
    {
        goto VAR11;
    }
    VAR3 = FUN6(VAR2, VAR12, &VAR5);
    if (VAR3 >= 0)
        VAR4 = 100;
VAR11:
    FUN7(VAR2);
VAR9:
    return VAR4;
}