#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
void FUN1()
{
    char * VAR5;
    char * VAR6 = (char *)FUN2((10)*sizeof(char));
    char * VAR7 = (char *)FUN2((10+1)*sizeof(char));
    if(5==5)
    {
        VAR5 = VAR6;
        VAR5[0] = ''; 
    }
    {
        char VAR8[10+1] = VAR4;
        memcpy(VAR5, VAR8, (strlen(VAR8) + 1) * sizeof(char));
        FUN3(VAR5);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}