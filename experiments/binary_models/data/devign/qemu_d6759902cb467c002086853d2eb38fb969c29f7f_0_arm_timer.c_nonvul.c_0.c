static void FUN1(void *VAR1, target_phys_addr_t VAR2, uint32_t VAR3)
{
    VAR4 *VAR5 = (VAR4 *)VAR1;
    int VAR6;
    switch (VAR2 >> 2)
    {
    case 0:
        VAR5->VAR7 = VAR3;
        FUN2(VAR5, 1);
        break;
    case 1:
        break;
    case 2:
        if (VAR5->VAR8 & VAR9)
        {
            FUN3(VAR5->VAR10);
        }
        VAR5->VAR8 = VAR3;
        VAR6 = VAR5->VAR6;
        switch ((VAR3 >> 2) & 3)
        {
        case 1:
            VAR6 >>= 4;
            break;
        case 2:
            VAR6 >>= 8;
            break;
        }
        FUN2(VAR5, VAR5->VAR8 & VAR9);
        FUN4(VAR5->VAR10, VAR6);
        if (VAR5->VAR8 & VAR9)
        {
            FUN5(VAR5->VAR10, (VAR5->VAR8 & VAR11) != 0);
        }
        break;
    case 3:
        VAR5->VAR12 = 0;
        break;
    case 6:
        VAR5->VAR7 = VAR3;
        FUN2(VAR5, 0);
        break;
    default:
        FUN6("", (int)VAR2);
    }
    FUN7(VAR5);
}