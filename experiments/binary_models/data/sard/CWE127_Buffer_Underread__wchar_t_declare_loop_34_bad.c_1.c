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
    CWE127_Buffer_Underread__wchar_t_declare_loop_34_unionType VAR8;
    wchar_t VAR9[100];
    wmemset(VAR9, VAR10'', 100-1);
    VAR9[100-1] = VAR10'';
    VAR7 = VAR9 - 8;
    VAR8.VAR4 = VAR7;
    {
        wchar_t * VAR7 = VAR8.VAR5;
        {
            size_t VAR11;
            wchar_t VAR12[100];
            wmemset(VAR12, VAR10'', 100-1); 
            VAR12[100-1] = VAR10''; 
            for (VAR11 = 0; VAR11 < 100; VAR11++)
            {
                VAR12[VAR11] = VAR7[VAR11];
            }
            VAR12[100-1] = VAR10'';
            FUN2(VAR12);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}