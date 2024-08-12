#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR1 <VAR4.VAR3>
void FUN1()
{
    if(FUN2())
    {
        {
            double VAR5;
            VAR5 = (double)FUN3((double)-1);
            FUN4(VAR5);
        }
    }
    else
    {
        {
            double VAR5;
            VAR2 = 0; 
            VAR5 = (double)FUN3((double)-1);
            if (VAR2 == VAR6)
            {
                FUN5(1);
            }
            FUN4(VAR5);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN1();
    return 0;
}