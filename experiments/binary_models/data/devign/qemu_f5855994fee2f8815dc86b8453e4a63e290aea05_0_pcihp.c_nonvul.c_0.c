static void FUN1(void *VAR1, hwaddr VAR2, uint64_t VAR3, unsigned int VAR4)
{
    VAR5 *VAR6 = VAR1;
    switch (VAR2)
    {
    case VAR7:
        if (VAR6->VAR8 >= VAR9)
        {
            break;
        }
        FUN2(VAR6, VAR6->VAR8, VAR3);
        FUN3("" VAR10 "" VAR11 "", VAR2, VAR3);
        break;
    case VAR12:
        VAR6->VAR8 = VAR6->VAR13 ? VAR14 : VAR3;
        FUN3("" VAR10 "" VAR11 "", VAR2, VAR3);
    default:
        break;
    }
}