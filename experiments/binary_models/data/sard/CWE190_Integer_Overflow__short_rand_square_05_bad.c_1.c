#VAR1 ""
#VAR1 <VAR2.VAR3>
int VAR4 = 1; 
int VAR5 = 0; 
void FUN1()
{
    short VAR6;
    VAR6 = 0;
    if(VAR4)
    {
        VAR6 = (short)FUN2();
    }
    if(VAR4)
    {
        {
            short VAR7 = VAR6 * VAR6;
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