#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    char * VAR4;
    char * VAR5 = (char *)FUN2(50*sizeof(char));
    char * VAR6 = (char *)FUN2(100*sizeof(char));
    memset(VAR5, '', 50-1); 
    VAR5[50-1] = ''; 
    memset(VAR6, '', 100-1); 
    VAR6[100-1] = ''; 
    switch(6)
    {
    case 6:
        VAR4 = VAR5;
        break;
    default:
        break;
    }
    {
        size_t VAR7, VAR8;
        char VAR9[100];
        memset(VAR9, '', 100-1);
        VAR9[100-1] = ''; 
        VAR8 = strlen(VAR9);
        for (VAR7 = 0; VAR7 < VAR8; VAR7++)
        {
            VAR9[VAR7] = VAR4[VAR7];
        }
        VAR9[100-1] = '';
        FUN3(VAR9);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}