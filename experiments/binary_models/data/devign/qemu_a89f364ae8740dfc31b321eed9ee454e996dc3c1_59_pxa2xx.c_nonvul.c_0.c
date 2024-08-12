static void FUN1(void *VAR1, hwaddr VAR2, uint64_t VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = (VAR5 *)VAR1;
    switch (VAR2)
    {
    case VAR7 ... VAR8:
        if ((VAR2 & 3) == 0)
        {
            VAR6->VAR9[VAR2 >> 2] = VAR3;
            break;
        }
    default:
        FUN2("" VAR10 "", VAR11, VAR2);
        break;
    }
}