#VAR1 ""
#VAR1 <VAR2.VAR3>
int VAR4 = 5;
void FUN1()
{
    char VAR5;
    VAR5 = '';
    if(VAR4==5)
    {
        VAR5 = (char)FUN2();
    }
    if(VAR4==5)
    {
        {
            char VAR6 = VAR5 * VAR5;
            FUN3(VAR6);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}