static int FUN1(void *VAR1, int VAR2)
{
    VAR3 *VAR4;
    VAR5 *VAR6;
    VAR7 *VAR8;
    struct VAR9 *VAR10;
    struct VAR11 *VAR12;
    const char *VAR13;
    VAR6 = VAR1;
    FUN2(VAR6++, VAR14);
    FUN2(VAR6++, 4);
    FUN2(VAR6++, (1 << 2) | (1 << 1) | (1 << 0));
    VAR6++;
    FUN2(VAR6++, VAR15);
    FUN2(VAR6++, 4);
    FUN2(VAR6++, VAR16 + 1);
    FUN2(VAR6++, 115200);
    FUN2(VAR6++, VAR17);
    FUN2(VAR6++, 36);
    strcpy((void *)VAR6, "");
    VAR6 += 8;
    strcpy((void *)VAR6, "");
    VAR6 += 8;
    FUN2(VAR6++, VAR18);
    FUN2(VAR6++, 24);
    FUN2(VAR6++, VAR19);
    FUN2(VAR6++, 8);
    FUN2(VAR6++, VAR20);
    FUN2(VAR6++, VAR21);
    FUN2(VAR6++, VAR22);
    VAR6++;
    FUN2(VAR6++, VAR23);
    FUN2(VAR6++, 4);
    FUN2(VAR6++, VAR24);
    FUN2(VAR6++, VAR25);
    VAR10 = (VAR2 == 810) ? VAR26 : VAR27;
    for (; VAR10->VAR28; VAR10++)
    {
        FUN2(VAR6++, VAR29);
        FUN2(VAR6++, 20);
        strcpy((void *)VAR6, VAR10->VAR28);
        VAR6 += 6;
        FUN2(VAR6++, VAR10->VAR30);
        FUN2(VAR6++, VAR10->VAR31);
        FUN2(VAR6++, 0);
        FUN2(VAR6++, 0);
    }
    FUN2(VAR6++, VAR32);
    FUN2(VAR6++, 12);
    VAR4 = (void *)VAR6;
    FUN3(VAR4++, 0x01);
    FUN3(VAR4++, VAR33);
    FUN3(VAR4++, VAR34);
    FUN3(VAR4++, VAR35);
    FUN3(VAR4++, VAR36 + 1);
    memcpy(VAR4, &VAR37, 6);
    VAR4 += 6;
    FUN3(VAR4++, 0x02);
    VAR6 = (void *)VAR4;
    FUN2(VAR6++, VAR38);
    FUN2(VAR6++, 8);
    FUN2(VAR6++, 0x25);
    FUN2(VAR6++, VAR39);
    FUN2(VAR6++, VAR40);
    FUN2(VAR6++, -1);
    FUN2(VAR6++, VAR41);
    FUN2(VAR6++, 16);
    if (VAR2 == 810)
    {
        FUN2(VAR6++, 0x23f);
        FUN2(VAR6++, -1);
        FUN2(VAR6++, -1);
        FUN2(VAR6++, -1);
        FUN2(VAR6++, 0x240);
        FUN2(VAR6++, 0xc000);
        FUN2(VAR6++, 0x0248);
        FUN2(VAR6++, 0xc000);
    }
    else
    {
        FUN2(VAR6++, 0xf);
        FUN2(VAR6++, -1);
        FUN2(VAR6++, -1);
        FUN2(VAR6++, -1);
        FUN2(VAR6++, 0);
        FUN2(VAR6++, 0);
        FUN2(VAR6++, 0);
        FUN2(VAR6++, 0);
    }
    FUN2(VAR6++, VAR42);
    FUN2(VAR6++, 4);
    FUN2(VAR6++, VAR43);
    VAR6++;
    VAR12 = (VAR2 == 810) ? VAR44 : VAR45;
    for (; VAR12->VAR28; VAR12++)
    {
        FUN2(VAR6++, VAR46);
        FUN2(VAR6++, 28);
        strcpy((void *)VAR6, VAR12->VAR28);
        VAR8 = (void *)(VAR6 + 8);
        FUN4(VAR8++, VAR12->VAR47);
        FUN4(VAR8++, VAR12->VAR48);
        FUN4(VAR8++, VAR12->VAR49);
        VAR6 = (void *)VAR8;
    }
    FUN2(VAR6++, VAR50);
    FUN2(VAR6++, 12);
    strcpy((void *)VAR6, "");
    strcpy((void *)VAR6, "");
    strcpy((void *)VAR6, "");
    strcpy((void *)VAR6, "");
    strcpy((void *)VAR6, "");
    strcpy((void *)VAR6, "");
    strcpy((void *)VAR6, "");
    strcpy((void *)VAR6, "");
    strcpy((void *)VAR6, "");
    strcpy((void *)VAR6, "");
    strcpy((void *)VAR6, "");
    VAR6 += 6;
    VAR13 = (VAR2 == 810) ? "" : "";
    FUN2(VAR6++, VAR51);
    FUN2(VAR6++, 24);
    strcpy((void *)VAR6, "");
    VAR6 += 6;
    strcpy((void *)VAR6, VAR13);
    VAR6 += 6;
    FUN2(VAR6++, VAR51);
    FUN2(VAR6++, 24);
    strcpy((void *)VAR6, "");
    VAR6 += 6;
    strcpy((void *)VAR6, "");
    FUN5((void *)VAR6, 12, FUN6());
    VAR6 += 6;
    VAR13 = (VAR2 == 810) ? "" : "";
    FUN2(VAR6++, VAR51);
    FUN2(VAR6++, 24);
    strcpy((void *)VAR6, "");
    VAR6 += 6;
    strcpy((void *)VAR6, VAR13);
    VAR6 += 6;
    return (void *)VAR6 - VAR1;
}