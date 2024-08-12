#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1(char * VAR4)
{
    {
        char VAR5[100];
        memset(VAR5, '', 100-1); 
        VAR5[100-1] = ''; 
        memcpy(VAR4, VAR5, 100*sizeof(char));
        VAR4[100-1] = '';
        FUN2(VAR4);
    }
}
void FUN3()
{
    char * VAR4;
    char * VAR6 = (char *)FUN4(100*sizeof(char));
    memset(VAR6, '', 100-1);
    VAR6[100-1] = '';
    VAR4 = VAR6 - 8;
    FUN1(VAR4);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}