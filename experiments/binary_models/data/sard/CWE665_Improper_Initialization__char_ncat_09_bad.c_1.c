#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    char * VAR4;
    char VAR5[100];
    VAR4 = VAR5;
    if(VAR6)
    {
        ; 
    }
    {
        size_t VAR7;
        char VAR8[100];
        memset(VAR8, '', 100-1); 
        VAR8[100-1] = ''; 
        VAR7 = strlen(VAR8);
        strncat(VAR4, VAR8, VAR7);
        FUN2(VAR4);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}