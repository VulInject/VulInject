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
    CWE401_Memory_Leak__strdup_wchar_t_34_unionType VAR8;
    VAR7 = NULL;
    {
        wchar_t VAR9[] = VAR10"";
        VAR7 = FUN2(VAR9);
        FUN3(VAR7);
    }
    VAR8.VAR4 = VAR7;
    {
        wchar_t * VAR7 = VAR8.VAR5;
        ; 
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}