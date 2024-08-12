#VAR1 ""
#VAR1 <VAR2.VAR3>
int VAR4 = 5;
void FUN1()
{
    wchar_t * VAR5;
    wchar_t * VAR6 = (wchar_t *)FUN2(100*sizeof(wchar_t));
    wmemset(VAR6, VAR7'', 100-1);
    VAR6[100-1] = VAR7'';
    if(VAR4==5)
    {
        VAR5 = VAR6 - 8;
    }
    {
        wchar_t VAR8[100];
        wmemset(VAR8, VAR7'', 100-1); 
        VAR8[100-1] = VAR7''; 
        memcpy(VAR5, VAR8, 100*sizeof(wchar_t));
        VAR5[100-1] = VAR7'';
        FUN3(VAR5);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}