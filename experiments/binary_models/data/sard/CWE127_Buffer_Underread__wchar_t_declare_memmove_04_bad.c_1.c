#VAR1 ""
#VAR1 <VAR2.VAR3>
static const int VAR4 = 1; 
static const int VAR5 = 0; 
void FUN1()
{
    wchar_t * VAR6;
    wchar_t VAR7[100];
    wmemset(VAR7, VAR8'', 100-1);
    VAR7[100-1] = VAR8'';
    if(VAR4)
    {
        VAR6 = VAR7 - 8;
    }
    {
        wchar_t VAR9[100];
        wmemset(VAR9, VAR8'', 100-1); 
        VAR9[100-1] = VAR8''; 
        memmove(VAR9, VAR6, 100*sizeof(wchar_t));
        VAR9[100-1] = VAR8'';
        FUN2(VAR9);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}