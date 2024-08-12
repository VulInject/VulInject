static void FUN1(VAR1 *VAR2, int VAR3)
{
    switch (VAR3)
    {
    case 1:
        if (!(FUN2(VAR2->VAR4.VAR5) & VAR6))
        {
            FUN3(VAR2, VAR2->VAR7);
            VAR2->VAR4.VAR8 = VAR9;
        }
        break;
    case 3:
        FUN3(VAR2, VAR2->VAR7);
        VAR2->VAR4.VAR8 = VAR10;
        break;
    case 2:
        if (!(FUN2(VAR2->VAR4.VAR5) & VAR6))
        {
            FUN3(VAR2, VAR2->VAR7);
            VAR2->VAR4.VAR8 = VAR11;
        }
        break;
    case 4:
    case 5:
    default:
        break;
    }
}