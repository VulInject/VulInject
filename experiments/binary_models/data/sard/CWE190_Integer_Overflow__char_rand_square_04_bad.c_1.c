#VAR1 ""
#VAR1 <VAR2.VAR3>
static const int VAR4 = 1; 
static const int VAR5 = 0; 
void FUN1()
{
    char VAR6;
    VAR6 = '';
    if(VAR4)
    {
        VAR6 = (char)FUN2();
    }
    if(VAR4)
    {
        {
            char VAR7 = VAR6 * VAR6;
            FUN3(VAR7);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}