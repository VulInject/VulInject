static VAR1 *FUN1(VAR2 *VAR3, VAR4 *VAR5)
{
    VAR1 *VAR6;
    VAR7 *VAR8, *VAR9;
    size_t VAR10;
    VAR6 = FUN2(VAR5->VAR11.VAR12, VAR5->VAR11.VAR13);
    VAR6->VAR14 = VAR5->VAR11.VAR15;
    VAR6->VAR16 = VAR5->VAR11.VAR17;
    switch (VAR5->VAR11.VAR18)
    {
    case VAR19:
        VAR10 = sizeof(VAR20) * VAR5->VAR11.VAR12 * VAR5->VAR11.VAR13;
        memcpy(VAR6->VAR21, VAR5->VAR22.VAR21, VAR10);
        if (VAR3->VAR23 > 2)
        {
            FUN3(VAR6, "");
        }
        break;
    case VAR24:
        VAR9 = VAR5->VAR22.VAR21;
        VAR8 = VAR9 + FUN4(VAR6) * VAR6->VAR12;
        FUN5(VAR6, 0xffffff, 0x000000, VAR8, 1, VAR9);
        if (VAR3->VAR23 > 2)
        {
            FUN3(VAR6, "");
        }
        break;
    default:
        fprintf(VAR25, "", VAR26, VAR5->VAR11.VAR18);
        goto VAR27;
    }
    return VAR6;
VAR27:
    FUN6(VAR6);
    return NULL;
}