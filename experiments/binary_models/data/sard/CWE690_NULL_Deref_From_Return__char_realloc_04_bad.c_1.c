#VAR1 ""
#VAR1 <VAR2.VAR3>
static const int VAR4 = 1; 
static const int VAR5 = 0; 
void FUN1()
{
    char * VAR6;
    VAR6 = NULL; 
    VAR6 = (char *)realloc(VAR6, 20*sizeof(char));
    if(VAR4)
    {
        strcpy(VAR6, "");
        FUN2(VAR6);
        free(VAR6);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}