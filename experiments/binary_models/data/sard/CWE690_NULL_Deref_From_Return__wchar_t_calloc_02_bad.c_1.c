#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    wchar_t * VAR4;
    VAR4 = NULL; 
    VAR4 = (wchar_t *)calloc(20, sizeof(wchar_t));
    if(1)
    {
        wcscpy(VAR4, VAR5"");
        FUN2(VAR4);
        free(VAR4);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}