void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5.VAR4;
    const UHIOp VAR6 = VAR4[25];
    char *VAR7, *VAR8;
    switch (VAR6)
    {
    case VAR9:
        FUN2("", VAR6, (int)VAR4[4]);
        FUN3(VAR4[4]);
    case VAR10:
        FUN4(VAR7, VAR4[4]);
        if (!strcmp("", VAR7))
        {
            VAR4[2] = 0;
        }
        else if (!strcmp("", VAR7))
        {
            VAR4[2] = 1;
        }
        else if (!strcmp("", VAR7))
        {
            VAR4[2] = 2;
        }
        else
        {
            VAR4[2] = open(VAR7, FUN5(VAR4[5]), VAR4[6]);
            VAR4[3] = FUN6(VAR11);
        }
        FUN7(VAR7, VAR4[4]);
        break;
    case VAR12:
        if (VAR4[4] < 3)
        {
            VAR4[2] = 0;
            goto VAR13;
        }
        VAR4[2] = close(VAR4[4]);
        VAR4[3] = FUN6(VAR11);
        break;
    case VAR14:
        VAR4[2] = FUN8(VAR2, VAR4[4], VAR4[5], VAR4[6], 0);
        VAR4[3] = FUN6(VAR11);
        break;
    case VAR15:
        VAR4[2] = FUN9(VAR2, VAR4[4], VAR4[5], VAR4[6], 0);
        VAR4[3] = FUN6(VAR11);
        break;
    case VAR16:
        VAR4[2] = FUN10(VAR4[4], VAR4[5], VAR4[6]);
        VAR4[3] = FUN6(VAR11);
        break;
    case VAR17:
        FUN4(VAR7, VAR4[4]);
        VAR4[2] = remove(VAR7);
        VAR4[3] = FUN6(VAR11);
        FUN7(VAR7, VAR4[4]);
        break;
    case VAR18:
    {
        struct stat VAR19;
        memset(&VAR19, 0, sizeof(VAR19));
        VAR4[2] = FUN11(VAR4[4], &VAR19);
        VAR4[3] = FUN6(VAR11);
        if (VAR4[2])
        {
            goto VAR13;
        }
        VAR4[2] = FUN12(VAR2, &VAR19, VAR4[5]);
        VAR4[3] = FUN6(VAR11);
    }
    break;
    case VAR20:
        VAR4[2] = FUN13();
        break;
    case VAR21:
        if (VAR4[4] >= FUN13())
        {
            VAR4[2] = -1;
            goto VAR13;
        }
        VAR4[2] = strlen(FUN14(VAR4[4]));
        break;
    case VAR22:
        if (VAR4[4] >= FUN13())
        {
            VAR4[2] = -1;
            goto VAR13;
        }
        VAR4[2] = FUN15(VAR2, VAR4[4], VAR4[5]);
        break;
    case VAR23:
        FUN4(VAR7, VAR4[4]);
        VAR8 = strstr(VAR7, "");
        if (VAR8)
        {
            int VAR24 = VAR8 - VAR7;
            char *VAR25 = FUN16(VAR24 + 1);
            strncpy(VAR25, VAR7, VAR24);
            VAR25[VAR24] = '';
            VAR4[2] = FUN17("", VAR25, (int)VAR4[5], VAR8 + 2);
            FUN18(VAR25);
        }
        else
        {
            VAR4[2] = FUN17("", VAR7);
        }
        FUN7(VAR7, VAR4[4]);
        break;
    case VAR26:
        FUN4(VAR7, VAR4[4]);
        FUN4(VAR8, VAR4[5]);
        FUN17("");
        FUN17(""%VAR27\"", VAR7);
        FUN17(""%VAR27\"", VAR8, (int)VAR4[6]);
        FUN7(VAR8, VAR4[5]);
        FUN7(VAR7, VAR4[4]);
        FUN19();
        break;
    case VAR28:
        VAR4[2] = FUN8(VAR2, VAR4[4], VAR4[5], VAR4[6], VAR4[7]);
        VAR4[3] = FUN6(VAR11);
        break;
    case VAR29:
        VAR4[2] = FUN9(VAR2, VAR4[4], VAR4[5], VAR4[6], VAR4[7]);
        VAR4[3] = FUN6(VAR11);
        break;
    case VAR30:
        FUN4(VAR7, VAR4[4]);
        FUN4(VAR8, VAR4[5]);
        VAR4[2] = FUN20(VAR7, VAR8);
        VAR4[3] = FUN6(VAR11);
        FUN7(VAR8, VAR4[5]);
        FUN7(VAR7, VAR4[4]);
        break;
    default:
        fprintf(VAR31, "", VAR6);
        FUN19();
    }
VAR13:
    return;
}