#VAR1 ""
#define VAR2 ""
#VAR1 <VAR3.VAR4>
#VAR1 <VAR5.VAR4>
#pragma FUN1 (VAR6, "")
void FUN2()
{
    char * VAR7;
    char VAR8[100] = "";
    VAR7 = VAR8;
    if(FUN3())
    {
        strcpy(VAR7, VAR2);
    }
    {
        HCRYPTPROV VAR9;
        HCRYPTKEY VAR10;
        HCRYPTHASH VAR11;
        char VAR12[] = "";
        DWORD VAR13 = strlen(VAR12)*sizeof(char);
        BYTE VAR14[200];    
        memcpy(VAR14, VAR12, VAR13);
        if(!FUN4(&VAR9, NULL, VAR15, VAR16, 0))
        {
            if(!FUN4(&VAR9, NULL, VAR15, VAR16, VAR17))
            {
                FUN5(1);
            }
        }
        if(!FUN6(VAR9, VAR18, 0, 0, &VAR11))
        {
            FUN5(1);
        }
        if(!FUN7(VAR11, (VAR19 *) VAR7, strlen(VAR7)*sizeof(char), 0))
        {
            FUN5(1);
        }
        if(!FUN8(VAR9, VAR20, VAR11, 0, &VAR10))
        {
            FUN5(1);
        }
        if(!FUN9(VAR10, (VAR21)NULL, 1, 0, VAR14, &VAR13, sizeof(VAR14)))
        {
            FUN5(1);
        }
        FUN10(VAR14, VAR13);
        if (VAR10)
        {
            FUN11(VAR10);
        }
        if (VAR11)
        {
            FUN12(VAR11);
        }
        if (VAR9)
        {
            FUN13(VAR9, 0);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN14(NULL) );
    FUN2();
    return 0;
}