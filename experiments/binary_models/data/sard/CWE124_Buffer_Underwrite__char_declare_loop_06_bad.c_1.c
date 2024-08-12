#VAR1 ""
#VAR1 <VAR2.VAR3>
static const int VAR4 = 5;
void FUN1()
{
    char * VAR5;
    char VAR6[100];
    memset(VAR6, '', 100-1);
    VAR6[100-1] = '';
    if(VAR4==5)
    {
        VAR5 = VAR6 - 8;
    }
    {
        size_t VAR7;
        char VAR8[100];
        memset(VAR8, '', 100-1); 
        VAR8[100-1] = ''; 
        for (VAR7 = 0; VAR7 < 100; VAR7++)
        {
            VAR5[VAR7] = VAR8[VAR7];
        }
        VAR5[100-1] = '';
        FUN2(VAR5);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}