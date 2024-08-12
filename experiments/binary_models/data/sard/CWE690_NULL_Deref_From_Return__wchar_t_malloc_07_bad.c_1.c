#VAR1 ""
#VAR1 <VAR2.VAR3>
int VAR4 = 5;
void FUN1()
{
    wchar_t * VAR5;
    VAR5 = NULL; 
    VAR5 = (wchar_t *)malloc(20*sizeof(wchar_t));
    if(VAR4==5)
    {
        wcscpy(VAR5, VAR6"");
        FUN2(VAR5);
        free(VAR5);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}