#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    short VAR4;
    VAR4 = 0;
    if(VAR5)
    {
        VAR4 = VAR6;
    }
    if(VAR5)
    {
        {
            short VAR7 = VAR4 * VAR4;
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