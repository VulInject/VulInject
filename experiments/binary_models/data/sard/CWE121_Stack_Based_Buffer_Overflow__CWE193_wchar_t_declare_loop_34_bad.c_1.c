#VAR1 ""
#VAR1 <VAR2.VAR3>
#define SRC_STRING VAR4""
typedef union
{
    wchar_t * VAR5;
    wchar_t * VAR6;
} VAR7;
void FUN1()
{
    wchar_t * VAR8;
    CWE121_Stack_Based_Buffer_Overflow__CWE193_wchar_t_declare_loop_34_unionType VAR9;
    wchar_t VAR10[10];
    wchar_t VAR11[10+1];
    VAR8 = VAR10;
    VAR8[0] = VAR4''; 
    VAR9.VAR5 = VAR8;
    {
        wchar_t * VAR8 = VAR9.VAR6;
        {
            wchar_t VAR12[10+1] = VAR13;
            size_t VAR14, VAR15;
            VAR15 = wcslen(VAR12);
            for (VAR14 = 0; VAR14 < VAR15 + 1; VAR14++)
            {
                VAR8[VAR14] = VAR12[VAR14];
            }
            FUN2(VAR8);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}