static void FUN1(VAR1 *VAR2, int VAR3)
{
    memset(&VAR2->VAR4, 0, sizeof(VAR2->VAR4));
    VAR2->VAR5 = 0;
    VAR2->VAR6 = 1;
    VAR2->VAR7 = 0;
    VAR2->VAR8[0] = 0x40c0;
    VAR2->VAR8[1] = 0x0000;
    FUN2(VAR2);
    FUN3(VAR2->VAR9);
    VAR2->VAR10 = 0x0000;
    VAR2->VAR11 = VAR3 ? 0x8080 : 0x8010;
    VAR2->VAR12[0] = 0;
    VAR2->VAR12[1] = 0;
    VAR2->VAR13 = 0x0002;
    VAR2->VAR14 = 0;
    VAR2->VAR15 = 0;
    VAR2->VAR16 = VAR2->VAR17;
    VAR2->VAR18 = VAR2->VAR19;
    VAR2->VAR20 = VAR2->VAR21;
    if (VAR3)
    {
        memset(VAR2->VAR22, VAR23, VAR2->VAR24);
        if (VAR2->VAR16 && FUN4(VAR2->VAR16, 0, VAR2->VAR25[0], 8) < 0)
        {
            FUN5("", VAR26);
        }
    }
}