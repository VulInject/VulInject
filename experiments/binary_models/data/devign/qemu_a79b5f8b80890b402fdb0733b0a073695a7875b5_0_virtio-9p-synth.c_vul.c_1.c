static VAR1 *FUN1(VAR1 *VAR2, int VAR3, const char *VAR4, VAR5 *VAR6, int VAR7)
{
    VAR1 *VAR8;
    VAR3 = ((VAR3 & 0777) | VAR9) & ~(VAR10 | VAR11 | VAR12);
    VAR8 = FUN2(sizeof(VAR1));
    if (VAR6)
    {
        VAR8->VAR6 = VAR6;
        VAR8->VAR6->VAR13++;
    }
    else
    {
        VAR8->VAR6 = &VAR8->VAR14;
        VAR8->VAR6->VAR7 = VAR7;
        VAR8->VAR6->VAR13 = 1;
        VAR8->VAR6->VAR3 = VAR3;
        VAR8->VAR6->write = NULL;
        VAR8->VAR6->read = NULL;
    }
    VAR8->private = VAR8;
    strncpy(VAR8->VAR4, VAR4, sizeof(VAR8->VAR4));
    FUN3(&VAR2->VAR15, VAR8, VAR16);
    return VAR8;
}