#VAR1 ""
void FUN1()
{
    int VAR2;
    VAR2 = -1;
    if(FUN2())
    {
        VAR2 = FUN3();
    }
    else
    {
        VAR2 = 7;
    }
    if(FUN2())
    {
        FUN4(100 / VAR2);
    }
    else
    {
        if( VAR2 != 0 )
        {
            FUN4(100 / VAR2);
        }
        else
        {
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN1();
    return 0;
}