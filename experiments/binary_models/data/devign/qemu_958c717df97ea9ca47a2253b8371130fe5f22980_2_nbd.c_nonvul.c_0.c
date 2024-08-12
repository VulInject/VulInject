VAR1 *FUN1(VAR2 *VAR3, int VAR4, void (*close)(VAR1 *))
{
    VAR1 *VAR5;
    VAR5 = FUN2(sizeof(VAR1));
    VAR5->VAR6 = 1;
    VAR5->VAR3 = VAR3;
    VAR5->VAR7 = VAR4;
    VAR5->VAR8 = true;
    if (FUN3(VAR5))
    {
        FUN4(VAR5);
        return NULL;
    }
    VAR5->close = close;
    FUN5(&VAR5->VAR9);
    FUN6(VAR5);
    if (VAR3)
    {
        FUN7(&VAR3->VAR10, VAR5, VAR11);
        FUN8(VAR3);
    }
    return VAR5;
}