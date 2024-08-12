#VAR1 ""
int VAR2 = 1; 
int VAR3 = 0; 
void FUN1()
{
    VAR4 * VAR5;
    VAR5 = NULL;
    if(VAR2)
    {
        VAR5 = (VAR4 *)malloc(sizeof(VAR5));
        if (VAR5 == NULL) {FUN2(-1);}
        VAR5->VAR6 = 1;
        VAR5->VAR7 = 2;
    }
    FUN3(VAR5);
    free(VAR5);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}