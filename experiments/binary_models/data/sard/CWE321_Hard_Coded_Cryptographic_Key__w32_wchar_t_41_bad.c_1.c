#VAR1 ""
#define CRYPTO_KEY VAR2""
#VAR1 <VAR3.VAR4>
#VAR1 <VAR5.VAR4>
#pragma FUN1 (VAR6, "")
void FUN2(wchar_t * VAR7)
{
    {
        HCRYPTPROV VAR8;
        HCRYPTKEY VAR9;
        HCRYPTHASH VAR10;
        wchar_t VAR11[] = VAR2"";
        DWORD VAR12 = wcslen(VAR11)*sizeof(wchar_t);
        BYTE VAR13[200];    
        memcpy(VAR13, VAR11, VAR12);
        if(!FUN3(&VAR8, NULL, VAR14, VAR15, 0))
        {
            if(!FUN3(&VAR8, NULL, VAR14, VAR15, VAR16))
            {
                FUN4(1);
            }
        }
        if(!FUN5(VAR8, VAR17, 0, 0, &VAR10))
        {
            FUN4(1);
        }
        if(!FUN6(VAR10, (VAR18 *) VAR7, wcslen(VAR7)*sizeof(wchar_t), 0))
        {
            FUN4(1);
        }
        if(!FUN7(VAR8, VAR19, VAR10, 0, &VAR9))
        {
            FUN4(1);
        }
        if(!FUN8(VAR9, (VAR20)NULL, 1, 0, VAR13, &VAR12, sizeof(VAR13)))
        {
            FUN4(1);
        }
        FUN9(VAR13, VAR12);
        if (VAR9)
        {
            FUN10(VAR9);
        }
        if (VAR10)
        {
            FUN11(VAR10);
        }
        if (VAR8)
        {
            FUN12(VAR8, 0);
        }
    }
}
void FUN13()
{
    wchar_t * VAR7;
    wchar_t VAR21[100] = VAR2"";
    VAR7 = VAR21;
    wcscpy(VAR7, VAR22);
    FUN2(VAR7);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN14(NULL) );
    FUN13();
    return 0;
}