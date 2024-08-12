#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
void FUN1(char * VAR5)
{
    {
        char VAR6[10+1] = VAR4;
        memcpy(VAR5, VAR6, (strlen(VAR6) + 1) * sizeof(char));
        FUN2(VAR5);
    }
}
void FUN3()
{
    char * VAR5;
    void (*VAR7) (char *) = VAR8;
    char * VAR9 = (char *)FUN4((10)*sizeof(char));
    char * VAR10 = (char *)FUN4((10+1)*sizeof(char));
    VAR5 = VAR9;
    VAR5[0] = ''; 
    FUN5(VAR5);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN3();
    return 0;
}