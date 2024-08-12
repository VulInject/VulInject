#VAR1 ""
void FUN1(char VAR2)
{
    if(VAR2 < 0) 
    {
        char VAR3 = VAR2 * 2;
        FUN2(VAR3);
    }
}
void FUN3()
{
    char VAR2;
    VAR2 = '';
    VAR2 = (char)FUN4();
    FUN1(VAR2);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}