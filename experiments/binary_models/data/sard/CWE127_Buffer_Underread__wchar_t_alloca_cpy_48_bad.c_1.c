#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    wchar_t * VAR4;
    wchar_t * VAR5 = (wchar_t *)FUN2(100*sizeof(wchar_t));
    wmemset(VAR5, VAR6'', 100-1);
    VAR5[100-1] = VAR6'';
    if(VAR7==5)
    {
        VAR4 = VAR5 - 8;
    }
    {
        wchar_t VAR8[100*2];
        wmemset(VAR8, VAR6'', 100*2-1); 
        VAR8[100*2-1] = VAR6''; 
        wcscpy(VAR8, VAR4);
        FUN3(VAR8);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}