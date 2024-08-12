static void FUN1(void *VAR1, target_phys_addr_t VAR2, uint32_t VAR3)
{
    VAR4 *VAR5 = VAR1;
    FUN2(VAR2, VAR3);
    VAR2 >>= 2;
    switch (VAR2)
    {
    case VAR6:
    case VAR7:
    case VAR8:
    case VAR9:
        VAR5->VAR10[VAR2] = VAR3;
        break;
    case VAR11:
        FUN3(VAR5->VAR12, VAR3, 0);
        VAR5->VAR10[VAR2] = VAR3;
        break;
    case VAR13:
        FUN3(VAR5->VAR14, VAR3, 0);
        VAR5->VAR10[VAR2] = VAR3;
        break;
    case VAR15:
        VAR5->VAR10[VAR2] = VAR3;
        if (VAR5->VAR10[VAR15] & VAR16)
        {
            FUN4();
            FUN5(VAR5->VAR12, VAR5->VAR10[VAR11] - VAR5->VAR10[VAR8]);
            FUN6(VAR5->VAR12, 0);
        }
        else
        {
            FUN7();
            FUN8(VAR5->VAR12);
        }
        break;
    case VAR17:
        VAR5->VAR10[VAR2] = VAR3;
        if (VAR5->VAR10[VAR17] & VAR16)
        {
            FUN9();
            FUN5(VAR5->VAR14, VAR5->VAR10[VAR13] - VAR5->VAR10[VAR9]);
            FUN6(VAR5->VAR14, 0);
        }
        else
        {
            FUN10();
            FUN8(VAR5->VAR14);
        }
        break;
    case VAR18:
        FUN11(VAR5, VAR3);
        break;
    case VAR19:
        FUN12();
        break;
    case VAR20:
    case VAR21:
        FUN13("" VAR22, VAR2 << 2);
        break;
    default:
        FUN13("" VAR22, VAR2 << 2);
        break;
    }
}