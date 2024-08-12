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
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN1();
    return 0;
}