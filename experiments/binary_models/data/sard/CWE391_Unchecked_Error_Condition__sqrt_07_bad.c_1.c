#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR1 <VAR4.VAR3>
int VAR5 = 5;
void FUN1()
{
    if(VAR5==5)
    {
        {
            double VAR6;
            VAR6 = (double)FUN2((double)-1);
            FUN3(VAR6);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}