#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    short VAR4;
    VAR4 = 0;
    if(FUN2())
    {
        fscanf (stdin, "", &VAR4);
    }
    if(FUN2())
    {
        {
            short VAR5 = VAR4 * VAR4;
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