#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1(wchar_t * VAR4)
{
    ; 
}
void FUN2()
{
    wchar_t * VAR4;
    VAR4 = NULL;
    VAR4 = (wchar_t *)realloc(VAR4, 100*sizeof(wchar_t));
    if (VAR4 == NULL) {FUN3(-1);}
    wcscpy(VAR4, VAR5"");
    FUN4(VAR4);
    FUN1(VAR4);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN2();
    return 0;
}