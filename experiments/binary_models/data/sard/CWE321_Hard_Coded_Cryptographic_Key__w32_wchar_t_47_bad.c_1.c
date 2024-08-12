#VAR1 ""
#define CRYPTO_KEY VAR2""
#VAR1 <VAR3.VAR4>
#VAR1 <VAR5.VAR4>
#pragma FUN1 (VAR6, "")
void FUN2()
{
    wchar_t * VAR7;
    wchar_t VAR8[100] = VAR2"";
    VAR7 = VAR8;
    if(FUN3())
    {
        wcscpy(VAR7, VAR9);
    }
    else
    {
        {
            size_t VAR10 = wcslen(VAR7);
            if(100-VAR10 > 1)
            {
                if (FUN4(VAR7+VAR10, (int)(100-VAR10), stdin) == NULL)
                {
                    VAR7[VAR10] = VAR2'';
                }
                VAR10 = wcslen(VAR7);
                if (VAR10 > 0)
                {
                    VAR7[VAR10-1] = VAR2'';
                }
            }
        }
    }
    {
        HCRYPTPROV VAR11;
        HCRYPTKEY VAR12;
        HCRYPTHASH VAR13;
        wchar_t VAR14[] = VAR2"";
        DWORD VAR15 = wcslen(VAR14)*sizeof(wchar_t);
        BYTE VAR16[200];    
        memcpy(VAR16, VAR14, VAR15);
        if(!FUN5(&VAR11, NULL, VAR17, VAR18, 0))
        {
            if(!FUN5(&VAR11, NULL, VAR17, VAR18, VAR19))
            {
                FUN6(1);
            }
        }
        if(!FUN7(VAR11, VAR20, 0, 0, &VAR13))
        {
            FUN6(1);
        }
        if(!FUN8(VAR13, (VAR21 *) VAR7, wcslen(VAR7)*sizeof(wchar_t), 0))
        {
            FUN6(1);
        }
        if(!FUN9(VAR11, VAR22, VAR13, 0, &VAR12))
        {
            FUN6(1);
        }
        if(!FUN10(VAR12, (VAR23)NULL, 1, 0, VAR16, &VAR15, sizeof(VAR16)))
        {
            FUN6(1);
        }
        FUN11(VAR16, VAR15);
        if (VAR12)
        {
            FUN12(VAR12);
        }
        if (VAR13)
        {
            FUN13(VAR13);
        }
        if (VAR11)
        {
            FUN14(VAR11, 0);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN15(NULL) );
    FUN2();
    return 0;
}