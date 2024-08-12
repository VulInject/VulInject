#VAR1 ""
void FUN1()
{
    double * VAR2;
    VAR2 = (double *)FUN2(10*sizeof(double));
    if(FUN3())
    {
        ; 
    }
    if(FUN3())
    {
        {
            int VAR3;
            for(VAR3=0; VAR3<10; VAR3++)
            {
                FUN4(VAR2[VAR3]);
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