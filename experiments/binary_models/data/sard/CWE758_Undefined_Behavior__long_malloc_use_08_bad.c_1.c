#VAR1 ""
int FUN1()
{
    return 1;
}
int FUN2()
{
    return 0;
}
void FUN3()
{
    if(FUN1())
    {
        {
            long * VAR2 = (long *)malloc(sizeof(long));
            if (VAR2 == NULL) {FUN4(-1);}
            long VAR3 = *VAR2; 
            free(VAR2);
            FUN5(VAR3);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN3();
    return 0;
}