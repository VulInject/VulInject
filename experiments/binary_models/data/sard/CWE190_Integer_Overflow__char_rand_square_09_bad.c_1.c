#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    char VAR4;
    VAR4 = '';
    if(VAR5)
    {
        VAR4 = (char)FUN2();
    }
    if(VAR5)
    {
        {
            char VAR6 = VAR4 * VAR4;
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