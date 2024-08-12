#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
void FUN1()
{
    char * VAR5;
    VAR5 = NULL;
    while(1)
    {
        VAR5 = (char *)malloc(10*sizeof(char));
        if (VAR5 == NULL) {FUN2(-1);}
        break;
    }
    {
        char VAR6[10+1] = VAR4;
        memcpy(VAR5, VAR6, (strlen(VAR6) + 1) * sizeof(char));
        FUN3(VAR5);
        free(VAR5);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}