void FUN1(gdb_syscall_complete_cb VAR1, const char *VAR2, ...)
{
    va_list VAR3;
    char VAR4[256];
    char *VAR5;
    target_ulong VAR6;
    uint64_t VAR7;
    VAR8 *VAR9;
    VAR9 = VAR10;
    if (!VAR9)
        return;
    VAR11 = VAR1;
    VAR9->VAR12 = VAR13;
    FUN2(VAR14);
    VAR9->VAR12 = VAR15;
    FUN3(VAR3, VAR2);
    VAR5 = VAR4;
    *(VAR5++) = '';
    while (*VAR2)
    {
        if (*VAR2 == '')
        {
            VAR2++;
            switch (*VAR2++)
            {
            case '':
                VAR6 = FUN4(VAR3, VAR16);
                VAR5 += snprintf(VAR5, &VAR4[sizeof(VAR4)] - VAR5, VAR17, VAR6);
                break;
            case '':
                if (*(VAR2++) != '')
                    goto VAR18;
                VAR7 = FUN4(VAR3, VAR19);
                VAR5 += snprintf(VAR5, &VAR4[sizeof(VAR4)] - VAR5, "" VAR20, VAR7);
                break;
            case '':
                VAR6 = FUN4(VAR3, VAR16);
                VAR5 += snprintf(VAR5, &VAR4[sizeof(VAR4)] - VAR5, VAR17 "", VAR6, FUN4(VAR3, int));
                break;
            default:
            VAR18:
                fprintf(VAR21, "", VAR2 - 1);
                break;
            }
        }
        else
        {
            *(VAR5++) = *(VAR2++);
        }
    }
    *VAR5 = 0;
    FUN5(VAR3);
    FUN6(VAR9, VAR4);
    FUN7(VAR9->VAR22, 0);
    FUN8(VAR9->VAR22);
}