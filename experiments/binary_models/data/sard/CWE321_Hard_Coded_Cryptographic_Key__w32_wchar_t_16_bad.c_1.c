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
    while(1)
    {
        wcscpy(VAR7, VAR9);
        break;
    }
    {
        HCRYPTPROV VAR10;
        HCRYPTKEY VAR11;
        HCRYPTHASH VAR12;
        wchar_t VAR13[] = VAR2"";
        DWORD VAR14 = wcslen(VAR13)*sizeof(wchar_t);
        BYTE VAR15[200];    
        memcpy(VAR15, VAR13, VAR14);
        if(!FUN3(&VAR10, NULL, VAR16, VAR17, 0))
        {
            if(!FUN3(&VAR10, NULL, VAR16, VAR17, VAR18))
            {
                FUN4(1);
            }
        }
        if(!FUN5(VAR10, VAR19, 0, 0, &VAR12))
        {
            FUN4(1);
        }
        if(!FUN6(VAR12, (VAR20 *) VAR7, wcslen(VAR7)*sizeof(wchar_t), 0))
        {
            FUN4(1);
        }
        if(!FUN7(VAR10, VAR21, VAR12, 0, &VAR11))
        {
            FUN4(1);
        }
        if(!FUN8(VAR11, (VAR22)NULL, 1, 0, VAR15, &VAR14, sizeof(VAR15)))
        {
            FUN4(1);
        }
        FUN9(VAR15, VAR14);
        if (VAR11)
        {
            FUN10(VAR11);
        }
        if (VAR12)
        {
            FUN11(VAR12);
        }
        if (VAR10)
        {
            FUN12(VAR10, 0);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN13(NULL) );
    FUN2();
    return 0;
}