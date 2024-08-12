#VAR1 ""
#define VAR2 ""
#VAR1 <VAR3.VAR4>
#VAR1 <VAR5.VAR4>
#pragma FUN1 (VAR6, "")
static const int VAR7 = 1; 
static const int VAR8 = 0; 
void FUN2()
{
    char * VAR9;
    char VAR10[100] = "";
    VAR9 = VAR10;
    if(VAR7)
    {
        strcpy(VAR9, VAR2);
    }
    {
        HCRYPTPROV VAR11;
        HCRYPTKEY VAR12;
        HCRYPTHASH VAR13;
        char VAR14[] = "";
        DWORD VAR15 = strlen(VAR14)*sizeof(char);
        BYTE VAR16[200];    
        memcpy(VAR16, VAR14, VAR15);
        if(!FUN3(&VAR11, NULL, VAR17, VAR18, 0))
        {
            if(!FUN3(&VAR11, NULL, VAR17, VAR18, VAR19))
            {
                FUN4(1);
            }
        }
        if(!FUN5(VAR11, VAR20, 0, 0, &VAR13))
        {
            FUN4(1);
        }
        if(!FUN6(VAR13, (VAR21 *) VAR9, strlen(VAR9)*sizeof(char), 0))
        {
            FUN4(1);
        }
        if(!FUN7(VAR11, VAR22, VAR13, 0, &VAR12))
        {
            FUN4(1);
        }
        if(!FUN8(VAR12, (VAR23)NULL, 1, 0, VAR16, &VAR15, sizeof(VAR16)))
        {
            FUN4(1);
        }
        FUN9(VAR16, VAR15);
        if (VAR12)
        {
            FUN10(VAR12);
        }
        if (VAR13)
        {
            FUN11(VAR13);
        }
        if (VAR11)
        {
            FUN12(VAR11, 0);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN13(NULL) );
    FUN2();
    return 0;
}