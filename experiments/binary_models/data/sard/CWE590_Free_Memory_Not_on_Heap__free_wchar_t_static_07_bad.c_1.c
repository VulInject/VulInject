#VAR1 ""
#VAR1 <VAR2.VAR3>
int VAR4 = 5;
void FUN1()
{
    wchar_t * VAR5;
    VAR5 = NULL; 
    if(VAR4==5)
    {
        {
            wchar_t VAR6[100];
            wmemset(VAR6, VAR7'', 100-1); 
            VAR6[100-1] = VAR7''; 
            VAR5 = VAR6;
        }
    }
    FUN2(VAR5);
    free(VAR5);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}