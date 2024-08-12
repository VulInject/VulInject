#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    int VAR4;
    VAR4 = 0;
    if(VAR5)
    {
        VAR4 = VAR6;
    }
    if(VAR5)
    {
        {
            int VAR7 = VAR4 * VAR4;
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