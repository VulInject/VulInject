#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    char * VAR4;
    char * *VAR5 = &VAR4;
    char * *VAR6 = &VAR4;
    VAR4 = NULL;
    {
        char * VAR4 = *VAR5;
        VAR4 = (char *)calloc(100, sizeof(char));
        if (VAR4 == NULL) {FUN2(-1);}
        strcpy(VAR4, "");
        FUN3(VAR4);
        *VAR5 = VAR4;
    }
    {
        char * VAR4 = *VAR6;
        ; 
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}