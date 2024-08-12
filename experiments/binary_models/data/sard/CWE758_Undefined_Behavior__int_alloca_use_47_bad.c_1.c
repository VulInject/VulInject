#VAR1 ""
void FUN1()
{
    if(FUN2())
    {
        {
            int * VAR2 = (int *)FUN3(sizeof(int));
            int VAR3 = *VAR2; 
            FUN4(VAR3);
        }
    }
    else
    {
        {
            int VAR3;
            int * VAR2 = (int *)FUN3(sizeof(int));
            VAR3 = 5;
            *VAR2 = VAR3; 
            {
                int VAR3 = *VAR2;
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