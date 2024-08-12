#VAR1 ""
int VAR2 = 5;
void FUN1()
{
    if(VAR2==5)
    {
        {
            long * VAR3 = (long *)FUN2(sizeof(long));
            long VAR4 = *VAR3; 
            FUN3(VAR4);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}