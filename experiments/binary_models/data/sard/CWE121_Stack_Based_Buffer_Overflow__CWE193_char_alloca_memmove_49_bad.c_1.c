#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
void FUN1()
{
    char * VAR5;
    char * VAR6 = (char *)FUN2((10)*sizeof(char));
    char * VAR7 = (char *)FUN2((10+1)*sizeof(char));
    if(VAR8==5)
    {
        VAR5 = VAR6;
        VAR5[0] = ''; 
    }
    {
        char VAR9[10+1] = VAR4;
        memmove(VAR5, VAR9, (strlen(VAR9) + 1) * sizeof(char));
        FUN3(VAR5);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}