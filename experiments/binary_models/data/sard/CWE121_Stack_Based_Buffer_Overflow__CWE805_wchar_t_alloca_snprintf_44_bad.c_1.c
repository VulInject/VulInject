#VAR1 ""
#VAR1 <VAR2.VAR3>
#define SNPRINTF _snwprintf
#define SNPRINTF swprintf
void FUN1(wchar_t * VAR4)
{
    {
        wchar_t VAR5[100];
        wmemset(VAR5, VAR6'', 100-1); 
        VAR5[100-1] = VAR6''; 
        FUN2(VAR4, 100, VAR6"", VAR5);
        FUN3(VAR4);
    }
}
void FUN4()
{
    wchar_t * VAR4;
    void (*VAR7) (wchar_t *) = VAR8;
    wchar_t * VAR9 = (wchar_t *)FUN5(50*sizeof(wchar_t));
    wchar_t * VAR10 = (wchar_t *)FUN5(100*sizeof(wchar_t));
    VAR4 = VAR9;
    VAR4[0] = VAR6''; 
    FUN6(VAR4);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN7(NULL) );
    FUN4();
    return 0;
}