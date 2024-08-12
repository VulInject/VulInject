static void FUN1(VAR1 *VAR2)
{
    uint32_t VAR3 = FUN2(VAR2);
    uint32_t VAR4;
    uint32_t VAR5;
    VAR4 = 0xfffffff1;
    if (VAR2->VAR6.VAR7)
        VAR4 |= 4;
    if (VAR2->VAR6.VAR8 == 0)
        VAR4 |= 8;
    switch (VAR2->VAR9)
    {
    case VAR10:
        FUN3(VAR2->VAR11, VAR12);
        return;
    case VAR13:
        VAR2->VAR14[15] += 2;
        FUN3(VAR2->VAR11, VAR15);
        return;
    case VAR16:
    case VAR17:
        FUN3(VAR2->VAR11, VAR18);
        return;
    case VAR19:
        if (VAR20)
        {
            int VAR21;
            VAR21 = FUN4(VAR2->VAR14[15]) & 0xff;
            if (VAR21 == 0xab)
            {
                VAR2->VAR14[15] += 2;
                VAR2->VAR14[0] = FUN5(VAR2);
                return;
            }
        }
        FUN3(VAR2->VAR11, VAR22);
        return;
    case VAR23:
        VAR2->VAR6.VAR8 = FUN6(VAR2->VAR11);
        break;
    case VAR24:
        FUN7(VAR2);
        return;
    default:
        FUN8(VAR2, "", VAR2->VAR9);
        return;
    }
    if (VAR2->VAR14[13] & 4)
    {
        VAR2->VAR14[13] -= 4;
        VAR3 |= 0x200;
    }
    FUN9(VAR2, VAR3);
    FUN9(VAR2, VAR2->VAR14[15]);
    FUN9(VAR2, VAR2->VAR14[14]);
    FUN9(VAR2, VAR2->VAR14[12]);
    FUN9(VAR2, VAR2->VAR14[3]);
    FUN9(VAR2, VAR2->VAR14[2]);
    FUN9(VAR2, VAR2->VAR14[1]);
    FUN9(VAR2, VAR2->VAR14[0]);
    FUN10(VAR2, 0);
    VAR2->VAR25 = 0;
    VAR2->VAR14[14] = VAR4;
    VAR5 = FUN11(VAR2->VAR6.VAR26 + VAR2->VAR6.VAR8 * 4);
    VAR2->VAR14[15] = VAR5 & 0xfffffffe;
    VAR2->VAR27 = VAR5 & 1;
}