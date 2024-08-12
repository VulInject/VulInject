static VAR1 FUN1(void *VAR2, hwaddr VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = VAR2;
    uint32_t VAR7;
    switch (VAR3)
    {
    case VAR8:
        VAR7 = FUN2(VAR6);
        break;
    case VAR9:
        VAR7 = FUN3(VAR6);
        break;
    case VAR10:
        if (VAR6->VAR11 >= 0)
        {
            VAR7 = VAR6->VAR12;
        }
        else
        {
            VAR7 = -1;
        }
        break;
    default:
        FUN4("" VAR13 "", VAR3);
        VAR7 = 0;
    }
    return VAR7;
}