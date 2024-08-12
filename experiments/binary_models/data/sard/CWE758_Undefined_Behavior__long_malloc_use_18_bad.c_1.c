#VAR1 ""
void FUN1()
{
    goto VAR2;
VAR2:
    {
        long * VAR3 = (long *)malloc(sizeof(long));
        if (VAR3 == NULL) {FUN2(-1);}
        long VAR4 = *VAR3; 
        free(VAR3);
        FUN3(VAR4);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}