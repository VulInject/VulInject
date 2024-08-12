#VAR1 ""
#define UNLINK _unlink
#VAR1 <VAR2.VAR3>
#define UNLINK unlink
#define NUM_CHECK 20000
void FUN1()
{
    if(FUN2())
    {
        srand((unsigned)FUN3(NULL));
        if (rand() == VAR4)
        {
            FUN4("");
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}