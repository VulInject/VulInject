#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    wchar_t * VAR4;
    wchar_t VAR5[50];
    wchar_t VAR6[100];
    if(FUN2())
    {
        VAR4 = VAR5;
        VAR4[0] = VAR7''; 
    }
    else
    {
        VAR4 = VAR6;
        VAR4[0] = VAR7''; 
    }
    {
        wchar_t VAR8[100];
        wmemset(VAR8, VAR7'', 100-1); 
        VAR8[100-1] = VAR7''; 
        memmove(VAR4, VAR8, 100*sizeof(wchar_t));
        VAR4[100-1] = VAR7''; 
        FUN3(VAR4);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}