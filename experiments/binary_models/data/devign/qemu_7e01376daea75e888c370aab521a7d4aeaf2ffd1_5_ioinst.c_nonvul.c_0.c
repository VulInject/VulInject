void FUN1(VAR1 *VAR2, uint64_t VAR3, uint64_t VAR4, uint32_t VAR5)
{
    uint8_t VAR6;
    int update;
    int VAR7;
    VAR8 *VAR9 = &VAR2->VAR9;
    FUN2("");
    if (FUN3(VAR3))
    {
        FUN4(VAR9, VAR10, 4);
        return;
    }
    VAR6 = FUN5(VAR3);
    update = FUN6(VAR3);
    VAR7 = FUN7(VAR3);
    if (update && (VAR4 & 0x000000000000001f))
    {
        FUN4(VAR9, VAR10, 4);
        return;
    }
    FUN8(VAR6, update, VAR7, update ? VAR4 : 0);
}