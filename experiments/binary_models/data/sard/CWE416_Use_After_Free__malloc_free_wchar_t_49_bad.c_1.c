#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    wchar_t * VAR4;
    VAR4 = NULL;
    if(VAR5==5)
    {
        VAR4 = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (VAR4 == NULL) {FUN2(-1);}
        wmemset(VAR4, VAR6'', 100-1);
        VAR4[100-1] = VAR6'';
        free(VAR4);
    }
    if(VAR5==5)
    {
        FUN3(VAR4);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}