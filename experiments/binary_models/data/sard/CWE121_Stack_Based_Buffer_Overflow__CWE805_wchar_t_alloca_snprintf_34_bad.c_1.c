#VAR1 ""
#VAR1 <VAR2.VAR3>
#define SNPRINTF _snwprintf
#define SNPRINTF swprintf
typedef union
{
    wchar_t * VAR4;
    wchar_t * VAR5;
} VAR6;
void FUN1()
{
    wchar_t * VAR7;
    CWE121_Stack_Based_Buffer_Overflow__CWE805_wchar_t_alloca_snprintf_34_unionType VAR8;
    wchar_t * VAR9 = (wchar_t *)FUN2(50*sizeof(wchar_t));
    wchar_t * VAR10 = (wchar_t *)FUN2(100*sizeof(wchar_t));
    VAR7 = VAR9;
    VAR7[0] = VAR11''; 
    VAR8.VAR4 = VAR7;
    {
        wchar_t * VAR7 = VAR8.VAR5;
        {
            wchar_t VAR12[100];
            wmemset(VAR12, VAR11'', 100-1); 
            VAR12[100-1] = VAR11''; 
            FUN3(VAR7, 100, VAR11"", VAR12);
            FUN4(VAR7);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN1();
    return 0;
}