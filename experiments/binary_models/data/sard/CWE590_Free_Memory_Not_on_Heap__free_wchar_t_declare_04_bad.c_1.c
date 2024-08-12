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
        {
            wchar_t VAR7[100];
            wmemset(VAR7, VAR8'', 100-1); 
            VAR7[100-1] = VAR8''; 
            VAR6 = VAR7;
        }
    }
    FUN2(VAR6);
    free(VAR6);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}