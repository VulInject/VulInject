#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    char VAR4;
    VAR4 = '';
    VAR4 = VAR5;
    {
        char VAR6 = VAR4;
        char VAR4 = VAR6;
        {
            char VAR7 = VAR4 * VAR4;
            FUN2(VAR7);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}