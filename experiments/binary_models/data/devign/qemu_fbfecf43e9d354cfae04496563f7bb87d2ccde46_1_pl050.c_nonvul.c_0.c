static void FUN1(void *VAR1, hwaddr VAR2, uint64_t VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = (VAR5 *)VAR1;
    switch (VAR2 >> 2)
    {
    case 0:
        VAR6->VAR7 = VAR3;
        FUN2(VAR6, VAR6->VAR8);
        break;
    case 2:
        if (VAR6->VAR9)
        {
            FUN3(VAR6->VAR10, VAR3);
        }
        else
        {
            FUN4(VAR6->VAR10, VAR3);
        }
        break;
    case 3:
        VAR6->VAR11 = VAR3;
        return;
    default:
        FUN5(VAR12, "", (int)VAR2);
    }
}