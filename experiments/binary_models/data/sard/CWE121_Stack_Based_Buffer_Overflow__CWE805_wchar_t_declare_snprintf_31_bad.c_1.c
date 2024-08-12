#VAR1 ""
#VAR1 <VAR2.VAR3>
#define SNPRINTF _snwprintf
#define SNPRINTF swprintf
void FUN1()
{
    wchar_t * VAR4;
    wchar_t VAR5[50];
    wchar_t VAR6[100];
    VAR4 = VAR5;
    VAR4[0] = VAR7''; 
    {
        wchar_t * VAR8 = VAR4;
        wchar_t * VAR4 = VAR8;
        {
            wchar_t VAR9[100];
            wmemset(VAR9, VAR7'', 100-1); 
            VAR9[100-1] = VAR7''; 
            FUN2(VAR4, 100, VAR7"", VAR9);
            FUN3(VAR4);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}