static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR4;
    struct kvm_sregs VAR5;
    int VAR6;
    int VAR7;
    VAR6 = FUN2(FUN3(VAR2), VAR8, &VAR5);
    if (VAR6 < 0)
    {
        return VAR6;
    }
    if (!VAR2->VAR9)
    {
        FUN4(VAR4, VAR5.VAR10.VAR11.VAR12);
    }
    memset(VAR4->VAR13, 0, sizeof(VAR4->VAR13));
    for (VAR7 = 0; VAR7 < FUN5(VAR4->VAR13); VAR7++)
    {
        target_ulong VAR14 = VAR5.VAR10.VAR11.VAR15.VAR13[VAR7].VAR16;
        target_ulong VAR17 = VAR5.VAR10.VAR11.VAR15.VAR13[VAR7].VAR18;
        if (VAR14 & VAR19)
        {
            FUN6(VAR2, VAR14 & 0xfff, VAR14 & ~0xfffULL, VAR17);
        }
    }
    for (VAR7 = 0; VAR7 < 16; VAR7++)
    {
        VAR4->VAR20[VAR7] = VAR5.VAR10.VAR11.VAR21.VAR20[VAR7];
    }
    for (VAR7 = 0; VAR7 < 8; VAR7++)
    {
        VAR4->VAR22[0][VAR7] = VAR5.VAR10.VAR11.VAR21.VAR23[VAR7] & 0xffffffff;
        VAR4->VAR22[1][VAR7] = VAR5.VAR10.VAR11.VAR21.VAR23[VAR7] >> 32;
        VAR4->VAR24[0][VAR7] = VAR5.VAR10.VAR11.VAR21.VAR25[VAR7] & 0xffffffff;
        VAR4->VAR24[1][VAR7] = VAR5.VAR10.VAR11.VAR21.VAR25[VAR7] >> 32;
    }
    return 0;
}