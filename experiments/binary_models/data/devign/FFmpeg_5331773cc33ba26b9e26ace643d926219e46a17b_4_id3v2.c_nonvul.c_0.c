static void FUN1(VAR1 *VAR2, VAR3 **VAR4, VAR5 *VAR6, const char *VAR7, VAR8 **VAR9, int64_t VAR10)
{
    int VAR11, VAR12;
    uint8_t VAR13[VAR14];
    int VAR15;
    int64_t VAR16, VAR17;
    if (VAR10 && VAR10 < VAR14)
        return;
    VAR16 = FUN2(VAR2);
    do
    {
        VAR17 = FUN2(VAR2);
        if (VAR10 && VAR17 - VAR16 >= VAR10 - VAR14)
        {
            FUN3(VAR2, VAR17, VAR18);
            break;
        }
        VAR12 = FUN4(VAR2, VAR13, VAR14);
        if (VAR12 != VAR14)
        {
            FUN3(VAR2, VAR17, VAR18);
            break;
        }
        VAR15 = FUN5(VAR13, VAR7);
        if (VAR15)
        {
            VAR11 = ((VAR13[6] & 0x7f) << 21) | ((VAR13[7] & 0x7f) << 14) | ((VAR13[8] & 0x7f) << 7) | (VAR13[9] & 0x7f);
            FUN6(VAR2, VAR4, VAR6, VAR11, VAR13[3], VAR13[5], VAR9);
        }
        else
        {
            FUN3(VAR2, VAR17, VAR18);
        }
    } while (VAR15);
    FUN7(VAR4, NULL, VAR19);
    FUN7(VAR4, NULL, VAR20);
    FUN7(VAR4, NULL, VAR21);
    FUN8(VAR4);
}