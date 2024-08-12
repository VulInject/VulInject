static void FUN1(struct VAR1 *VAR2, uint16_t VAR3, const char *VAR4, struct VAR5 *VAR6)
{
    struct sockaddr_in VAR7, VAR8;
    struct VAR9 *VAR10;
    struct VAR5 *VAR11;
    VAR10 = FUN2(VAR2->VAR12);
    if (!VAR10)
    {
        goto VAR13;
    }
    memset(VAR10->VAR14, 0, VAR10->VAR15);
    VAR10->VAR14 += VAR16;
    VAR11 = (void *)VAR10->VAR14;
    VAR10->VAR14 += sizeof(struct VAR17);
    VAR11->VAR18 = FUN3(VAR19);
    VAR11->VAR20.VAR21.VAR22 = FUN3(VAR3);
    FUN4((char *)VAR11->VAR20.VAR21.VAR23, sizeof(VAR11->VAR20.VAR21.VAR23), VAR4);
    VAR7.VAR24 = VAR6->VAR25.VAR26;
    VAR7.VAR27 = VAR6->VAR28.VAR29;
    VAR8.VAR24 = VAR2->VAR30;
    VAR8.VAR27 = VAR2->VAR31;
    VAR10->VAR32 = sizeof(struct VAR5) - 514 + 3 + strlen(VAR4) - sizeof(struct VAR25) - sizeof(struct VAR33);
    FUN5(NULL, VAR10, &VAR7, &VAR8, VAR34);
VAR13:
    FUN6(VAR2);
}