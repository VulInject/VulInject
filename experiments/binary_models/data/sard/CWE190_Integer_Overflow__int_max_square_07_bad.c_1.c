#VAR1 ""
#VAR1 <VAR2.VAR3>
int VAR4 = 5;
void FUN1()
{
    int VAR5;
    VAR5 = 0;
    if(VAR4==5)
    {
        VAR5 = VAR6;
    }
    if(VAR4==5)
    {
        {
            int VAR7 = VAR5 * VAR5;
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