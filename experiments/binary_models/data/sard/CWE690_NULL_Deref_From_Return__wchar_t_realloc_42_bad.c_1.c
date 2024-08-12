#VAR1 ""
#VAR1 <VAR2.VAR3>
wchar_t * FUN1(wchar_t * VAR4)
{
    VAR4 = (wchar_t *)realloc(VAR4, 20*sizeof(wchar_t));
    return VAR4;
}
void FUN2()
{
    wchar_t * VAR4;
    VAR4 = NULL; 
    VAR4 = FUN1(VAR4);
    wcscpy(VAR4, VAR5"");
    FUN3(VAR4);
    free(VAR4);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN2();
    return 0;
}