static int FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = FUN2(FUN3(FUN4(FUN5(FUN6(VAR2)))));
    int VAR6;
    if (VAR5->VAR7)
    {
        VAR6 = 0x0;
        switch (FUN7(VAR2->VAR8))
        {
        case 1:
            return 0x21;
        case 3:
            return 0x20;
        default:
            break;
        }
    }
    else
    {
        VAR6 = 0x10;
    }
    return (VAR6 + (FUN7(VAR2->VAR8) << 2) + VAR3) & 0x1f;
}