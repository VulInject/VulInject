static VAR1 *FUN1(VAR2 *VAR3, VAR4 *VAR5, uint32_t VAR6)
{
    VAR1 *VAR7;
    size_t VAR8;
    VAR7 = FUN2(VAR5->VAR9.VAR10, VAR5->VAR9.VAR11);
    VAR7->VAR12 = VAR5->VAR9.VAR13;
    VAR7->VAR14 = VAR5->VAR9.VAR15;
    switch (VAR5->VAR9.VAR16)
    {
    case VAR17:
        VAR8 = sizeof(VAR18) * VAR5->VAR9.VAR10 * VAR5->VAR9.VAR11;
        FUN3(VAR7->VAR19, VAR8, VAR3, &VAR5->VAR20, VAR6);
        if (VAR3->VAR21 > 2)
        {
            FUN4(VAR7, "");
        }
        break;
    default:
        fprintf(VAR22, "", VAR23, VAR5->VAR9.VAR16);
        goto VAR24;
    }
    return VAR7;
VAR24:
    FUN5(VAR7);
    return NULL;
}