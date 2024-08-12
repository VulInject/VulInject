#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    short VAR4;
    VAR4 = 0;
    while(1)
    {
        VAR4 = VAR5;
        break;
    }
    while(1)
    {
        {
            short VAR6 = VAR4 * VAR4;
            FUN2(VAR6);
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