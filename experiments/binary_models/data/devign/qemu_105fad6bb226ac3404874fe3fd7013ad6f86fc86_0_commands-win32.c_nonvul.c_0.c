void FUN1(bool VAR1, int64_t VAR2, VAR3 **VAR4)
{
    VAR3 *VAR5 = NULL;
    SYSTEMTIME VAR6;
    FILETIME VAR7;
    LONGLONG VAR8;
    if (!VAR1)
    {
        LPVOID VAR9;
        DWORD VAR10;
        HRESULT VAR11 = system("");
        if (FUN2() != 0)
        {
            strerror_s((VAR12)&VAR9, 0, VAR13);
            FUN3(VAR4, "", (VAR14)VAR9);
        }
        else if (VAR11 != 0)
        {
            if (VAR11 == FUN4(VAR15))
            {
                FUN3(VAR4, ""
                                 "");
            }
            else
            {
                if (!FUN5(VAR16 | VAR17 | VAR18, NULL, (VAR19)VAR11, FUN6(VAR20, VAR21), (VAR12)&VAR9, 0, NULL))
                {
                    FUN3(VAR4, ""
                                     "",
                               VAR11);
                }
                else
                {
                    FUN3(VAR4, "", VAR11, (VAR14)VAR9);
                    FUN7(VAR9);
                }
            }
        }
        else if (!FUN8(&VAR10, 0))
        {
            FUN3(VAR4, ""
                             "");
        }
        return;
    }
    if (VAR2 < 0 || VAR2 / 100 > VAR22 - VAR23)
    {
        FUN3(VAR4, "" VAR24 "", VAR2);
        return;
    }
    VAR8 = VAR2 / 100 + VAR23;
    VAR7.VAR25 = (VAR19)VAR8;
    VAR7.VAR26 = (VAR19)(VAR8 >> 32);
    if (!FUN9(&VAR7, &VAR6))
    {
        FUN3(VAR4, "", (int)FUN2());
        return;
    }
    FUN10(VAR27, &VAR5);
    if (VAR5)
    {
        FUN11(VAR4, VAR5);
        return;
    }
    if (!FUN12(&VAR6))
    {
        FUN3(VAR4, "", (int)FUN2());
        return;
    }
}