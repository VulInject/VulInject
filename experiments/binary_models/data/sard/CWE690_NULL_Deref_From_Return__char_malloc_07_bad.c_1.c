#VAR1 ""
#VAR1 <VAR2.VAR3>
int VAR4 = 5;
void FUN1()
{
    char * VAR5;
    VAR5 = NULL; 
    VAR5 = (char *)malloc(20*sizeof(char));
    if(VAR4==5)
    {
        strcpy(VAR5, "");
        FUN2(VAR5);
        free(VAR5);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}