#VAR1 ""
#VAR1 <VAR2.VAR3>
static const int VAR4 = 1; 
static const int VAR5 = 0; 
void FUN1()
{
    wchar_t * VAR6;
    VAR6 = NULL;
    if(VAR4)
    {
        VAR6 = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (VAR6 == NULL) {FUN2(-1);}
        free(VAR6);
    }
    if(VAR4)
    {
        free(VAR6);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}