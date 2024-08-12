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
    VAR4 = NULL; 
    VAR4 = (wchar_t *)realloc(VAR4, 20*sizeof(wchar_t));
    FUN1(VAR4);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN3();
    return 0;
}