#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    char * VAR4;
    VAR4 = NULL; 
    VAR4 = (char *)calloc(20, sizeof(char));
    if(FUN2())
    {
        strcpy(VAR4, "");
        FUN3(VAR4);
        free(VAR4);
    }
    else
    {
        if (VAR4 != NULL)
        {
            strcpy(VAR4, "");
            FUN3(VAR4);
            free(VAR4);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}