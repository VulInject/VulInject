#VAR1 ""
#VAR1 <VAR2.VAR3>
int VAR4 = 1; 
int VAR5 = 0; 
void FUN1()
{
    wchar_t * VAR6;
    VAR6 = NULL; 
    VAR6 = (wchar_t *)malloc(20*sizeof(wchar_t));
    if(VAR4)
    {
        wcscpy(VAR6, VAR7"");
        FUN2(VAR6);
        free(VAR6);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}