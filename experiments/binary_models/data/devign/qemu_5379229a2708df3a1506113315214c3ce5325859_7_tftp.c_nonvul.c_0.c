static void FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
    struct sockaddr_in VAR5, VAR6;
    struct VAR7 *VAR8;
    struct VAR3 *VAR9;
    int VAR10;
    VAR8 = FUN2(VAR2->VAR11);
    if (!VAR8)
    {
        return;
    }
    memset(VAR8->VAR12, 0, VAR8->VAR13);
    VAR8->VAR12 += VAR14;
    VAR9 = (void *)VAR8->VAR12;
    VAR8->VAR12 += sizeof(struct VAR15);
    VAR9->VAR16 = FUN3(VAR17);
    VAR9->VAR18.VAR19.VAR20 = FUN3((VAR2->VAR21 + 1) & 0xffff);
    VAR5.VAR22 = VAR4->VAR23.VAR24;
    VAR5.VAR25 = VAR4->VAR26.VAR27;
    VAR6.VAR22 = VAR2->VAR28;
    VAR6.VAR25 = VAR2->VAR29;
    VAR10 = FUN4(VAR2, VAR2->VAR21, VAR9->VAR18.VAR19.VAR30, 512);
    if (VAR10 < 0)
    {
        FUN5(VAR8);
        FUN6(VAR2, 1, "", VAR9);
        return;
    }
    VAR8->VAR31 = sizeof(struct VAR3) - (512 - VAR10) - sizeof(struct VAR23) - sizeof(struct VAR32);
    FUN7(NULL, VAR8, &VAR5, &VAR6, VAR33);
    if (VAR10 == 512)
    {
        FUN8(VAR2);
    }
    else
    {
        FUN9(VAR2);
    }
    VAR2->VAR21++;
}