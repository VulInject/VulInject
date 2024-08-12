static void FUN1(void *VAR1, hwaddr VAR2, uint64_t VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = VAR1;
    int VAR7;
    FUN2("" VAR8 "" VAR9 "", VAR10, VAR2, VAR3);
    VAR2 = VAR2 & 0xffff;
    VAR7 = VAR2 >> 5;
    switch (VAR2 & 0x1f)
    {
    case 0x00:
        FUN3(VAR6, VAR7, VAR3);
        break;
    case 0x10:
        FUN4(VAR6, VAR7, VAR3);
        break;
    case 0x18:
        FUN5(VAR6, VAR7, VAR3);
        break;
    }
}