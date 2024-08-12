#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1(wchar_t * VAR4)
{
    wcscpy(VAR4, VAR5"");
    FUN2(VAR4);
    free(VAR4);
}
void FUN3()
{
    wchar_t * VAR4;
    void (*VAR6) (wchar_t *) = VAR7;
    VAR4 = NULL; 
    VAR4 = (wchar_t *)calloc(20, sizeof(wchar_t));
    FUN4(VAR4);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}