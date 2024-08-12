#VAR1 ""
#VAR1 <VAR2.VAR3>
#define SNPRINTF _snwprintf
#define SNPRINTF swprintf
void FUN1()
{
    wchar_t * VAR4;
    wchar_t * VAR5 = (wchar_t *)FUN2(50*sizeof(wchar_t));
    wchar_t * VAR6 = (wchar_t *)FUN2(100*sizeof(wchar_t));
    if(FUN3())
    {
        VAR4 = VAR5;
        VAR4[0] = VAR7''; 
    }
    {
        wchar_t VAR8[100];
        wmemset(VAR8, VAR7'', 100-1); 
        VAR8[100-1] = VAR7''; 
        FUN4(VAR4, 100, VAR7"", VAR8);
        FUN5(VAR4);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN1();
    return 0;
}