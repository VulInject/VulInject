#VAR1 ""
void FUN1()
{
    goto VAR2;
VAR2:
    {
        int * VAR3 = (int *)FUN2(sizeof(int));
        int VAR4 = *VAR3; 
        FUN3(VAR4);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}