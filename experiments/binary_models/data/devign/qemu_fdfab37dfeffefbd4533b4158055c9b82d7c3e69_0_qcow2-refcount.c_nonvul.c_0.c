void FUN1(VAR1 *VAR2, uint64_t VAR3, int VAR4, enum qcow2_discard_type VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    switch (FUN2(VAR3))
    {
    case VAR9:
    {
        int VAR10;
        VAR10 = ((VAR3 >> VAR7->VAR11) & VAR7->VAR12) + 1;
        FUN3(VAR2, (VAR3 & VAR7->VAR13) & ~511, VAR10 * 512, VAR5);
    }
    break;
    case VAR14:
    case VAR15:
        if (FUN4(VAR7, VAR3 & VAR16))
        {
            FUN5(VAR2, false, -1, -1, "", VAR3 & VAR16);
        }
        else
        {
            FUN3(VAR2, VAR3 & VAR16, VAR4 << VAR7->VAR17, VAR5);
        }
        break;
    case VAR18:
    case VAR19:
        break;
    default:
        FUN6();
    }
}