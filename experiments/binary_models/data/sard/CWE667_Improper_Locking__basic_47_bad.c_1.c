#VAR1 ""
#VAR1 ""
void FUN1()
{
    if(FUN2())
    {
        {
            static stdThreadLock VAR2 = NULL;
            if (!FUN3(&VAR2))
            {
                FUN4(1);
            }
            FUN5(VAR2);
        }
    }
    else
    {
        {
            static stdThreadLock VAR3 = NULL;
            if (!FUN3(&VAR3))
            {
                FUN4(1);
            }
            FUN5(VAR3);
            FUN6(VAR3);
            FUN7(VAR3);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN8(NULL) );
    FUN1();
    return 0;
}