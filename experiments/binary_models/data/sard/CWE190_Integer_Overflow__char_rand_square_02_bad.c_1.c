#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    char VAR4;
    VAR4 = '';
    if(1)
    {
        VAR4 = (char)FUN2();
    }
    if(1)
    {
        {
            char VAR5 = VAR4 * VAR4;
            FUN3(VAR5);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}