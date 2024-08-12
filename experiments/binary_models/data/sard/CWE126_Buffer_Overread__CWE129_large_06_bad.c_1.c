#VAR1 ""
static const int VAR2 = 5;
void FUN1()
{
    int VAR3;
    VAR3 = -1;
    if(VAR2==5)
    {
        VAR3 = 10;
    }
    if(VAR2==5)
    {
        {
            int VAR4[10] = { 0 };
            if (VAR3 >= 0)
            {
                FUN2(VAR4[VAR3]);
            }
            else
            {
            }
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}