#VAR1 ""
#VAR1 <VAR2.VAR3>
wchar_t * FUN1(wchar_t * VAR4)
{
    VAR4 = (wchar_t *)malloc(100*sizeof(wchar_t));
    if (VAR4 == NULL) {FUN2(-1);}
    free(VAR4);
    return VAR4;
}
void FUN3()
{
    wchar_t * VAR4;
    VAR4 = NULL;
    VAR4 = FUN1(VAR4);
    free(VAR4);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN3();
    return 0;
}