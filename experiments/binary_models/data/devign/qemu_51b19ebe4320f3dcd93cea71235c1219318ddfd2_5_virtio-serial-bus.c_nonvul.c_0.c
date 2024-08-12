static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR7 *VAR8;
    uint32_t VAR9;
    unsigned int VAR10, VAR11;
    struct virtio_console_config VAR12;
    FUN3(VAR2, (VAR13 *)&VAR12);
    FUN4(VAR4, &VAR12.VAR14);
    FUN4(VAR4, &VAR12.VAR15);
    FUN5(VAR4, &VAR12.VAR11);
    VAR11 = VAR6->VAR16.VAR17;
    for (VAR10 = 0; VAR10 < (VAR11 + 31) / 32; VAR10++)
    {
        FUN5(VAR4, &VAR6->VAR18[VAR10]);
    }
    VAR9 = 0;
    FUN6(VAR8, &VAR6->VAR19, VAR20) { VAR9++; }
    FUN5(VAR4, &VAR9);
    FUN6(VAR8, &VAR6->VAR19, VAR20)
    {
        uint32_t VAR21;
        FUN5(VAR4, &VAR8->VAR22);
        FUN7(VAR4, VAR8->VAR23);
        FUN7(VAR4, VAR8->VAR24);
        VAR21 = 0;
        if (VAR8->VAR25)
        {
            VAR21 = 1;
        }
        FUN5(VAR4, &VAR21);
        if (VAR21)
        {
            FUN5(VAR4, &VAR8->VAR26);
            FUN8(VAR4, &VAR8->VAR27);
            FUN9(VAR4, (unsigned char *)VAR8->VAR25, sizeof(VAR28));
        }
    }
}