static int FUN1(const char *VAR1, void *VAR2, ram_addr_t VAR3, ram_addr_t VAR4, void *VAR5)
{
    VAR6 *VAR7 = VAR5;
    struct uffdio_register VAR8;
    VAR8.VAR9.VAR10 = (VAR11)VAR2;
    VAR8.VAR9.VAR12 = VAR4;
    VAR8.VAR13 = VAR14;
    if (FUN2(VAR7->VAR15, VAR16, &VAR8))
    {
        FUN3("", VAR17, strerror(VAR18));
        return 0;