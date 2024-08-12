#VAR1 ""
void FUN1()
{
    if(FUN2())
    {
        {
            long * VAR2 = (long *)FUN3(sizeof(long));
            long VAR3 = *VAR2; 
            FUN4(VAR3);
        }
    }
    else
    {
        {
            long VAR3;
            long * VAR2 = (long *)FUN3(sizeof(long));
            VAR3 = 5L;
            *VAR2 = VAR3; 
            {
                long VAR3 = *VAR2;
                FUN4(VAR3);
            }
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN1();
    return 0;
}