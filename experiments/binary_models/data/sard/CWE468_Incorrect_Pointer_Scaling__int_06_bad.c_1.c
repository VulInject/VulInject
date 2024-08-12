#VAR1 ""
static const int VAR2 = 5;
void FUN1()
{
    if(VAR2==5)
    {
        {
            int VAR3[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
            int *VAR4 = VAR3;
            int VAR5 = *(VAR4+(2*sizeof(int)));
            FUN2(VAR5);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}