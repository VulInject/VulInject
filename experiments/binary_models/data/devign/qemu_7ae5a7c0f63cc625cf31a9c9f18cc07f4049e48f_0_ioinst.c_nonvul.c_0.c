int FUN1(VAR1 *VAR2, uint64_t VAR3, uint64_t VAR4, uint32_t VAR5)
{
    uint8_t VAR6;
    int update;
    int VAR7;
    FUN2("");
    if (FUN3(VAR3))
    {
        FUN4(VAR2, VAR8, 2);
        return -VAR9;
    }
    VAR6 = FUN5(VAR3);
    update = FUN6(VAR3);
    VAR7 = FUN7(VAR3);
    if (update && (VAR4 & 0x000000000000001f))
    {
        FUN4(VAR2, VAR8, 2);
        return -VAR9;
    }
    FUN8(VAR6, update, VAR7, update ? VAR4 : 0);
    return 0;
}