#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    char * VAR4;
    char * VAR5 = (char *)FUN2(100*sizeof(char));
    memset(VAR5, '', 100-1);
    VAR5[100-1] = '';
    switch(6)
    {
    case 6:
        VAR4 = VAR5 - 8;
        break;
    default:
        break;
    }
    {
        char VAR6[100];
        memset(VAR6, '', 100-1); 
        VAR6[100-1] = ''; 
        memmove(VAR6, VAR4, 100*sizeof(char));
        VAR6[100-1] = '';
        FUN3(VAR6);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}