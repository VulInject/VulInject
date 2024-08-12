#VAR1 ""
#VAR1 <VAR2.VAR3>
static const int VAR4 = 1; 
static const int VAR5 = 0; 
void FUN1()
{
    char * VAR6;
    VAR6 = NULL;
    if(VAR4)
    {
        {
            char VAR7[] = "";
            VAR6 = strdup(VAR7);
            FUN2(VAR6);
        }
    }
    if(VAR4)
    {
        ; 
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}