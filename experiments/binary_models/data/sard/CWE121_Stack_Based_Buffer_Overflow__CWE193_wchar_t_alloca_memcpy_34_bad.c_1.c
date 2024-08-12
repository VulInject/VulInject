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
    CWE121_Stack_Based_Buffer_Overflow__CWE193_wchar_t_alloca_memcpy_34_unionType VAR9;
    wchar_t * VAR10 = (wchar_t *)FUN2((10)*sizeof(wchar_t));
    wchar_t * VAR11 = (wchar_t *)FUN2((10+1)*sizeof(wchar_t));
    VAR8 = VAR10;
    VAR8[0] = VAR4''; 
    VAR9.VAR5 = VAR8;
    {
        wchar_t * VAR8 = VAR9.VAR6;
        {
            wchar_t VAR12[10+1] = VAR13;
            memcpy(VAR8, VAR12, (wcslen(VAR12) + 1) * sizeof(wchar_t));
            FUN3(VAR8);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}