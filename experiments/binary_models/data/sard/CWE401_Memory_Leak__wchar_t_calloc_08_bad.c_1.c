#VAR1 ""
#VAR1 <VAR2.VAR3>
int FUN1()
{
    return 1;
}
int FUN2()
{
    return 0;
}
void FUN3()
{
    wchar_t * VAR4;
    VAR4 = NULL;
    if(FUN1())
    {
        VAR4 = (wchar_t *)calloc(100, sizeof(wchar_t));
        if (VAR4 == NULL) {FUN4(-1);}
        wcscpy(VAR4, VAR5"");
        FUN5(VAR4);
    }
    if(FUN1())
    {
        ; 
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN3();
    return 0;
}