#VAR1 ""
#define UNLINK _unlink
#VAR1 <VAR2.VAR3>
#define UNLINK unlink
#define COUNT_CHECK 20000
int VAR4 = 5;
void FUN1()
{
    if(VAR4==5)
    {
        {
            int VAR5 = 0;
            do
            {
                if (VAR5 == VAR6)
                {
                    FUN2("");
                }
                VAR5++;
            }
            while(1 == 1);   
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}