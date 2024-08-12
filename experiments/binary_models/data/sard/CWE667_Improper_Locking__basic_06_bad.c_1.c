#VAR1 ""
#VAR1 ""
static const int VAR2 = 5;
void FUN1()
{
    if(VAR2==5)
    {
        {
            static stdThreadLock VAR3 = NULL;
            if (!FUN2(&VAR3))
            {
                FUN3(1);
            }
            FUN4(VAR3);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN1();
    return 0;
}