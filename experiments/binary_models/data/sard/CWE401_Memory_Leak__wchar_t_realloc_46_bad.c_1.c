#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    wchar_t * VAR4;
    VAR4 = NULL;
    if(FUN2())
    {
        VAR4 = (wchar_t *)realloc(VAR4, 100*sizeof(wchar_t));
        if (VAR4 == NULL) {FUN3(-1);}
        wcscpy(VAR4, VAR5"");
        FUN4(VAR4);
    }
    if(FUN2())
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