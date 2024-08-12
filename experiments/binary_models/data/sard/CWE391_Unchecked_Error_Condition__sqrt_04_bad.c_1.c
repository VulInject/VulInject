#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR1 <VAR4.VAR3>
static const int VAR5 = 1; 
static const int VAR6 = 0; 
void FUN1()
{
    if(VAR5)
    {
        {
            double VAR7;
            VAR7 = (double)FUN2((double)-1);
            FUN3(VAR7);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}