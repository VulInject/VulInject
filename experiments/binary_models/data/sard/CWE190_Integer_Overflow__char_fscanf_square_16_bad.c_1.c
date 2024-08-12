#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    char VAR4;
    VAR4 = '';
    while(1)
    {
        fscanf (stdin, "", &VAR4);
        break;
    }
    while(1)
    {
        {
            char VAR5 = VAR4 * VAR4;
            FUN2(VAR5);
        }
        break;
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}