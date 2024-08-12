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
    CWE121_Stack_Based_Buffer_Overflow__dest_wchar_t_declare_cpy_34_unionType VAR8;
    wchar_t VAR9[50];
    wchar_t VAR10[100];
    VAR7 = VAR9;
    VAR7[0] = VAR11''; 
    VAR8.VAR4 = VAR7;
    {
        wchar_t * VAR7 = VAR8.VAR5;
        {
            wchar_t VAR12[100];
            wmemset(VAR12, VAR11'', 100-1); 
            VAR12[100-1] = VAR11''; 
            wcscpy(VAR7, VAR12);
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