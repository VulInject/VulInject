static VAR1 *FUN1(int VAR2)
{
    const uint8_t VAR3[VAR4] = {};
    VAR1 *VAR5;
    VAR6 *VAR7;
    QVirtIOSCSICmdResp VAR8;
    void *VAR9;
    int VAR10;
    VAR5 = FUN2(VAR1, 1);
    VAR5->VAR11 = FUN3();
    VAR5->VAR12 = FUN4();
    VAR7 = FUN5(VAR5->VAR12, VAR13);
    VAR5->VAR7 = (VAR14 *)VAR7;
    FUN6(VAR7 != NULL);
    FUN7(VAR5->VAR7->VAR15, ==, VAR13);
    FUN8(VAR7);
    FUN9(&VAR16, VAR5->VAR7);
    FUN10(&VAR16, VAR5->VAR7);
    FUN11(&VAR16, VAR5->VAR7);
    VAR9 = VAR7->VAR9 + VAR17;
    VAR5->VAR18 = FUN12(&VAR16, VAR5->VAR7, (VAR19)(VAR20)VAR9);
    FUN13(VAR5->VAR18, <, VAR21);
    for (VAR10 = 0; VAR10 < VAR5->VAR18 + 2; VAR10++)
    {
        VAR5->VAR22[VAR10] = FUN14(&VAR16, VAR5->VAR7, VAR5->VAR11, VAR10);
    }
    FUN13(FUN15(VAR5, VAR3, NULL, 0, NULL, 0, &VAR8), ==, 0);
    FUN13(VAR8.VAR23, ==, VAR24);
    FUN13(VAR8.VAR25[0], ==, 0x70);
    FUN13(VAR8.VAR25[2], ==, VAR26);
    FUN13(VAR8.VAR25[12], ==, 0x29);
    FUN13(VAR8.VAR25[13], ==, 0x00);
    return VAR5;
}