#VAR1 ""
#define UNLINK _unlink
#VAR1 <VAR2.VAR3>
#define UNLINK unlink
#define COUNT_CHECK 20000
void FUN1()
{
    if(1)
    {
        {
            int VAR4 = 0;
            do
            {
                if (VAR4 == VAR5)
                {
                    FUN2("");
                }
                VAR4++;
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