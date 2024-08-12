static void FUN1(void *VAR1, hwaddr VAR2, uint64_t VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = VAR1;
    int VAR7;
    FUN2("", VAR8, VAR2, VAR3);
    if (VAR2 & 0xF)
        return;
    VAR2 = VAR2 & 0xFFF0;
    VAR7 = VAR2 >> 5;
    if (VAR2 & 0x10)
    {
        FUN3(VAR6, VAR7, VAR3);
    }
    else
    {
        FUN4(VAR6, VAR7, VAR3);
    }
}