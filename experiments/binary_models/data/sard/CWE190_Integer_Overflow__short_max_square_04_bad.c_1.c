#VAR1 ""
#VAR1 <VAR2.VAR3>
static const int VAR4 = 1; 
static const int VAR5 = 0; 
void FUN1()
{
    short VAR6;
    VAR6 = 0;
    if(VAR4)
    {
        VAR6 = VAR7;
    }
    if(VAR4)
    {
        {
            short VAR8 = VAR6 * VAR6;
            FUN2(VAR8);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}