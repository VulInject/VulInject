#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    wchar_t * VAR4;
    wchar_t VAR5[100];
    wmemset(VAR5, VAR6'', 100-1);
    VAR5[100-1] = VAR6'';
    while(1)
    {
        VAR4 = VAR5 - 8;
        break;
    }
    {
        wchar_t VAR7[100*2];
        wmemset(VAR7, VAR6'', 100*2-1); 
        VAR7[100*2-1] = VAR6''; 
        wcscpy(VAR7, VAR4);
        FUN2(VAR7);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}