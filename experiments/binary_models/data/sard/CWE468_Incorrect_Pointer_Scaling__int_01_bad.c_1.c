#VAR1 ""
void FUN1()
{
    {
        int VAR2[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
        int *VAR3 = VAR2;
        int VAR4 = *(VAR3+(2*sizeof(int)));
        FUN2(VAR4);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}