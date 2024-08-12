#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1(char * VAR4)
{
    {
        char VAR5[100];
        memset(VAR5, '', 100-1); 
        VAR5[100-1] = ''; 
        strncpy(VAR4, VAR5, 100-1);
        VAR4[100-1] = '';
        FUN2(VAR4);
    }
}
void FUN3()
{
    char * VAR4;
    void (*VAR6) (char *) = VAR7;
    char * VAR8 = (char *)FUN4(100*sizeof(char));
    memset(VAR8, '', 100-1);
    VAR8[100-1] = '';
    VAR4 = VAR8 - 8;
    FUN5(VAR4);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN3();
    return 0;
}