static void FUN1(VAR1 *VAR2, uint16_t VAR3, hwaddr VAR4, uint8_t VAR5)
{
    VAR6 *VAR7;
    VTDContextEntry VAR8;
    int VAR9;
    FUN2(VAR7, &(VAR2->VAR10), VAR11)
    {
        VAR12 *VAR13 = VAR7->VAR13;
        VAR9 = FUN3(VAR2, FUN4(VAR13->VAR14), VAR13->VAR15, &VAR8);
        if (!VAR9 && VAR3 == FUN5(VAR8.VAR16))
        {
            FUN6(&VAR8, VAR4, VAR4 + (1 << VAR5) * VAR17, VAR18, (void *)&VAR13->VAR19, true, VAR2->VAR20);
        }
    }
}