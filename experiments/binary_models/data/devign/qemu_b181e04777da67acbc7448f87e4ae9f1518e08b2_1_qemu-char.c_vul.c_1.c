static VAR1 *FUN1(VAR2 *VAR3)
{
    const char *VAR4 = FUN2(VAR3, "");
    VAR1 *VAR5;
    int VAR6;
    VAR6 = open(VAR4, VAR7);
    if (VAR6 < 0)
        return NULL;
    VAR5 = FUN3(sizeof(VAR1));
    VAR5->VAR8 = (void *)(VAR9)VAR6;
    VAR5->VAR10 = VAR11;
    VAR5->VAR12 = VAR13;
    return VAR5;
}