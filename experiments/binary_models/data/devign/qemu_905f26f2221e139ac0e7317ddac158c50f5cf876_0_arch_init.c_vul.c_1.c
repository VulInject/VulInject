static int FUN1(VAR1 *VAR2, ram_addr_t VAR3, void *VAR4)
{
    int VAR5, VAR6 = 0;
    unsigned int VAR7;
    int VAR8;
    if (!VAR9.VAR10)
    {
        VAR9.VAR10 = FUN2(VAR11);
    }
    VAR8 = FUN3(VAR2);
    VAR7 = FUN4(VAR2);
    if (VAR8 != VAR12)
    {
        fprintf(VAR13, "");
        return -1;
    }
    if (VAR7 > VAR11)
    {
        fprintf(VAR13, "");
        return -1;
    }
    FUN5(VAR2, VAR9.VAR10, VAR7);
    VAR5 = FUN6(VAR9.VAR10, VAR7, VAR4, VAR11);
    if (VAR5 == -1)
    {
        fprintf(VAR13, "");
        VAR6 = -1;
    }
    else if (VAR5 > VAR11)
    {
        fprintf(VAR13, "", VAR5, VAR11);
        FUN7();
    }
    return VAR6;
}