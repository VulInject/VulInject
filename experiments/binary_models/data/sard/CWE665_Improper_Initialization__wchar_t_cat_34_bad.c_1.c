#VAR1 ""
#VAR1 <VAR2.VAR3>
typedef union
{
    wchar_t * VAR4;
    wchar_t * VAR5;
} VAR6;
void FUN1()
{
    wchar_t * VAR7;
    CWE665_Improper_Initialization__wchar_t_cat_34_unionType VAR8;
    wchar_t VAR9[100];
    VAR7 = VAR9;
    ; 
    VAR8.VAR4 = VAR7;
    {
        wchar_t * VAR7 = VAR8.VAR5;
        {
            wchar_t VAR10[100];
            wmemset(VAR10, VAR11'', 100-1); 
            VAR10[100-1] = VAR11''; 
            wcscat(VAR7, VAR10);
            FUN2(VAR7);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}