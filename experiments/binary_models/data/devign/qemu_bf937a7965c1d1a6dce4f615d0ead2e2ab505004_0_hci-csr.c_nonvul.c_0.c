static void FUN1(struct VAR1 *VAR2, VAR3 *VAR4)
{
    VAR3 *VAR5;
    int VAR6;
    switch (*VAR4++)
    {
    case VAR7:
        VAR6 = FUN2(((struct VAR8 *)VAR4)->VAR9);
        if (FUN3(VAR6) == VAR10)
        {
            FUN4(VAR2, FUN5(VAR6), VAR4 + sizeof(struct VAR8), VAR2->VAR11 - sizeof(struct VAR8) - 1);
            return;
        }
        VAR2->VAR12->FUN6(VAR2->VAR12, VAR4, VAR2->VAR11 - 1);
        break;
    case VAR13:
        goto VAR14;
    case VAR15:
        VAR2->VAR12->FUN7(VAR2->VAR12, VAR4, VAR2->VAR11 - 1);
        break;
    case VAR16:
        VAR2->VAR12->FUN8(VAR2->VAR12, VAR4, VAR2->VAR11 - 1);
        break;
    case VAR17:
        if (VAR2->VAR18 != sizeof(VAR19) || memcmp(VAR4 - 1, VAR19, VAR2->VAR18))
        {
            FUN9("", VAR20);
            return;
        }
        VAR4 += 2;
        VAR5 = FUN10(VAR2, VAR17, 10);
        *VAR5++ = 0x20;
        memcpy(VAR5, VAR4, 7);
        VAR5 += 7;
        *VAR5++ = 0xff;
        *VAR5 = 0xff;
        break;
    case VAR21:
        if (VAR2->VAR18 != 4 || VAR4[1] != 0x55 || VAR4[2] != 0x00)
        {
            FUN9("", VAR20);
            return;
        }
        VAR5 = FUN10(VAR2, VAR21, 2);
        *VAR5++ = 0xcc;
        *VAR5 = 0x00;
        break;
    default:
    VAR14:
        FUN9("", VAR20);
        break;
    }
    FUN11(VAR2);
}