static void FUN1(void *VAR1, hwaddr VAR2, uint64_t VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = VAR1;
    char *VAR7;
    FUN2(VAR2, VAR3);
    VAR2 >>= 2;
    switch (VAR2)
    {
    case VAR8:
        FUN3();
        break;
    case VAR9:
        VAR6->VAR10[VAR2] = VAR3;
        VAR7 = (char *)VAR6->VAR7;
        FUN4("", VAR11, VAR7, (VAR3) ? "" : "");
        break;
    case VAR12:
        VAR6->VAR10[VAR2] = VAR3;
        FUN5(VAR6);
        break;
    default:
        FUN6("" VAR13, VAR2 << 2);
        break;
    }
}