#VAR1 ""
#VAR1 ""
void FUN1()
{
    if(5==5)
    {
        {
            static stdThreadLock VAR2 = NULL;
            if (!FUN2(&VAR2))
            {
                FUN3(1);
            }
            FUN4(VAR2);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN1();
    return 0;
}