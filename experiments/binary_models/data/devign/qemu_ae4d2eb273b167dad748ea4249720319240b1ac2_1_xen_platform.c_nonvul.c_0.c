static void FUN1(void *VAR1, uint32_t VAR2, uint32_t VAR3)
{
    VAR4 *VAR5 = VAR1;
    switch (VAR2)
    {
    case 0:
    {
        VAR6 *VAR7 = FUN2(VAR5);
        if (VAR3 & (VAR8 | VAR9))
        {
            FUN3("");
            FUN4(VAR7->VAR10, VAR3);
        }
        if (VAR3 & VAR11)
        {
            FUN3("");
            FUN5(VAR7->VAR10);
        }
        break;
    }
    case 2:
        switch (VAR3)
        {
        case 1:
            FUN3("");
            break;
        case 0:
            FUN3("");
            break;
        default:
            FUN3("", VAR3);
            break;
        }
        VAR5->VAR12 = VAR3;
        break;
    }
}