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
    else
    {
        {
            size_t VAR9 = strlen(VAR7);
            if(100-VAR9 > 1)
            {
                if (fgets(VAR7+VAR9, (int)(100-VAR9), stdin) == NULL)
                {
                    VAR7[VAR9] = '';
                }
                VAR9 = strlen(VAR7);
                if (VAR9 > 0)
                {
                    VAR7[VAR9-1] = '';
                }
            }
        }
    }
    {
        HCRYPTPROV VAR10;
        HCRYPTKEY VAR11;
        HCRYPTHASH VAR12;
        char VAR13[] = "";
        DWORD VAR14 = strlen(VAR13)*sizeof(char);
        BYTE VAR15[200];    
        memcpy(VAR15, VAR13, VAR14);
        if(!FUN4(&VAR10, NULL, VAR16, VAR17, 0))
        {
            if(!FUN4(&VAR10, NULL, VAR16, VAR17, VAR18))
            {
                FUN5(1);
            }
        }
        if(!FUN6(VAR10, VAR19, 0, 0, &VAR12))
        {
            FUN5(1);
        }
        if(!FUN7(VAR12, (VAR20 *) VAR7, strlen(VAR7)*sizeof(char), 0))
        {
            FUN5(1);
        }
        if(!FUN8(VAR10, VAR21, VAR12, 0, &VAR11))
        {
            FUN5(1);
        }
        if(!FUN9(VAR11, (VAR22)NULL, 1, 0, VAR15, &VAR14, sizeof(VAR15)))
        {
            FUN5(1);
        }
        FUN10(VAR15, VAR14);
        if (VAR11)
        {
            FUN11(VAR11);
        }
        if (VAR12)
        {
            FUN12(VAR12);
        }
        if (VAR10)
        {
            FUN13(VAR10, 0);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN14(NULL) );
    FUN2();
    return 0;
}