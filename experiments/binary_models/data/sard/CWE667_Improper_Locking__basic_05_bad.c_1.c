#VAR1 ""
#VAR1 ""
int VAR2 = 1; 
int VAR3 = 0; 
void FUN1()
{
    if(VAR2)
    {
        {
            static stdThreadLock VAR4 = NULL;
            if (!FUN2(&VAR4))
            {
                FUN3(1);
            }
            FUN4(VAR4);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN1();
    return 0;
}