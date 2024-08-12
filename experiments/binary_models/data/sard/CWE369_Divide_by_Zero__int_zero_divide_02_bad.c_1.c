#VAR1 ""
void FUN1()
{
    int VAR2;
    VAR2 = -1;
    if(1)
    {
        VAR2 = 0;
    }
    if(1)
    {
        FUN2(100 / VAR2);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}