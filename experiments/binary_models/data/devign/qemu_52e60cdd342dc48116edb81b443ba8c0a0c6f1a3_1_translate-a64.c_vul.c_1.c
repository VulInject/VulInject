static void FUN1(VAR1 *VAR2, uint32_t VAR3)
{
    unsigned int VAR4, VAR5, VAR6, VAR7, VAR8;
    VAR4 = FUN2(VAR3, 21, 4);
    VAR5 = FUN2(VAR3, 16, 5);
    VAR6 = FUN2(VAR3, 10, 6);
    VAR7 = FUN2(VAR3, 5, 5);
    VAR8 = FUN2(VAR3, 0, 5);
    if (VAR8 != 0x0 || VAR6 != 0x0 || VAR5 != 0x1f)
    {
        FUN3(VAR2);
    }
    switch (VAR4)
    {
    case 0:
    case 2:
        break;
    case 1:
        FUN4(FUN5(VAR2, 30), VAR2->VAR9);
        break;
    case 4:
    case 5:
        if (VAR7 != 0x1f)
        {
            FUN3(VAR2);
        }
        else
        {
            FUN6(VAR2, VAR3);
        }
    default:
        FUN3(VAR2);
    }
    FUN7(VAR10, FUN5(VAR2, VAR7));