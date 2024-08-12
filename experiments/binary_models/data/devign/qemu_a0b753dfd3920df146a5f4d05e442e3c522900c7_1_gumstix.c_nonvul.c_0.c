static void FUN1(ram_addr_t VAR1, int VAR2, const char *VAR3, const char *VAR4, const char *VAR5, const char *VAR6, const char *VAR7)
{
    struct VAR8 *VAR9;
    int VAR10;
    uint32_t VAR11 = 0x01000000;
    uint32_t VAR12 = 0x04000000;
    VAR9 = FUN2(VAR12);
    VAR10 = FUN3(VAR13, 0, 0);
    if (VAR10 == -1)
    {
        fprintf(VAR14, ""
                        "");
        FUN4(1);
    }
    if (!FUN5(0x00000000, FUN6(VAR11), VAR15[VAR10].VAR16, VAR17, VAR11 / VAR17, 2, 0, 0, 0, 0))
    {
        fprintf(VAR14, "");
        FUN4(1);
    }
    VAR9->VAR18->VAR19[15] = 0x00000000;
    FUN7(&VAR20[0], 0x04000300, FUN8(VAR9->VAR21)[36]);
}