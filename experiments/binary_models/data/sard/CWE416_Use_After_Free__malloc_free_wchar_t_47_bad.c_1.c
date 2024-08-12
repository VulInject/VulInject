#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    wchar_t * VAR4;
    VAR4 = NULL;
    if(FUN2())
    {
        VAR4 = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (VAR4 == NULL) {FUN3(-1);}
        wmemset(VAR4, VAR5'', 100-1);
        VAR4[100-1] = VAR5'';
        free(VAR4);
    }
    else
    {
        VAR4 = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (VAR4 == NULL) {FUN3(-1);}
        wmemset(VAR4, VAR5'', 100-1);
        VAR4[100-1] = VAR5'';
    }
    if(FUN2())
    {
        FUN4(VAR4);
    }
    else
    {
        ; 
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN1();
    return 0;
}