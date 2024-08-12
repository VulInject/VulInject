#VAR1 ""
#VAR1 <VAR2.VAR3>
static const int VAR4 = 5;
void FUN1()
{
    wchar_t * VAR5;
    wchar_t VAR6[100];
    wmemset(VAR6, VAR7'', 100-1);
    VAR6[100-1] = VAR7'';
    if(VAR4==5)
    {
        VAR5 = VAR6 - 8;
    }
    {
        wchar_t VAR8[100*2];
        wmemset(VAR8, VAR7'', 100*2-1); 
        VAR8[100*2-1] = VAR7''; 
        wcscpy(VAR8, VAR5);
        FUN2(VAR8);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}