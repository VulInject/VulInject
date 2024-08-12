#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1(wchar_t * VAR4)
{
    {
        wchar_t VAR5[100];
        wmemset(VAR5, VAR6'', 100-1); 
        VAR5[100-1] = VAR6''; 
        wcscpy(VAR4, VAR5);
        FUN2(VAR4);
    }
}
void FUN3()
{
    wchar_t * VAR4;
    wchar_t * VAR7 = (wchar_t *)FUN4(100*sizeof(wchar_t));
    wmemset(VAR7, VAR6'', 100-1);
    VAR7[100-1] = VAR6'';
    VAR4 = VAR7 - 8;
    FUN1(VAR4);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}