#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    wchar_t * VAR4;
    VAR4 = NULL;
    if(FUN2())
    {
        {
            wchar_t VAR5[] = VAR6"";
            VAR4 = FUN3(VAR5);
            FUN4(VAR4);
        }
    }
    else
    {
        VAR4 = (wchar_t *)FUN5(100*sizeof(wchar_t));
        wcscpy(VAR4, VAR6"");
        FUN4(VAR4);
    }
    if(FUN2())
    {
        ; 
    }
    else
    {
        free(VAR4);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN1();
    return 0;
}