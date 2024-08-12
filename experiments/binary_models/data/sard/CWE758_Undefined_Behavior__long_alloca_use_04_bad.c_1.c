#VAR1 ""
static const int VAR2 = 1; 
static const int VAR3 = 0; 
void FUN1()
{
    if(VAR2)
    {
        {
            long * VAR4 = (long *)FUN2(sizeof(long));
            long VAR5 = *VAR4; 
            FUN3(VAR5);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}