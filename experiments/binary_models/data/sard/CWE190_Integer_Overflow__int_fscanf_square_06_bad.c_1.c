#VAR1 ""
#VAR1 <VAR2.VAR3>
static const int VAR4 = 5;
void FUN1()
{
    int VAR5;
    VAR5 = 0;
    if(VAR4==5)
    {
        fscanf(stdin, "", &VAR5);
    }
    if(VAR4==5)
    {
        {
            int VAR6 = VAR5 * VAR5;
            FUN2(VAR6);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}