#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    wchar_t * VAR4;
    VAR4 = NULL;
    VAR4 = (wchar_t *)malloc(100*sizeof(wchar_t));
    if (VAR4 == NULL) {FUN2(-1);}
    free(VAR4);
    {
        wchar_t * VAR5 = VAR4;
        wchar_t * VAR4 = VAR5;
        free(VAR4);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}