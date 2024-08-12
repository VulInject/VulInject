#VAR1 ""
#define UNLINK _unlink
#VAR1 <VAR2.VAR3>
#define UNLINK unlink
#define NUM_CHECK 20000
static const int VAR4 = 1; 
static const int VAR5 = 0; 
void FUN1()
{
    if(VAR4)
    {
        srand((unsigned)FUN2(NULL));
        if (rand() == VAR6)
        {
            FUN3("");
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN2(NULL) );
    FUN1();
    return 0;
}