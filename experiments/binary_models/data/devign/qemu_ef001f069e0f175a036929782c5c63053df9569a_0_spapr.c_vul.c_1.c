static int FUN1(VAR1 *VAR2, void *VAR3)
{
    VAR4 *VAR5 = FUN2(VAR2);
    int VAR6, VAR7, VAR8;
    uint64_t VAR9 = VAR10;
    uint32_t VAR11[] = {0, FUN3(VAR9)};
    uint32_t VAR12 = (VAR5->VAR13 - VAR5->VAR14) / VAR9;
    VAR15 *VAR16, *VAR17, VAR18;
    int VAR19 = VAR20 ? VAR20 : 1;
    VAR18 = VAR12 * VAR21 * sizeof(VAR15) + sizeof(VAR15);
    VAR17 = VAR16 = FUN4(VAR18);
    VAR8 = FUN5(VAR3, 0, "");
    VAR6 = FUN6(VAR3, VAR8, "", VAR11, sizeof(VAR11));
    if (VAR6 < 0)
    {
        goto VAR22;
    }
    VAR6 = FUN7(VAR3, VAR8, "", 0xff);
    if (VAR6 < 0)
    {
        goto VAR22;
    }
    VAR6 = FUN7(VAR3, VAR8, "", 0x0);
    if (VAR6 < 0)
    {
        goto VAR22;
    }
    VAR16[0] = FUN3(VAR12);
    VAR17++;
    for (VAR7 = 0; VAR7 < VAR12; VAR7++)
    {
        VAR23 *VAR24;
        VAR25 *VAR26;
        uint64_t VAR27 = VAR7 * VAR9 + VAR2->VAR28.VAR29;
        ;
        VAR15 *VAR30 = VAR17;
        VAR24 = FUN8(VAR31, VAR27 / VAR9);
        FUN9(VAR24);
        VAR26 = FUN10(VAR24);
        VAR30[0] = FUN3(VAR27 >> 32);
        VAR30[1] = FUN3(VAR27 & 0xffffffff);
        VAR30[2] = FUN3(VAR26->FUN11(VAR24));
        VAR30[3] = FUN3(0);
        VAR30[4] = FUN3(FUN12(VAR27, NULL));
        if (VAR27 < VAR5->VAR14 || FUN13(FUN14(), VAR27))
        {
            VAR30[5] = FUN3(VAR32);
        }
        else
        {
            VAR30[5] = FUN3(0);
        }
        VAR17 += VAR21;
    }
    VAR6 = FUN6(VAR3, VAR8, "", VAR16, VAR18);
    if (VAR6 < 0)
    {
        goto VAR22;
    }
    VAR17 = VAR16;
    VAR16[0] = FUN3(VAR19);
    VAR16[1] = FUN3(4);
    VAR17 += 2;
    for (VAR7 = 0; VAR7 < VAR19; VAR7++)
    {
        uint32_t VAR33[] = {FUN3(0x0), FUN3(0x0), FUN3(0x0), FUN3(VAR7)};
        memcpy(VAR17, VAR33, sizeof(VAR33));
        VAR17 += 4;
    }
    VAR6 = FUN6(VAR3, VAR8, "", VAR16, (VAR17 - VAR16) * sizeof(VAR15));
VAR22:
    FUN15(VAR16);
    return VAR6;
}