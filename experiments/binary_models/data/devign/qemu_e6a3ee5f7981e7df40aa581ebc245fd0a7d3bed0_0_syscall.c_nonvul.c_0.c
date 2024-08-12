static int FUN1(void *VAR1, size_t VAR2, uint32_t VAR3)
{
    switch (VAR3 & VAR4)
    {
    case VAR5:
    case VAR6:
        *(VAR7 *)VAR1 = FUN2(*(VAR7 *)VAR1);
        break;
    case VAR8:
    case VAR9:
        *(VAR7 *)VAR1 = FUN2(*(long *)VAR1);
        break;
    case VAR8:
        *(VAR10 *)VAR1 = FUN3(*(long *)VAR1);
    case VAR9:
        *(VAR10 *)VAR1 = FUN3(*(unsigned long *)VAR1);
        break;
    case VAR11:
    case VAR12:
    case VAR13:
        *(VAR10 *)VAR1 = FUN3(*(VAR10 *)VAR1);
        break;
    case VAR14:
        break;
    default:
        return -1;
    }
    return 0;
}