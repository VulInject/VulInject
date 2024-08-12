static void FUN1(void *VAR1, hwaddr VAR2, uint64_t VAR3, unsigned int VAR4)
{
    VAR5 *VAR6 = VAR1;
    VAR7 *VAR8 = FUN2(VAR6);
    switch (VAR2)
    {
    case 0:
        FUN3(VAR1, 0, (VAR9)VAR3);
        break;
    case 4:
        if (VAR3 == 1)
        {
            FUN4(VAR8->VAR10, VAR11);
            FUN5(VAR8->VAR10);
        }
        break;
    case 8:
        switch (VAR3)
        {
        case 1:
            FUN4(VAR8->VAR10, VAR11);
            break;
        case 2:
            FUN5(VAR8->VAR10);
            break;
        default:
            FUN6(VAR6, (VAR9)VAR3);
            break;
        }
        break;
    default:
        break;
    }
}