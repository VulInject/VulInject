int FUN1(VAR1 *VAR2, target_ulong VAR3, int VAR4, int VAR5, int VAR6)
{
    VAR2->VAR7 = VAR3;
    VAR2->VAR8 = -1;
    switch (VAR4)
    {
    case 0:
        VAR2->VAR8 = 0x0a0;
        break;
    case 1:
        VAR2->VAR8 = 0x0c0;
        break;
    case 2:
        VAR2->VAR8 = 0x0a0;
        break;
    }
    return 1;
}